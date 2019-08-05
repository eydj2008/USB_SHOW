// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (C) Microsoft Corporation
// All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#pragma once

#include "Graph.h"

class CSetPaneSizeView : public CFormView
{
protected: // create from serialization only
	CSetPaneSizeView();
	DECLARE_DYNCREATE(CSetPaneSizeView)

public:
	enum { IDD = IDD_SetPaneSize_FORM };
	UINT	m_nSizePercent;
	UINT	m_nContainerSize;
	UINT	m_nHeightInPixels;
	UINT	m_nWidthInPixels;
	UINT    graphComplete;
	CGraph* testGraph;

// Attributes
public:
	CSetPaneSizeDoc* GetDocument();

// Operations                          
public:

// Overrides
	public:
    virtual void OnDraw(CDC* pDC); 
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CSetPaneSizeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	afx_msg void OnButtonSetDlgBarSize();
	afx_msg void OnButtonSetContainerSize();
	afx_msg void OnBtnSetHeightInPixels();
	afx_msg void OnBtnSetWidthInPixels();
	afx_msg void OnContextMenu(CWnd*, CPoint point);
	afx_msg void OnFilePrintPreview();

	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SetPaneSizeView.cpp
inline CSetPaneSizeDoc* CSetPaneSizeView::GetDocument()
   { return (CSetPaneSizeDoc*)m_pDocument; }
#endif
