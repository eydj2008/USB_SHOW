// SetDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SetDlg.h"
#include "afxdialogex.h"


// SetDlg �Ի���

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


// SetDlg ��Ϣ�������


void SetDlg::OnBnClickedDrawBtn()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
