// CWorkUsbHid.cpp : 实现文件
//

#include "stdafx.h"
#include "SetPaneSize.h"
#include "WorkUsbHid.h"


// CWorkUsbHid

IMPLEMENT_DYNAMIC(CWorkUsbHid, CDockablePane)

	CWorkUsbHid::CWorkUsbHid()
{

}

CWorkUsbHid::~CWorkUsbHid()
{
}


BEGIN_MESSAGE_MAP(CWorkUsbHid, CDockablePane)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()


void CWorkUsbHid::DoDataExchange(CDataExchange* pDX)
{
	CDockablePane::DoDataExchange(pDX);




}

// CWorkUsbHid 消息处理程序




int CWorkUsbHid::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDockablePane::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码

	//UpdateData(false);  //TST?

	//SetDlgItemText(IDC_EDIT_VID, "123");

	//CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT_VID);
	//pEdit->SetWindowText("123");

	CRect rectDummy;
	rectDummy.SetRectEmpty();

	 ///创建选项卡窗口:
	if (!m_USBDlg.Create(IDD_DIALOG_USB, this))
	{
	     MessageBox (_T ("ng !!! m_USBDlg.Create."));
		   TRACE0("未能创建输出选项卡窗口/n");
		   return-1;   // 未能创建
	}
	m_USBDlg.ShowWindow(SW_SHOW);

	return 0;
}


void CWorkUsbHid::OnSize(UINT nType, int cx, int cy)
{
	CDockablePane::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	// 选项卡控件应覆盖整个工作区
	m_USBDlg.SetWindowPos (this, -1, -1, cx, cy, SWP_NOMOVE |SWP_NOACTIVATE | SWP_NOZORDER);
	m_USBDlg.ShowWindow(SW_SHOW);
}
