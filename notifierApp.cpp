/***************************************************************
 * Name:      notifierApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2016-11-17
 * Copyright:  ()
 * License:
 **************************************************************/

#include "notifierApp.h"

//(*AppHeaders
#include "notifierMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(notifierApp);

bool notifierApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	notifierDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
