// Work_DLGUSB.cpp : 实现文件
//

#include "stdafx.h"
#include "SetPaneSize.h"
#include "Work_DLGUSB.h"

//#include "Ethernet.h"
//#include "ComPort.h"
//#include "USB_HID.h"
//#include "Hex.h"
//#include "BootLoader.h"


// CWork_DLGUSB 对话框

IMPLEMENT_DYNAMIC(CWork_DLGUSB, CDialog)

	CWork_DLGUSB::CWork_DLGUSB(CWnd* pParent /*=NULL*/)
	: CDialog(CWork_DLGUSB::IDD, pParent)
{
	stringEditBoxUSBVID = "0x28BD";
	stringEditBoxUSBPID = "0x1000";
}

CWork_DLGUSB::~CWork_DLGUSB()
{
}

void CWork_DLGUSB::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_EDIT_USB_PID, m_USB_PID);
	DDX_Text(pDX, IDC_EDIT_USB_VID, stringEditBoxUSBVID);
	DDX_Text(pDX, IDC_EDIT_USB_PID, stringEditBoxUSBPID);
}


BEGIN_MESSAGE_MAP(CWork_DLGUSB, CDialog)
	ON_WM_PAINT()
	ON_WM_CREATE()
	ON_WM_SIZE()
	ON_WM_TIMER()

	ON_BN_CLICKED(IDC_BUTTON_CON, &CWork_DLGUSB::OnBnClickedButtonCon)
	ON_BN_CLICKED(IDC_BUTTON_Download, &CWork_DLGUSB::OnBnClickedButtonDownload)
END_MESSAGE_MAP()


// CWork_DLGUSB 消息处理程序


//BOOL CWork_DLGUSB::OnInitDialog()
//{
//	CDialog::OnInitDialog();
//
//	// TODO:  在此添加额外的初始化
//
//	return TRUE;  // return TRUE unless you set the focus to a control
//	// 异常: OCX 属性页应返回 FALSE
//}



BOOL CWork_DLGUSB::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化

	PortSelected = 0;

	//UpdateData(false);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}


void CWork_DLGUSB::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 在此处添加消息处理程序代码
	// 不为绘图消息调用 CDialog::OnPaint()
}


int CWork_DLGUSB::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码

	return 0;
}


void CWork_DLGUSB::OnSize(UINT nType, int cx, int cy)
{
	CDialog::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码


}

void CWork_DLGUSB::OnTimer(UINT nIDEvent)
{
	int Lower;
	int Upper;

	if(nIDEvent == BOOTLOADER_GUI_UPDATE_TIMER)
	{
		// Update progress bar.
		mBootLoader.GetProgress(&Lower, &Upper);
		//ctrlProgressBar.SetRange( 0, Upper );
		//ctrlProgressBar.SetPos(Lower);		
	}



	CDialog::OnTimer(nIDEvent);
}


void CWork_DLGUSB::OnBnClickedButtonCon()
{
	// TODO: 在此添加控件通知处理程序代码
	//UpdateData(TRUE);

	//UINT vid;
	//UINT pid;

	//sscanf(stringEditBoxUSBVID, "%X", &vid);
	//sscanf(stringEditBoxUSBPID, "%X", &pid);
	//// Update the screen with what VID and PID we have read.
	//stringEditBoxUSBVID.FormatMessage("0x%1!X!",vid);
	//stringEditBoxUSBPID.FormatMessage("0x%1!X!",pid);

	INT comport=1;
	INT baud=9600;
	CString string;
	UINT vid=0;
	UINT pid=0;
	ULONG ip=0;
	USHORT skt=0;

	UpdateData(TRUE);

	if(ConnectionEstablished)
	{
		// Already connected. Disconnect now.
		ConnectionEstablished = false;

		// Shut down the rx-tx thread, if already opened.
		mBootLoader.ShutdownThread();

		if(mBootLoader.GetPortOpenStatus(PortSelected))
		{
			// com port already opened. close com port
			mBootLoader.ClosePort(PortSelected);			
		}

		// Print console.
		//PrintKonsole("Device disconnected");
		//EnableAllButtons(FALSE);

		//ctrlButtonConnectDevice.SetWindowText("Connect");
		//ctrlButtonConnectDevice.EnableWindow(TRUE);
	}
	else
	{
		// Establish new connection.
		//comport = ctrlComboBoxComPort.GetCurSel();
		//baud = ctrlComboBoxBaudRate.GetCurSel();

		sscanf(stringEditBoxUSBVID, "%X", &vid);
		sscanf(stringEditBoxUSBPID, "%X", &pid);
		// Update the screen with what VID and PID we have read.
		stringEditBoxUSBVID.FormatMessage("0x%1!X!",vid);
		stringEditBoxUSBPID.FormatMessage("0x%1!X!",pid);
		// Read ip address;
		//ip = SWAP(ip_value);
		//skt = (USHORT)valEditBoxSocket;
		UpdateData(FALSE);

		if(mBootLoader.GetPortOpenStatus(PortSelected))
		{
			// com port already opened. close com port
			mBootLoader.ClosePort(PortSelected);			
		}
		// Open Communication port freshly.
		mBootLoader.OpenPort(PortSelected, comport, baud, vid, pid, skt, ip, GetSafeHwnd());


		if(mBootLoader.GetPortOpenStatus(PortSelected))
		{	// COM port opened.
			// Shut down the rx-tx thread, if already opened.
			mBootLoader.ShutdownThread();
			// Create a new thread to do Rx Tx in the back ground.			
			mBootLoader.CreateRxTxThread(GetSafeHwnd()); // Create Rx Tx thread.
			// Trigger Read boot info command
			mBootLoader.SendCommand(READ_BOOT_INFO, 30, 200);					

			// Start timer to handle GUI updates.
			SetTimer(BOOTLOADER_GUI_UPDATE_TIMER, 300, NULL);  // Timer elapses every 300 ms.

			// Print a message to user/
			//PrintKonsole("Please reset device and invoke bootloader");
			// Save button status.
			//SaveButtonStatus();
			// Disable all buttons to avoid further operations
			//EnableAllButtons(false);
		}


	}

}


void CWork_DLGUSB::OnBnClickedButtonDownload()
{
	// TODO: 在此添加控件通知处理程序代码
}



