#include "cApp.h"
wxIMPLEMENT_APP(cApp);

cApp::cApp()
{

}

cApp::~cApp()
{

}

bool cApp::OnInit()
{
	m_frame1 = new cMain();
	m_frame1->Show();
	//m_frame1->SetBackgroundColour(wxColor(100, 100, 200));
	//m_frame2 = new Vaccine();
	//m_frame2->Show();
	return true;
}