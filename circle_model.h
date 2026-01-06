#ifndef __CIRCLE
#define __CIRCLE

#include "model.cpp"

//-----------Circle Model ------------------------


class CircleModel : public Observable
{ 
public:
   Point getС()
   {
      return _C;
   }
   float getR()
   {
      return _R;
   }
   void setC(Point tempA)
   {
      _C = tempA;
 //     notifyUpdateCircle();
   } 
   void setR(float tempB)
   { 
      _R = tempB;
      notifyUpdateCircle();
   }
private:
Point _C;

 //  float _Ax=0;
   float _R=0;
};

#endif