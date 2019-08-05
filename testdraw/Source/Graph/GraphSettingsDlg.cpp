// GraphSettingsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "testdraw.h"
#include "GraphSettingsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraphSettingsDlg dialog


CGraphSettingsDlg::CGraphSettingsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CGraphSettingsDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CGraphSettingsDlg)
	//}}AFX_DATA_INIT
}


void CGraphSettingsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGraphSettingsDlg)
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CGraphSettingsDlg, CDialog)
	//{{AFX_MSG_MAP(CGraphSettingsDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraphSettingsDlg message handlers

BOOL CGraphSettingsDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here

	UpdateData(FALSE);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
