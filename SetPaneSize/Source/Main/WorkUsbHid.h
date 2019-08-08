#pragma once


// CWorkUsbHid

class CWorkUsbHid : public CDockablePane
{
	DECLARE_DYNAMIC(CWorkUsbHid)

public:
	CWorkUsbHid();
	virtual ~CWorkUsbHid();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


