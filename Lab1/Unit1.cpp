//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int steps;
	float xa,ya,xb,yb,xInc,yInc,dx,dy,x,y,k;
 	xa = StrToInt(x1->Text);
    ya = StrToInt(y1->Text);
    xb = StrToInt(x2->Text);
    yb = StrToInt(y2->Text);
    dx = xb - xa,dy = yb - ya;
    if(abs(dx)>abs(dy))
    	steps = abs(dx);
    else
    	steps = abs(dy);
    xInc = dx / (float)steps;
    yInc = dy / (float)steps;
    Form1->Refresh();
    x = xa;
    y = ya;
    Form1->Canvas->Pixels[x][y] = clRed;
    for(k=0;k < steps;k++){
    	x += xInc;
        y += yInc;
        Form1->Canvas->Pixels[x][y] = clRed;
    }
}
//---------------------------------------------------------------------------
