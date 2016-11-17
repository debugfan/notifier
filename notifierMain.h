/***************************************************************
 * Name:      notifierMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-11-17
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef NOTIFIERMAIN_H
#define NOTIFIERMAIN_H

//(*Headers(notifierDialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class notifierDialog: public wxDialog
{
    public:

        notifierDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~notifierDialog();

    private:

        //(*Handlers(notifierDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(notifierDialog)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICLINE1;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(notifierDialog)
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxBoxSizer* BoxSizer2;
        wxButton* Button2;
        wxStaticLine* StaticLine1;
        wxBoxSizer* BoxSizer1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // NOTIFIERMAIN_H
