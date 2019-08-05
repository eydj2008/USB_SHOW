// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (C) Microsoft Corporation
// All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#include "stdafx.h"
#include "SetPaneSize.h"

#include "SetPaneSizeDoc.h"
#include "SetPaneSizeView.h"
#include "MainFrm.h"

//#include "Graph.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSetPaneSizeView

IMPLEMENT_DYNCREATE(CSetPaneSizeView, CFormView)

BEGIN_MESSAGE_MAP(CSetPaneSizeView, CFormView)
	//ON_BN_CLICKED(IDC_BUTTON_SET_DLGBAR_SIZE, OnButtonSetDlgBarSize)
	//ON_BN_CLICKED(IDC_BUTTON_SET_CONTAINER_SIZE, OnButtonSetContainerSize)
	//ON_BN_CLICKED(IDC_BTN_SET_HEIGHT_IN_PIXELS, OnBtnSetHeightInPixels)
	//ON_BN_CLICKED(IDC_BTN_SET_WIDTH_IN_PIXELS, OnBtnSetWidthInPixels)
	ON_WM_CONTEXTMENU()
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetPaneSizeView construction/destruction

CSetPaneSizeView::CSetPaneSizeView()
	: CFormView(CSetPaneSizeView::IDD)
{
	m_nSizePercent = 50;
	m_nContainerSize = 100;
	m_nHeightInPixels = 100;
	m_nWidthInPixels = 100;
}

CSetPaneSizeView::~CSetPaneSizeView()
{
}


void CSetPaneSizeView::DoDataExchange(CDataExchange* pDX)
{
	//CFormView::DoDataExchange(pDX);
	//DDX_Text(pDX, IDC_EDIT_SIZE, m_nSizePercent);
	//DDV_MinMaxUInt(pDX, m_nSizePercent, 1, 99);
	//DDX_Text(pDX, IDC_EDIT_WIDTH, m_nContainerSize);
	//DDV_MinMaxUInt(pDX, m_nContainerSize, 1, 2056);
	//DDX_Text(pDX, IDC_EDIT_HEIGHT_IN_PIXELS, m_nHeightInPixels);
	//DDV_MinMaxUInt(pDX, m_nHeightInPixels, 1, 2056);
	//DDX_Text(pDX, IDC_EDIT_WIDTH_IN_PIXELS, m_nWidthInPixels);
	//DDV_MinMaxUInt(pDX, m_nWidthInPixels, 1, 2056);
}

BOOL CSetPaneSizeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CSetPaneSizeView::OnInitialUpdate()
{
	// There is only one view ever, so it only needs to do the initial
	// update once--otherwise the application is  resized needlessly.
	static BOOL bUpdatedOnce = FALSE;
	if (bUpdatedOnce)
		return;
	bUpdatedOnce = TRUE;

	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	graphComplete = FALSE;


}

/////////////////////////////////////////////////////////////////////////////
// CSetPaneSizeView printing

void CSetPaneSizeView::OnDraw(CDC* pDC)
{
	CSetPaneSizeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	if(graphComplete)
		testGraph->DrawGraph(pDC);

	UpdateWindow();
	//UpdateData(FALSE);

}

void CSetPaneSizeView::OnFilePrintPreview() 
{
	AFXPrintPreview (this);
}

BOOL CSetPaneSizeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSetPaneSizeView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// TODO: add extra initialization before printing
}

void CSetPaneSizeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CSetPaneSizeView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
	//CPaintDC dc(this);
	//OnPrepareDC(&dc);
	//OnDraw(&dc);
	
}

/////////////////////////////////////////////////////////////////////////////
// CSetPaneSizeView diagnostics

#ifdef _DEBUG
void CSetPaneSizeView::AssertValid() const
{
	CFormView::AssertValid();
}

