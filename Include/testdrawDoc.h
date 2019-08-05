// testdrawDoc.h : interface of the CTestdrawDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TESTDRAWDOC_H__40604ED7_1C0E_4902_AD45_0CC519E30866__INCLUDED_)
#define AFX_TESTDRAWDOC_H__40604ED7_1C0E_4902_AD45_0CC519E30866__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTestdrawDoc : public CDocument
{
protected: // create from serialization only
	CTestdrawDoc();
	DECLARE_DYNCREATE(CTestdrawDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestdrawDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTestdrawDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTestdrawDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTDRAWDOC_H__40604ED7_1C0E_4902_AD45_0CC519E30866__INCLUDED_)
