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

int rx,ry,xc,yc,p1,p2,x,y;
rx=StrToInt(Edit1->Text);
ry=StrToInt(Edit2->Text);
xc=StrToInt(Edit3->Text);
yc=StrToInt(Edit4->Text);
x=0; y=ry;

p1=p1+2*ry*ry*x+ry*ry;

while(2*ry*ry*x<=2*rx*rx*y)
{
if(p1<0)
{
  x++;
  p1=p1+2*ry*ry*x-2*rx*rx*y+ry*ry;
  p2=p2-2*rx*rx*y+rx*rx;
  }
  else
  {
    x++;y--;
    p1=p1+2*ry*ry*x-2*rx*rx*y+ry*ry;
    }
   Form1->Canvas->Pixels[x+xc][y+yc]=clRed;
    Form1->Canvas->Pixels[x+xc][-y+yc]=clAqua;
    Form1->Canvas->Pixels[-x+xc][-y+yc]=clYellow;
    Form1->Canvas->Pixels[-x+xc][y+yc]=clBlue;

}

p2=ry*ry*(x+1/2)*(x+1/2)+rx*rx*(y-1)*(y-1)-rx*rx*ry*ry;
while(y>0)
if(p2>0)
{
y--;
p2=p2-2*rx*rx*y+ry*ry*x;
}
else
{
x++;
y--;
p2=p2-2*rx*rx*y+ry*ry*ry*x;
}
   Form1->Canvas->Pixels[x+xc][y+yc]=clRed;
    Form1->Canvas->Pixels[x+xc][-y+yc]=clAqua;
    Form1->Canvas->Pixels[-x+xc][-y+yc]=clYellow;
    Form1->Canvas->Pixels[-x+xc][y+yc]=clBlue;
    }

}
//--------------------------------------------------------------------------- 