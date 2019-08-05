// testdrawView.cpp : implementation of the CTestdrawView class
//

#include "stdafx.h"
#include "testdraw.h"
#include "GraphSettingsDlg.h"
#include "Graph.h"
#include "GraphSeries.h"
#include "GraphDlg.h"

#include "testdrawDoc.h"
#include "testdrawView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestdrawView

IMPLEMENT_DYNCREATE(CTestdrawView, CView)

BEGIN_MESSAGE_MAP(CTestdrawView, CView)
	//{{AFX_MSG_MAP(CTestdrawView)
	ON_COMMAND(ID_DRAW_BAR, OnDrawBar)
	ON_COMMAND(ID_DRAW_LINE, OnDrawLine)
	ON_COMMAND(ID_DRAW_PIE, OnDrawPie)
	ON_COMMAND(ID_DRAW_BAR_DLG, OnDrawBarDlg)
	ON_COMMAND(ID_DRAW_SCATTER, OnDrawScatter)
	ON_COMMAND(ID_DRAW_WHISKER, OnDrawWhisker)
	ON_COMMAND(ID_DRAW_3D_BAR, OnDraw3dBar)
	ON_COMMAND(ID_DRAW_3D_LINE, OnDraw3dLine)
	ON_COMMAND(ID_DRAW_STACKED_BAR, OnDrawStackedBar)
	ON_COMMAND(ID_DRAW_XY_LINE, OnDrawXyLine)
	ON_COMMAND(ID_DRAW_3D_PIE, OnDraw3dPie)
	ON_COMMAND(ID_DRAW_3D_STACKED_BAR, OnDraw3dStackedBar)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestdrawView construction/destruction

CTestdrawView::CTestdrawView()
{
	// TODO: add construction code here

}

CTestdrawView::~CTestdrawView()
{
}

BOOL CTestdrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTestdrawView drawing

void CTestdrawView::OnDraw(CDC* pDC)
{
	CTestdrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	if(graphComplete)
		testGraph->DrawGraph(pDC);
	
	UpdateWindow();

}

/////////////////////////////////////////////////////////////////////////////
// CTestdrawView diagnostics

#ifdef _DEBUG
void CTestdrawView::AssertValid() const
{
	CView::AssertValid();
}

void CTestdrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTestdrawDoc* CTestdrawView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestdrawDoc)));
	return (CTestdrawDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTestdrawView message handlers

void CTestdrawView::OnInitialUpdate() 
{
	CView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	graphComplete = FALSE;
}

void CTestdrawView::OnDrawBar() 
{
	// TODO: Add your command handler code here
	testGraph = new CGraph(BAR_GRAPH);
	testGraph->SetGraphTitle("Bar Chart");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);

	testGraph->SetXAxisAlignment(0);
//	testGraph->SetXAxisAlignment(90);
//	testGraph->SetXAxisAlignment(270);
//	testGraph->SetXAxisAlignment(45);
//	testGraph->SetXAxisAlignment(315);
	testGraph->SetXAxisLabel("Games");
	testGraph->SetYAxisLabel("Scores");
//	testGraph->SetGraphQuadType(2);
	testGraph->SetTickLimits(0, 300, 50);
//	testGraph->SetGraphQuadType(3);
//	testGraph->SetGraphQuadType(4);
//	testGraph->SetTickLimits(-300, 300, 100);

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	CGraphSeries* series2 = new CGraphSeries();
	CGraphSeries* series3 = new CGraphSeries();
	series1->SetLabel("day 1");
	series2->SetLabel("day 2");
	series3->SetLabel("day 3");
	series1->SetData(0, 150);
	series1->SetData(1, 202);
	series1->SetData(2, 230);
	series2->SetData(0, 199);
	series2->SetData(1, 140);
	series2->SetData(2, 279);
	series3->SetData(0, 204);
	series3->SetData(1, 221);
	series3->SetData(2, 208);
	testGraph->AddSeries(series1);
	testGraph->AddSeries(series2);
	testGraph->AddSeries(series3);

	//set the colors of my bars
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

void CTestdrawView::OnDrawLine() 
{
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

void CTestdrawView::OnDrawPie() 
{
	// TODO: Add your command handler code here
	testGraph = new CGraph(PIE_GRAPH);
	testGraph->SetGraphTitle("Pie Chart");
	
	//set up legend
	testGraph->SetLegend(0, "game 1");
	testGraph->SetLegend(1, "game 2");
	testGraph->SetLegend(2, "game 3");
	testGraph->SetLegend(3, "game 4");
	testGraph->SetLegend(4, "game 5");
	testGraph->SetLegend(5, "game 6");
	testGraph->SetLegend(6, "game 7");
	testGraph->SetLegend(7, "game 8");
	testGraph->SetLegend(8, "game 9");
	testGraph->SetLegend(9, "game 10");

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
//	CGraphSeries* series2 = new CGraphSeries();
//	CGraphSeries* series3 = new CGraphSeries();
	series1->SetLabel("day 1");
//	series2->SetLabel("day 2");
//	series3->SetLabel("day 3");
	series1->SetData(0, 15);
	series1->SetData(1, 5);
	series1->SetData(2, 2);
	series1->SetData(3, 8);
	series1->SetData(4, 30);
	series1->SetData(5, 6);
	series1->SetData(6, 7);
	series1->SetData(7, 9);
	series1->SetData(8, 8);
	series1->SetData(9, 10);
//	series2->SetData(0, 15);
//	series2->SetData(1, 15);
//	series2->SetData(2, 15);
//	series3->SetData(0, 10);
//	series3->SetData(1, 20);
//	series3->SetData(2, 30);
//	series3->SetData(3, 40);
//	series3->SetData(4, 50);

	testGraph->AddSeries(series1);
//	testGraph->AddSeries(series2);
//	testGraph->AddSeries(series3);

	//set the colors of my bars
	testGraph->SetColor(0, FOREST_GREEN);
	testGraph->SetColor(1, SKY_BLUE);
	testGraph->SetColor(2, DUSK);
	testGraph->SetColor(3, HOT_PINK);
	testGraph->SetColor(4, LAVENDER);
	testGraph->SetColor(5, ROYAL_BLUE);
	testGraph->SetColor(6, BROWN);
	testGraph->SetColor(7, MAROON);
	testGraph->SetColor(8, GREY);
	testGraph->SetColor(9, TAN);

	graphComplete = TRUE;
	Invalidate(TRUE);
}

void CTestdrawView::OnDrawBarDlg() 
{
	// TODO: Add your command handler code here
	CGraphDlg graphDlg;

	graphDlg.DoModal();
}

void CTestdrawView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class
	
//	CView::OnBeginPrinting(pDC, pInfo);
}

void CTestdrawView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class
	
//	CView::OnEndPrinting(pDC, pInfo);
}

BOOL CTestdrawView::OnPreparePrinting(CPrintInfo* pInfo) 
{
	// TODO: call DoPreparePrinting to invoke the Print dialog box
	pInfo->SetMaxPage(1);
	return DoPreparePrinting(pInfo);
//	return CView::OnPreparePrinting(pInfo);
}

void CTestdrawView::OnPrint(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class
	int	nPos;
	nPos = -720;  // 1/2 inch top margin
	if(graphComplete)
	{
		testGraph->SetMargins(-720, -15120, 720, 10800, nPos); //portrait page
		nPos = testGraph->PrintGraph(pDC, pInfo);
	}
//	CView::OnPrint(pDC, pInfo);
}


void CTestdrawView::OnDrawScatter() 
{
	// TODO: Add your command handler code here
	testGraph = new CGraph(SCATTER_GRAPH);
	testGraph->SetGraphTitle("Scatter Graph");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);
	
//	testGraph->SetGraphQuadType(2);
	testGraph->SetTickLimits(0,100,10);
//	testGraph->SetGraphQuadType(3);
//	testGraph->SetGraphQuadType(4);
//	testGraph->SetTickLimits(-100, 100, 10);

	testGraph->SetXAxisLabel("Test 1");
	testGraph->SetYAxisLabel("Test 2");

	//set up some series
	CGraphSeries* student1 = new CGraphSeries();
	CGraphSeries* student2 = new CGraphSeries();
	CGraphSeries* student3 = new CGraphSeries();
	CGraphSeries* student4 = new CGraphSeries();
	CGraphSeries* student5 = new CGraphSeries();
	CGraphSeries* student6 = new CGraphSeries();
	CGraphSeries* student7 = new CGraphSeries();
	CGraphSeries* student8 = new CGraphSeries();
	CGraphSeries* student9 = new CGraphSeries();
	CGraphSeries* student10 = new CGraphSeries();
	CGraphSeries* student11 = new CGraphSeries();
	CGraphSeries* student12 = new CGraphSeries();

	student1->SetData(67,98);
	student2->SetData(94,95);
	student3->SetData(58,45);
	student4->SetData(27,35);
	student5->SetData(84,79);
	student6->SetData(72,91);
	student7->SetData(75,78);
	student8->SetData(91,88);
	student9->SetData(100,94);
	student10->SetData(48,63);
	student11->SetData(63,92);
	student12->SetData(81,89);

	testGraph->AddSeries(student1);
	testGraph->AddSeries(student2);
	testGraph->AddSeries(student3);
	testGraph->AddSeries(student4);
	testGraph->AddSeries(student5);
	testGraph->AddSeries(student6);
	testGraph->AddSeries(student7);
	testGraph->AddSeries(student8);
	testGraph->AddSeries(student9);
	testGraph->AddSeries(student10);
	testGraph->AddSeries(student11);
	testGraph->AddSeries(student12);

	graphComplete = TRUE;
	Invalidate(TRUE);	
}

