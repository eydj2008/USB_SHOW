// CWorkUsbHid.cpp : 实现文件
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



// CWorkUsbHid 消息处理程序




int CWorkUsbHid::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDockablePane::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码

	return 0;
}
