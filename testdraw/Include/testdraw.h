// testdraw.h : main header file for the TESTDRAW application
//

#if !defined(AFX_TESTDRAW_H__26A506A8_5188_454C_AF21_2DBBB53E87F0__INCLUDED_)
#define AFX_TESTDRAW_H__26A506A8_5188_454C_AF21_2DBBB53E87F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTestdrawApp:
// See testdraw.cpp for the implementation of this class
//

class CTestdrawApp : public CWinApp
{
public:
	CTestdrawApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestdrawApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTestdrawApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTDRAW_H__26A506A8_5188_454C_AF21_2DBBB53E87F0__INCLUDED_)
