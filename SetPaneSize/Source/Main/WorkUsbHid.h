#pragma once

#include "Work_DLGUSB.h"
// CWorkUsbHid

class CWorkUsbHid : public CDockablePane
{
	DECLARE_DYNAMIC(CWorkUsbHid)

public:
	CWorkUsbHid();
	virtual ~CWorkUsbHid();
public:
	//enum { IDD = IDD_DIALOG_USB2 };

	CWork_DLGUSB m_USBDlg;

	

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};