void CSetPaneSizeView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CSetPaneSizeDoc* CSetPaneSizeView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSetPaneSizeDoc)));
	return (CSetPaneSizeDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSetPaneSizeView message handlers

void CSetPaneSizeView::OnContextMenu(CWnd*, CPoint point)
{
	theApp.ShowPopupMenu (IDR_CONTEXT_MENU, point, this);
}

#if 0

void CSetPaneSizeView::OnButtonSetDlgBarSize() 
{
	UpdateData ();
	CMainFrame* pMainFrame = DYNAMIC_DOWNCAST (CMainFrame, GetTopLevelFrame());
	if (pMainFrame != NULL)
	{
		pMainFrame->SetDlgBarSizeInContainer (m_nSizePercent);
	}
}

void CSetPaneSizeView::OnButtonSetContainerSize() 
{
	UpdateData ();	
	CMainFrame* pMainFrame = DYNAMIC_DOWNCAST (CMainFrame, GetTopLevelFrame());
	if (pMainFrame != NULL)
	{
		pMainFrame->SetContainerSize (m_nContainerSize);
	}

	// TODO: Add your command handler code here
	testGraph = new CGraph(LINE_GRAPH);
	testGraph->SetGraphTitle("Line Graph");
	//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);

	//	testGraph.SetGraphType(1);
	testGraph->SetXAxisAlignment(0);
	//	testGraph->SetXAxisAlignment(90);
	//	testGraph->SetXAxisAlignment(270);
	//	testGraph->SetXAxisAlignment(45);
	//	testGraph->SetXAxisAlignment(315);
	testGraph->SetXAxisLabel("Games");
	testGraph->SetYAxisLabel("Scores");
	//	testGraph->SetTickLimits(0, 300, 50);
	testGraph->SetTickLimits(63, 74, 1);

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	CGraphSeries* series2 = new CGraphSeries();
	CGraphSeries* series3 = new CGraphSeries();
	series1->SetLabel("day 1");
	series2->SetLabel("day 2");
	series3->SetLabel("day 3");
	//	series1->SetData(0, 150);
	//	series1->SetData(1, 202);
	//	series1->SetData(2, 230);
	//	series2->SetData(0, 199);
	//	series2->SetData(1, 140);
	//	series2->SetData(2, 279);
	//	series3->SetData(0, 204);
	//	series3->SetData(1, 221);
	//	series3->SetData(2, 208);
	series1->SetData(0, 64);
	series1->SetData(1, 72);
	series1->SetData(2, 70);
	series2->SetData(0, 63);
	series2->SetData(1, 68);
	series2->SetData(2, 71);
	series3->SetData(0, 74);
	series3->SetData(1, 69);
	series3->SetData(2, 66);

	testGraph->AddSeries(series1);
	testGraph->AddSeries(series2);
	testGraph->AddSeries(series3);

	testGraph->SetColor(0, FOREST_GREEN);
	testGraph->SetColor(1, SKY_BLUE);
	testGraph->SetColor(2, DUSK);

	//set up legend
	testGraph->SetLegend(0, "game 1");
	testGraph->SetLegend(1, "game 2");
	testGraph->SetLegend(2, "game 3");

	graphComplete = TRUE;
	Invalidate(TRUE);


}

void CSetPaneSizeView::OnBtnSetHeightInPixels() 
{
	UpdateData ();	
	CMainFrame* pMainFrame = DYNAMIC_DOWNCAST (CMainFrame, GetTopLevelFrame());
	if (pMainFrame != NULL)
	{
		pMainFrame->SetDlgBarHeightInPixels (m_nHeightInPixels);
	}
}

void CSetPaneSizeView::OnBtnSetWidthInPixels() 
{
	UpdateData ();	
	CMainFrame* pMainFrame = DYNAMIC_DOWNCAST (CMainFrame, GetTopLevelFrame());
	if (pMainFrame != NULL)
	{
		pMainFrame->SetDlgBarWidthInPixels (m_nWidthInPixels);
	}
}
#endif