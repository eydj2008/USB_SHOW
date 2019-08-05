// testdrawDoc.cpp : implementation of the CTestdrawDoc class
//

#include "stdafx.h"
#include "testdraw.h"

#include "testdrawDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestdrawDoc

IMPLEMENT_DYNCREATE(CTestdrawDoc, CDocument)

BEGIN_MESSAGE_MAP(CTestdrawDoc, CDocument)
	//{{AFX_MSG_MAP(CTestdrawDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestdrawDoc construction/destruction

CTestdrawDoc::CTestdrawDoc()
{
	// TODO: add one-time construction code here

}

CTestdrawDoc::~CTestdrawDoc()
{
}

BOOL CTestdrawDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTestdrawDoc serialization

void CTestdrawDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTestdrawDoc diagnostics

#ifdef _DEBUG
void CTestdrawDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTestdrawDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTestdrawDoc commands
