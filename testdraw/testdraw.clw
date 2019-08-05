; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTestdrawView
LastTemplate=CPropertyPage
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "testdraw.h"
LastPage=0

ClassCount=18
Class1=CTestdrawApp
Class2=CTestdrawDoc
Class3=CTestdrawView
Class4=CMainFrame

ResourceCount=7
Resource1=IDD_GET_GRAPH_SETTINGS
Class5=CAboutDlg
Class6=MyGraph
Resource2=IDD_SERIES_DETAILS_PG
Class7=CGraphSettingsDlg
Class8=CGraph
Class9=CGraphSeries
Class10=CGraphLegend
Resource3=IDD_DIALOG1
Class11=CGraphDlg
Class12=CGraphDataSet
Class13=CGraphLegendSet
Class14=CGraphDataColor
Class15=CGraphPieLabel
Resource4=IDD_ABOUTBOX
Class16=CCreateGraphDetailsPg
Resource5=IDD_GRAPH_DETAILS_PG
Class17=CCreateGraphSeriesDetailPg
Resource6=IDR_MAINFRAME
Class18=CCreateGraphFinishPg
Resource7=IDD_GRAPH_FINISH_PG

[CLS:CTestdrawApp]
Type=0
HeaderFile=testdraw.h
ImplementationFile=testdraw.cpp
Filter=N

[CLS:CTestdrawDoc]
Type=0
HeaderFile=testdrawDoc.h
ImplementationFile=testdrawDoc.cpp
Filter=N

[CLS:CTestdrawView]
Type=0
HeaderFile=testdrawView.h
ImplementationFile=testdrawView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CTestdrawView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=testdraw.cpp
ImplementationFile=testdraw.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=6
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_APP_EXIT
Command3=ID_DRAW_BAR
Command4=ID_DRAW_LINE
Command5=ID_DRAW_PIE
Command6=ID_DRAW_BAR_DLG
Command7=ID_DRAW_SCATTER
Command8=ID_DRAW_WHISKER
Command9=ID_DRAW_STACKED_BAR
Command10=ID_DRAW_XY_LINE
Command11=ID_DRAW_3D_BAR
Command12=ID_DRAW_3D_STACKED_BAR
Command13=ID_DRAW_3D_LINE
Command14=ID_DRAW_3D_PIE
Command15=ID_APP_ABOUT
CommandCount=15

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_PRINT
Command3=ID_FILE_PRINT_PREVIEW
Command4=ID_DRAW_BAR
Command5=ID_DRAW_LINE
Command6=ID_DRAW_PIE
Command7=ID_DRAW_SCATTER
Command8=ID_DRAW_WHISKER
Command9=ID_DRAW_STACKED_BAR
Command10=ID_DRAW_XY_LINE
Command11=ID_DRAW_3D_BAR
Command12=ID_DRAW_3D_STACKED_BAR
Command13=ID_DRAW_3D_LINE
Command14=ID_DRAW_3D_PIE
Command15=ID_APP_ABOUT
CommandCount=15

[CLS:MyGraph]
Type=0
HeaderFile=MyGraph.h
ImplementationFile=MyGraph.cpp
BaseClass=CStatic
Filter=W
LastObject=ID_APP_ABOUT

[DLG:IDD_GET_GRAPH_SETTINGS]
Type=1
Class=CGraphSettingsDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352

[CLS:CGraphSettingsDlg]
Type=0
HeaderFile=GraphSettingsDlg.h
ImplementationFile=GraphSettingsDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CGraphSettingsDlg
VirtualFilter=dWC

[CLS:CGraph]
Type=0
HeaderFile=Graph.h
ImplementationFile=Graph.cpp
BaseClass=CStatic
Filter=W
LastObject=CGraph

[CLS:CGraphSeries]
Type=0
HeaderFile=GraphSeries.h
ImplementationFile=GraphSeries.cpp
BaseClass=CStatic
Filter=W
LastObject=CGraphSeries

[CLS:CGraphLegend]
Type=0
HeaderFile=GraphLegend.h
ImplementationFile=GraphLegend.cpp
BaseClass=CStatic
Filter=W
LastObject=CGraphLegend

[DLG:IDD_DIALOG1]
Type=1
Class=CGraphDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_GRAPH_FRAME,static,1342177286
Control4=IDC_DRAW_BTN,button,1342242816

[CLS:CGraphDlg]
Type=0
HeaderFile=GraphDlg.h
ImplementationFile=GraphDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_DRAW_BTN

[CLS:CGraphDataSet]
Type=0
HeaderFile=GraphDataSet.h
ImplementationFile=GraphDataSet.cpp
BaseClass=CStatic
Filter=W
LastObject=CGraphDataSet

[CLS:CGraphLegendSet]
Type=0
HeaderFile=GraphLegendSet.h
ImplementationFile=GraphLegendSet.cpp
BaseClass=CStatic
Filter=W
LastObject=CGraphLegendSet

