#if !defined(AFX_GRAPHSETTINGSDLG_H__C66CF6A1_A273_4A65_BA44_4B01A193A9AE__INCLUDED_)
#define AFX_GRAPHSETTINGSDLG_H__C66CF6A1_A273_4A65_BA44_4B01A193A9AE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GraphSettingsDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGraphSettingsDlg dialog

class CGraphSettingsDlg : public CDialog
{
// Construction
public:
	CGraphSettingsDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CGraphSettingsDlg)
	enum { IDD = IDD_GET_GRAPH_SETTINGS };
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGraphSettingsDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CGraphSettingsDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRAPHSETTINGSDLG_H__C66CF6A1_A273_4A65_BA44_4B01A193A9AE__INCLUDED_)