void CTestdrawView::OnDrawWhisker() 
{
	// TODO: Add your command handler code here
	testGraph = new CGraph(BOX_WHISKER_GRAPH);
	testGraph->SetGraphTitle("Box and Whisker Graph");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);
	testGraph->SetXAxisLabel("Test Scores");
	testGraph->SetYAxisLabel("Test Score");

	//set up some series
	CGraphSeries* test1 = new CGraphSeries();
	CGraphSeries* test2 = new CGraphSeries();
	CGraphSeries* test3 = new CGraphSeries();

	test1->SetData(0,14);
	test1->SetData(1,13);
	test1->SetData(2,3);
	test1->SetData(3,7);
	test1->SetData(4,9);
	test1->SetData(5,12);
	test1->SetData(6,17);
	test1->SetData(7,4);
	test1->SetData(8,9);
	test1->SetData(9,10);
	test1->SetData(10,18);
	test1->SetData(11,16);

	test2->SetData(0,14);
	test2->SetData(1,13);
	test2->SetData(2,3);
	test2->SetData(3,7);
	test2->SetData(4,9);
	test2->SetData(5,12);
	test2->SetData(6,17);

	test3->SetData(0,14);
	test3->SetData(1,13);
	test3->SetData(2,3);
	test3->SetData(3,7);
	test3->SetData(4,9);
	
	test1->SetLabel("Test 1");
	test2->SetLabel("Test 2");
	test3->SetLabel("Test 3");

	testGraph->AddSeries(test1);
	testGraph->AddSeries(test2);
	testGraph->AddSeries(test3);

	testGraph->SetTickLimits(0,20,1);

	graphComplete = TRUE;
	Invalidate(TRUE);	
}

void CTestdrawView::OnDraw3dBar() 
{
	// TODO: Add your command handler code here

	//REAL SIMPLE BAR for now....only 1 bar to draw
	testGraph = new CGraph(BAR_GRAPH_3D);
	testGraph->SetGraphTitle("3D Bar Chart");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);

	testGraph->SetXAxisAlignment(0);
//	testGraph->SetXAxisAlignment(90);
//	testGraph->SetXAxisAlignment(270);
//	testGraph->SetXAxisAlignment(45);
//	testGraph->SetXAxisAlignment(315);
	testGraph->SetXAxisLabel("Games");
	testGraph->SetYAxisLabel("Scores");
	testGraph->Set3DDepthRatio(.1);

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	series1->SetLabel("day 1");
	series1->SetData(0, 150);
	series1->SetData(1, 200);
	series1->SetData(2, 250);
	series1->SetData(3, 185);
	series1->SetData(4, 198);
	series1->SetData(5, 234);
	series1->SetData(6, 170);
	series1->SetData(7, 190);
	series1->SetData(8, 188);
	series1->SetData(9, 209);
	series1->SetData(10, 158);
	series1->SetData(11, 97);
	testGraph->AddSeries(series1);

	testGraph->SetTickLimits(0, 300, 50);

	//set the colors of my bars
	testGraph->SetColor(0, FOREST_GREEN);
	testGraph->SetColor(1, SKY_BLUE);
	testGraph->SetColor(2, DUSK);
	testGraph->SetColor(3, HOT_PINK);
	testGraph->SetColor(4, LAVENDER);
	testGraph->SetColor(5, ROYAL_BLUE);
	testGraph->SetColor(6, BROWN);
	testGraph->SetColor(7, MAROON);
	testGraph->SetColor(8, GREY);
	testGraph->SetColor(9, TAN);
	testGraph->SetColor(10, YELLOW);
	testGraph->SetColor(11, ORANGE);

	//set up legend
	testGraph->SetLegend(0, "game 1");
	testGraph->SetLegend(1, "game 2");
	testGraph->SetLegend(2, "game 3");
	testGraph->SetLegend(3, "game 4");
	testGraph->SetLegend(4, "game 5");
	testGraph->SetLegend(5, "game 6");
	testGraph->SetLegend(6, "game 7");
	testGraph->SetLegend(7, "game 8");
	testGraph->SetLegend(8, "game 9");
	testGraph->SetLegend(9, "game 10");
	testGraph->SetLegend(10, "game 11");
	testGraph->SetLegend(11, "game 12");
		
	graphComplete = TRUE;
	Invalidate(TRUE);
	
}


