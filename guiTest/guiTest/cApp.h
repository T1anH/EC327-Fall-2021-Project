#pragma once
#include "wx/wx.h"
#include "cMain.h"
//#include "Vaccine.h"
class cApp : public wxApp
{
public:
	cApp();
	~cApp();

	virtual bool OnInit();
private:
	cMain* m_frame1 = nullptr;
	//Vaccine* m_frame2 = nullptr;
};


