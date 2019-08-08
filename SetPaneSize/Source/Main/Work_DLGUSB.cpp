// Work_DLGUSB.cpp : 实现文件
//

#include "stdafx.h"
#include "SetPaneSize.h"
#include "Work_DLGUSB.h"


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

	UINT vid;
	UINT pid;
	sscanf(stringEditBoxUSBVID, "%X", &vid);
	sscanf(stringEditBoxUSBPID, "%X", &pid);
	// Update the screen with what VID and PID we have read.
	stringEditBoxUSBVID.FormatMessage("0x%1!X!",vid);
	stringEditBoxUSBPID.FormatMessage("0x%1!X!",pid);

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
