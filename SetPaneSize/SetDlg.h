#pragma once

#include "resource.h"       // main symbols

// SetDlg 对话框

class SetDlg : public CDialog
{
	DECLARE_DYNAMIC(SetDlg)

public:
	SetDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SetDlg();

// 对话框数据
	enum { IDD = IDD_DLG_BAR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedDrawBtn();
};
