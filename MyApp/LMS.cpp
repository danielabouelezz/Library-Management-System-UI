//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "LMS.h"
#include "Book.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
BookHandler bookHandler;
//------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddBtnClick(TObject *Sender)
{
	std::string taskText = AnsiString(InputField->Text).c_str();
	Book book(taskText, "NoName", 123, true);
	bookHandler.addBook(book);

	BooksList->Items->Add(InputField->Text);
}
//---------------------------------------------------------------------------


