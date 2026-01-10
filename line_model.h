#ifndef __LINE
#define __LINE  

#include "model.h"

//-----------Line Model ------------------------


class LineModel : public Observable
{ 
public:
   Point getA()
   {
      return _A;
   }
   Point getB()
   {
      return _B;
   }
   void setA(Point tempA)
   {
      _A = tempA;
   //   notifyUpdateLine();
   } 
   void setB(Point tempB)
   { 
      _B = tempB;
      notifyUpdateLine();
   }
private:
Point _A;
Point _B;
 //  float _Ax=0;
 //  float _B=0;
};

#endif