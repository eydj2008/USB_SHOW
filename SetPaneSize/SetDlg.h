#pragma once

#include "resource.h"       // main symbols

// SetDlg �Ի���

class SetDlg : public CDialog
{
	DECLARE_DYNAMIC(SetDlg)

public:
	SetDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SetDlg();

// �Ի�������
	enum { IDD = IDD_DLG_BAR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedDrawBtn();
};
