#ifndef __VIEW
#define __VIEW  

#include <iostream>
#include "model.h"
#include "line_model.h"
#include "circle_model.h"


//------------------- View ------------

class ConsoleView: public Observer
{
public:
   ConsoleView(LineModel *model)
   {
      _line = model;
      _line->addObserverL(this);
      _lineVec.push_back(_line);
    }
   void AddModel(CircleModel *model)
   {
      _circle = model;
      _circle->addObserverC(this);
      _circleVec.push_back(_circle);
   }
   void AddModel(LineModel *model)
   {
      _line = model;
      _line->addObserverL(this);
      _lineVec.push_back(_line);
   }
   virtual void updateL()
   {
      int size = _lineVec.size();
      for (int i = 0; i < size; ++i)
      {
         printf("Line: %d\n", i);
         printf("Starting point: %.2f %.2f\n", _lineVec[i]->getA().x, _lineVec[i]->getA().y);
         printf("End point: %.2f %.2f\n", _lineVec[i]->getB().x , _lineVec[i]->getB().y);
   //      printf("Input the coordinates point LINE: ");
      }
   } 
   virtual void updateC()
   {
      int size = _circleVec.size();
      for (int i = 0; i < size; ++i)
      {
         printf("Center point: %.2f %.2f\n", _circle->getС().x, _circle->getС().y );
         printf("Radius: %.2f\n", _circle->getR());
      }
   } 

private:
   std::vector<LineModel*> _lineVec;
   LineModel *_line;
   std::vector<CircleModel*> _circleVec;
   CircleModel *_circle;
};
#endif