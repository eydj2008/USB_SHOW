#if !defined(AFX_GRAPHDLG_H__FD14A343_C9DA_495D_825C_9B1366FB785F__INCLUDED_)
#define AFX_GRAPHDLG_H__FD14A343_C9DA_495D_825C_9B1366FB785F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GraphDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGraphDlg dialog

#include "Graph.h"

class CGraphDlg : public CDialog
{
// Construction
public:
	CGraphDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CGraphDlg)
	enum { IDD = IDD_DIALOG1 };
	CStatic	m_ctrlGraphFrame;
	//}}AFX_DATA

	CGraph* testGraph;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGraphDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CGraphDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnDrawBtn();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRAPHDLG_H__FD14A343_C9DA_495D_825C_9B1366FB785F__INCLUDED_)
