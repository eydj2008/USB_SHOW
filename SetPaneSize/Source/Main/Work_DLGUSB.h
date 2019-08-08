#pragma once

#include "BootLoader.h"

#define BOOTLOADER_ROUTINE_TIMER 1
#define BOOTLOADER_GUI_UPDATE_TIMER 2
#define SWAP(x)   ( ((x<<24)&(0xFF000000)) | ((x<<8)&(0x00FF0000))  | ((x>>24)&(0x000000FF)) | ((x>>8)&(0x0000FF00)) )

#define SAVE 1
#define RESTORE 2

// CWork_DLGUSB 对话框

class CWork_DLGUSB : public CDialog
{
	DECLARE_DYNAMIC(CWork_DLGUSB)

public:
	CWork_DLGUSB(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CWork_DLGUSB();

// 对话框数据
	enum { IDD = IDD_DIALOG_USB };

	CString stringEditBoxUSBVID;
	CString stringEditBoxUSBPID;

protected:
	UINT PortSelected;
	CBootLoader mBootLoader;
	bool EraseProgVer;
	bool ConnectionEstablished;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedButtonCon();
	afx_msg void OnBnClickedButtonDownload();
	
};