[CLS:CGraphDataColor]
Type=0
HeaderFile=GraphDataColor.h
ImplementationFile=GraphDataColor.cpp
BaseClass=CStatic
Filter=W
LastObject=CGraphDataColor

[CLS:CGraphPieLabel]
Type=0
HeaderFile=GraphPieLabel.h
ImplementationFile=GraphPieLabel.cpp
BaseClass=CStatic
Filter=W
LastObject=CGraphPieLabel

[DLG:IDD_GRAPH_DETAILS_PG]
Type=1
Class=CCreateGraphDetailsPg
ControlCount=34
Control1=IDC_STATIC,button,1342177287
Control2=IDC_CREATE_BAR,button,1342308361
Control3=IDC_CREATE_LINE,button,1342177289
Control4=IDC_CREATE_PIE,button,1342177289
Control5=IDC_CREATE_STACKED_BAR,button,1342177289
Control6=IDC_CREATE_SCATTER,button,1342177289
Control7=IDC_CREATE_WHISKER,button,1342177289
Control8=IDC_CREATE_XY_LINE,button,1342177289
Control9=IDC_CREATE_3D_BAR,button,1342177289
Control10=IDC_CREATE_3D_LINE,button,1342177289
Control11=IDC_CREATE_3D_PIE,button,1342177289
Control12=IDC_CREATE_3D_STACKED,button,1342177289
Control13=IDC_GRAPH_TITLE,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_X_LABEL,edit,1350631552
Control16=IDC_STATIC,static,1342308352
Control17=IDC_Y_LABEL,edit,1350631552
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342177296
Control20=IDC_STATIC,static,1342177296
Control21=IDC_STATIC,static,1342308352
Control22=IDC_MIN_TICK,edit,1350639744
Control23=IDC_MIN_TICK_SPIN,msctls_updown32,1342177330
Control24=IDC_STATIC,static,1342308352
Control25=IDC_MAX_TICK,edit,1350639744
Control26=IDC_MAX_TICK_SPIN,msctls_updown32,1342177330
Control27=IDC_STATIC,static,1342308352
Control28=IDC_TICK_SPACE,edit,1350639744
Control29=IDC_TICK_SPACE_SPIN,msctls_updown32,1342177330
Control30=IDC_STATIC,button,1342177287
Control31=IDC_VERT_ALIGN,button,1342308361
Control32=IDC_HORZ_ALIGN,button,1342177289
Control33=IDC_WIZARD_BITMAP,static,1342177294
Control34=IDC_STATIC,static,1342177297

[CLS:CCreateGraphDetailsPg]
Type=0
HeaderFile=CreateGraphDetailsPg.h
ImplementationFile=CreateGraphDetailsPg.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CCreateGraphDetailsPg
VirtualFilter=idWC

[DLG:IDD_SERIES_DETAILS_PG]
Type=1
Class=CCreateGraphSeriesDetailPg
ControlCount=19
Control1=IDC_WIZARD_BITMAP,static,1342177294
Control2=IDC_STATIC,static,1342177297
Control3=IDC_STATIC,static,1342308352
Control4=IDC_SERIES_LABEL,edit,1350631552
Control5=IDC_STATIC,static,1342177296
Control6=IDC_STATIC,static,1342308352
Control7=IDC_ROW_NUMBER,edit,1342179458
Control8=IDC_DATA_VALUE,edit,1350631552
Control9=IDC_STATIC,static,1342177296
Control10=IDC_STATIC,static,1342308352
Control11=IDC_LEGEND_TEXT,edit,1350631552
Control12=IDC_STATIC,static,1342177296
Control13=IDC_STATIC,static,1342308352
Control14=IDC_COLOR_CHOOSER,button,1342242880
Control15=IDC_NEW_DATA_VALUE,button,1342242816
Control16=IDC_NEW_ROW,button,1342242816
Control17=IDC_STATIC,static,1342308352
Control18=IDC_SERIES_LIST,SysListView32,1350631429
Control19=IDC_DISABLE_LEGEND,button,1342242819

[CLS:CCreateGraphSeriesDetailPg]
Type=0
HeaderFile=CreateGraphSeriesDetailPg.h
ImplementationFile=CreateGraphSeriesDetailPg.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CCreateGraphSeriesDetailPg
VirtualFilter=idWC

[DLG:IDD_GRAPH_FINISH_PG]
Type=1
Class=CCreateGraphFinishPg
ControlCount=4
Control1=IDC_WIZARD_BITMAP,static,1342177294
Control2=IDC_STATIC,static,1342177297
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352

[CLS:CCreateGraphFinishPg]
Type=0
HeaderFile=CreateGraphFinishPg.h
ImplementationFile=CreateGraphFinishPg.cpp
BaseClass=CPropertyPage
Filter=D
VirtualFilter=idWC
LastObject=CCreateGraphFinishPg

