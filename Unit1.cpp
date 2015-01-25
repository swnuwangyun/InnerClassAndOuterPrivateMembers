//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	this->privateVar = L"privateVar";
	this->publicVar = L"publicVar";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	struct task{
		String run(TForm1 *thiz){
			return thiz->privateVar + L" " + thiz->publicVar;
		}
	}t;
	this->Edit1->Text =  t.run(this);
}
//---------------------------------------------------------------------------