void CTestdrawView::OnDraw3dLine() 
{
	// TODO: Add your command handler code here
	testGraph = new CGraph(LINE_GRAPH_3D);
	testGraph->SetGraphTitle("3D Line Graph");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);

	//	testGraph.SetGraphType(1);
	testGraph->SetXAxisAlignment(0);
//	testGraph->SetXAxisAlignment(90);
//	testGraph->SetXAxisAlignment(270);
//	testGraph->SetXAxisAlignment(45);
//	testGraph->SetXAxisAlignment(315);
	testGraph->SetXAxisLabel("Games");
	testGraph->SetYAxisLabel("Scores");
	testGraph->Set3DDepthRatio(.1);
	testGraph->Set3DLineBase(0,0);

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	CGraphSeries* series2 = new CGraphSeries();
	CGraphSeries* series3 = new CGraphSeries();
	CGraphSeries* series4 = new CGraphSeries();
	CGraphSeries* series5 = new CGraphSeries();
	series1->SetLabel("day 1");
	series2->SetLabel("day 2");
	series3->SetLabel("day 3");
	series4->SetLabel("day 4");
	series5->SetLabel("day 5");
	series1->SetData(0, 240);	
	series1->SetData(1, 50);
	series1->SetData(2, 60);
	series2->SetData(0, 300);
	series2->SetData(1, 140);
	series2->SetData(2, 279);
	series3->SetData(0, 300);
	series3->SetData(1, 221);
	series3->SetData(2, 208);
	series4->SetData(0, 150);
	series4->SetData(1, 250);
	series4->SetData(2, 135);
	series5->SetData(0, 230);
	series5->SetData(1, 130);
	series5->SetData(2, 80);
	testGraph->AddSeries(series1);
	testGraph->AddSeries(series2);
	testGraph->AddSeries(series3);
	testGraph->AddSeries(series4);
	testGraph->AddSeries(series5);

	testGraph->SetTickLimits(0, 300, 50);

	testGraph->SetColor(0, RED);
	testGraph->SetColor(1, FOREST_GREEN);
	testGraph->SetColor(2, SKY_BLUE);

	//set up legend
	testGraph->SetLegend(0, "game 1");
	testGraph->SetLegend(1, "game 2");
	testGraph->SetLegend(2, "game 3");
		
	graphComplete = TRUE;
	Invalidate(TRUE);
}

void CTestdrawView::OnDrawStackedBar() 
{
	// TODO: Add your command handler code here
	testGraph = new CGraph(STACKED_BAR_GRAPH);
	testGraph->SetGraphTitle("Stacked Bar Chart");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);

	testGraph->SetXAxisAlignment(0);
//	testGraph->SetXAxisAlignment(90);
//	testGraph->SetXAxisAlignment(270);
//	testGraph->SetXAxisAlignment(45);
//	testGraph->SetXAxisAlignment(315);
	testGraph->SetXAxisLabel("Games");
	testGraph->SetYAxisLabel("Series");

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	CGraphSeries* series2 = new CGraphSeries();
	CGraphSeries* series3 = new CGraphSeries();
	series1->SetLabel("day 1");
	series2->SetLabel("day 2");
	series3->SetLabel("day 3");
	series1->SetData(0, 150);
	series1->SetData(1, 202);
	series1->SetData(2, 230);
	series2->SetData(0, 199);
	series2->SetData(1, 140);
	series2->SetData(2, 279);
	series3->SetData(0, 204);
	series3->SetData(1, 221);
	series3->SetData(2, 208);
	testGraph->AddSeries(series1);
	testGraph->AddSeries(series2);
	testGraph->AddSeries(series3);

	testGraph->SetTickLimits(0, 900, 50);

	//set the colors of my bars
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

