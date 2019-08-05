// testdrawView.h : interface of the CTestdrawView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TESTDRAWVIEW_H__3A3D2F8F_6568_428C_AFC7_9476C22FE4C3__INCLUDED_)
#define AFX_TESTDRAWVIEW_H__3A3D2F8F_6568_428C_AFC7_9476C22FE4C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Graph.h"

class CTestdrawView : public CView
{
protected: // create from serialization only
	CTestdrawView();
	DECLARE_DYNCREATE(CTestdrawView)

// Attributes
public:
	CTestdrawDoc* GetDocument();

	CGraph* testGraph;
	BOOL graphComplete;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestdrawView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnInitialUpdate();
	protected:
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTestdrawView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTestdrawView)
	afx_msg void OnDrawBar();
	afx_msg void OnDrawLine();
	afx_msg void OnDrawPie();
	afx_msg void OnDrawBarDlg();
	afx_msg void OnDrawScatter();
	afx_msg void OnDrawWhisker();
	afx_msg void OnDraw3dBar();
	afx_msg void OnDraw3dLine();
	afx_msg void OnDrawStackedBar();
	afx_msg void OnDrawXyLine();
	afx_msg void OnDraw3dPie();
	afx_msg void OnDraw3dStackedBar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in testdrawView.cpp
inline CTestdrawDoc* CTestdrawView::GetDocument()
   { return (CTestdrawDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTDRAWVIEW_H__3A3D2F8F_6568_428C_AFC7_9476C22FE4C3__INCLUDED_)
