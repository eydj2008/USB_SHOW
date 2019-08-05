// SetDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SetDlg.h"
#include "afxdialogex.h"


// SetDlg 对话框

IMPLEMENT_DYNAMIC(SetDlg, CDialog)

SetDlg::SetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(SetDlg::IDD, pParent)
{

}

SetDlg::~SetDlg()
{
}

void SetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SetDlg, CDialog)
	ON_BN_CLICKED(IDC_DRAW_BTN, &SetDlg::OnBnClickedDrawBtn)
END_MESSAGE_MAP()


// SetDlg 消息处理程序


void SetDlg::OnBnClickedDrawBtn()
{
	// TODO: 在此添加控件通知处理程序代码
}
