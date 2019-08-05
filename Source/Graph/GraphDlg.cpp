// GraphDlg.cpp : implementation file
//

#include "stdafx.h"
#include "testdraw.h"
#include "GraphSettingsDlg.h"
#include "Graph.h"
#include "GraphSeries.h"
#include "GraphDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraphDlg dialog


CGraphDlg::CGraphDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CGraphDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CGraphDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CGraphDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGraphDlg)
	DDX_Control(pDX, IDC_GRAPH_FRAME, m_ctrlGraphFrame);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CGraphDlg, CDialog)
	//{{AFX_MSG_MAP(CGraphDlg)
	ON_BN_CLICKED(IDC_DRAW_BTN, OnDrawBtn)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraphDlg message handlers

BOOL CGraphDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	testGraph = new CGraph(BAR_GRAPH);
	testGraph->SetGraphTitle("Bar Chart");

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
	series1->SetData(3, 185);
	series1->SetData(4, 198);
	series1->SetData(5, 234);
	series1->SetData(6, 170);
	series1->SetData(7, 190);
	series1->SetData(8, 188);
	series1->SetData(9, 209);
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
		
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}


void CGraphDlg::OnDrawBtn() 
{
	// TODO: Add your control notification handler code here
	CWnd* graphFrame = (CWnd*)GetDlgItem(IDC_GRAPH_FRAME);
	CDC* pDC = graphFrame->GetDC();

	testGraph->DrawGraph(pDC);
	ReleaseDC(pDC);
	
}
