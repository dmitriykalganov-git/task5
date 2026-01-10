#include <iostream>
#include "model.h"
#include "line_model.h"
#include "circle_model.h"
#include "IController.h"

//--------------- Controller ------------

class Controller : public IController
{
public:
   Controller(LineModel *model)
   {
      _line = model;
      _lineVec.push_back(_line);
   }
   void AddModel(LineModel *model)
   {
      _line = model;
      _lineVec.push_back(_line);
   }
   void AddModel(CircleModel *model)
   {
      _circle = model;
      _circleVec.push_back(_circle);
   }
   void start()
   {
      Point p = {0,0};

      _line->setA(p);
      
      float temp1,temp2;
      int sizeL = _lineVec.size();
      int sizeC = _circleVec.size();

      do
      {         
         for (int i = 0; i < sizeL; ++i)
         {
            printf("Input the coordinates point LINE (Exit Input 0 0): \n");
            printf("Input starting point A(x,y): ");
            scanf("%f %f", &temp1, &temp2);
            p.x = temp1;
            p.y = temp2;
            _lineVec[i]->setA(p);
            printf("Input end point B(x,y): ");
            scanf("%f %f", &temp1, &temp2);
            p.x = temp1;
            p.y = temp2;
            _lineVec[i]->setB(p);
         }
         for (int i = 0; i < sizeC; ++i)
         {
            printf("Input the coordinates CIRCLE(Exit Input 0 0): \n");
            printf("Input center point A(x,y): ");
            scanf("%f %f", &temp1, &temp2);
            p.x = temp1;
            p.y = temp2;
            _circleVec[i]->setC(p);
            printf("Input radius R: ");
            scanf("%f", &temp1);
            _circleVec[i]->setR(temp1);
         }
         if(temp1 == 0) break;
      }
      while (temp1 != 0);
   }
private:
   std::vector<LineModel*> _lineVec;
   LineModel *_line;
   std::vector<CircleModel*> _circleVec;
   CircleModel *_circle;
};