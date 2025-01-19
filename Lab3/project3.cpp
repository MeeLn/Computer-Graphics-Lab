//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "project3.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DrawCircleClick(TObject *Sender)
{
	int radius,xo,yo,p,x,y;
    radius = StrToInt(r->Text);
    xo = StrToInt(xc->Text);
    yo = StrToInt(yc->Text);
    p = 1 - radius;
    x = 0;
    y = radius;
    while(x<y){
    	if(p < 0){
        	x++;
            p = p + 2*x + 1;
        }
        else{
        	x++;
            y--;
            p = p + 2*x - 2*y + 1;
        }
        Form1->Canvas->Pixels[x+xo][y+yo] = clRed;
        Form1->Canvas->Pixels[-x+xo][y+yo] = clBlue;
        Form1->Canvas->Pixels[x+xo][-y+yo] = clBlack;
        Form1->Canvas->Pixels[-x+xo][-y+yo] = clGreen;
        Form1->Canvas->Pixels[y+xo][x+yo] = clMaroon;
        Form1->Canvas->Pixels[-y+xo][x+yo] = clPurple;
        Form1->Canvas->Pixels[y+xo][-x+yo] = clAqua;
        Form1->Canvas->Pixels[-y+xo][-x+yo] = clSilver;
    }
}
//--------------------------------------------------------------------------- 