// CWorkUsbHid.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SetPaneSize.h"
#include "WorkUsbHid.h"


// CWorkUsbHid

IMPLEMENT_DYNAMIC(CWorkUsbHid, CDockablePane)

CWorkUsbHid::CWorkUsbHid()
{

}

CWorkUsbHid::~CWorkUsbHid()
{
}


BEGIN_MESSAGE_MAP(CWorkUsbHid, CDockablePane)
	ON_WM_CREATE()
END_MESSAGE_MAP()



// CWorkUsbHid ��Ϣ�������




int CWorkUsbHid::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDockablePane::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������

	return 0;
}
