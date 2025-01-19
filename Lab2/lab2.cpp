//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "lab2.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::clickClick(TObject *Sender)
{
	int xa, ya, xb, yb, dx, dy, x, y, p;
    xa = StrToInt(x1->Text);
    ya = StrToInt(y1->Text);
	xb = StrToInt(x2->Text);
	yb = StrToInt(y2->Text);
	dx = xb - xa, dy = yb - ya;
    x = xa;
    p = 2*dx - dy;
    Form1->Refresh();
    for(y = ya; y < yb; y++){
    	if(p < 0){
        	p = p + 2*dx;
        }
        else{
        	x++;
            p = p + 2*dx -2*dy;
        }
        Form1->Canvas->Pixels[x][y] = clRed;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int xa, ya, xb, yb;
    xa = StrToInt(x1->Text);
    ya = StrToInt(y1->Text);
	xb = StrToInt(x2->Text);
	yb = StrToInt(y2->Text);
    Form1->Canvas->Pen->Color = clBlue;
    Form1->Canvas->MoveTo(xa,ya);
    Form1->Canvas->LineTo(xb,yb);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    Form1->Canvas->Pen->Color = clBlue;
    Form1->Canvas->MoveTo(10,10);
    Form1->Canvas->LineTo(10,110);
    Form1->Canvas->MoveTo(10,10);
    Form1->Canvas->LineTo(60,60);
    Form1->Canvas->MoveTo(60,60);
    Form1->Canvas->LineTo(110,10);
    Form1->Canvas->MoveTo(110,10);
    Form1->Canvas->LineTo(110,110);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Form1->Canvas->Pen->Color = clRed;
    Form1->Canvas->MoveTo(120,10);
    Form1->Canvas->LineTo(120,110);
    Form1->Canvas->MoveTo(120,10);
    Form1->Canvas->LineTo(160,10);
    Form1->Canvas->MoveTo(160,10);
    Form1->Canvas->LineTo(170,20);
    Form1->Canvas->MoveTo(170,20);
    Form1->Canvas->LineTo(170,50);
    Form1->Canvas->MoveTo(170,50);
    Form1->Canvas->LineTo(160,60);
    Form1->Canvas->MoveTo(160,60);
    Form1->Canvas->LineTo(120,60);
    Form1->Canvas->MoveTo(160,60);
    Form1->Canvas->LineTo(170,110);
}
//--------------------------------------------------------------------------- 