void CTestdrawView::OnDrawXyLine() 
{
	// TODO: Add your command handler code here
	testGraph = new CGraph(XY_LINE_GRAPH);
	testGraph->SetGraphTitle("X-Y Line Graph");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);

	//	testGraph.SetGraphType(1);
	testGraph->SetXAxisAlignment(0);
//	testGraph->SetXAxisAlignment(90);
//	testGraph->SetXAxisAlignment(270);
//	testGraph->SetXAxisAlignment(45);
//	testGraph->SetXAxisAlignment(315);
	testGraph->SetXAxisLabel("Games");
	testGraph->SetYAxisLabel("Scores");

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	CGraphSeries* series2 = new CGraphSeries();
	CGraphSeries* series3 = new CGraphSeries();
	series1->SetLabel("day 1");
	series2->SetLabel("day 2");
	series3->SetLabel("day 3");
	series1->SetData(0, 150);
	series1->SetData(1, 202);
	series1->SetData(2, 230);
	series2->SetData(0, 199);
	series2->SetData(1, 140);
	series2->SetData(2, 279);
	series3->SetData(0, 204);
	series3->SetData(1, 221);
	series3->SetData(2, 208);
	testGraph->AddSeries(series1);
	testGraph->AddSeries(series2);
	testGraph->AddSeries(series3);

	testGraph->SetTickLimits(0, 300, 50);

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

void CTestdrawView::OnDraw3dPie() 
{
	// TODO: Add your command handler code here
	testGraph = new CGraph(PIE_GRAPH_3D);
	testGraph->SetGraphTitle("3D Pie Chart");
	testGraph->Set3DDepthRatio(.1);
	
	//set up legend
	testGraph->SetLegend(0, "game 1");
	testGraph->SetLegend(1, "game 2");
	testGraph->SetLegend(2, "game 3");
	testGraph->SetLegend(3, "game 4");
	testGraph->SetLegend(4, "game 5");
	testGraph->SetLegend(5, "game 6");
	testGraph->SetLegend(6, "game 7");
	testGraph->SetLegend(7, "game 8");
	testGraph->SetLegend(8, "game 9");
	testGraph->SetLegend(9, "game 10");

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	series1->SetLabel("day 1");
	series1->SetData(0, 15);
	series1->SetData(1, 5);
	series1->SetData(2, 2);
	series1->SetData(3, 8);
	series1->SetData(4, 30);
	series1->SetData(5, 6);
	series1->SetData(6, 7);
	series1->SetData(7, 9);
	series1->SetData(8, 8);
	series1->SetData(9, 10);

	testGraph->AddSeries(series1);

	//set the colors of my bars
	testGraph->SetColor(0, FOREST_GREEN);
	testGraph->SetColor(1, SKY_BLUE);
	testGraph->SetColor(2, DUSK);
	testGraph->SetColor(3, HOT_PINK);
	testGraph->SetColor(4, LAVENDER);
	testGraph->SetColor(5, ROYAL_BLUE);
	testGraph->SetColor(6, BROWN);
	testGraph->SetColor(7, MAROON);
	testGraph->SetColor(8, GREY);
	testGraph->SetColor(9, TAN);

	graphComplete = TRUE;
	Invalidate(TRUE);}

void CTestdrawView::OnDraw3dStackedBar() 
{
	// TODO: Add your command handler code here
	testGraph = new CGraph(STACKED_BAR_GRAPH_3D);
	testGraph->SetGraphTitle("3D Stacked Bar Chart");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);

	testGraph->SetXAxisAlignment(0);
//	testGraph->SetXAxisAlignment(90);
//	testGraph->SetXAxisAlignment(270);
//	testGraph->SetXAxisAlignment(45);
//	testGraph->SetXAxisAlignment(315);
	testGraph->SetXAxisLabel("Games");
	testGraph->SetYAxisLabel("Series");
	testGraph->Set3DDepthRatio(.1);

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	CGraphSeries* series2 = new CGraphSeries();
	CGraphSeries* series3 = new CGraphSeries();
	series1->SetLabel("day 1");
	series2->SetLabel("day 2");
	series3->SetLabel("day 3");
	series1->SetData(0, 150);
	series1->SetData(1, 202);
	series1->SetData(2, 230);
	series2->SetData(0, 199);
	series2->SetData(1, 140);
	series2->SetData(2, 279);
	series3->SetData(0, 204);
	series3->SetData(1, 221);
	series3->SetData(2, 208);
	testGraph->AddSeries(series1);
	testGraph->AddSeries(series2);
	testGraph->AddSeries(series3);

	testGraph->SetTickLimits(0, 900, 100);

	//set the colors of my bars
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

