#pragma once

#include "BootLoader.h"

// CWork_DLGUSB �Ի���

class CWork_DLGUSB : public CDialog
{
	DECLARE_DYNAMIC(CWork_DLGUSB)

public:
	CWork_DLGUSB(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CWork_DLGUSB();

// �Ի�������
	enum { IDD = IDD_DIALOG_USB };

	CString stringEditBoxUSBVID;
	CString stringEditBoxUSBPID;

	//CBootLoader mBootLoader;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedButtonCon();
	afx_msg void OnBnClickedButtonDownload();
};
