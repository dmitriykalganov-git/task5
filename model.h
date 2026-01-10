#ifndef __MODEL
#define __MODEL  

#include <iostream>
#include <vector>

//----------- Model ------------------------
struct Point {float x=0; float y=0;};
class Observer
{
public:
    virtual void updateL() = 0;
    virtual void updateC() = 0;
};

class Observable
{
public:
   void addObserverL(Observer *observer)
   {
      _observersL.push_back(observer);
   }
    void addObserverC(Observer *observer)
   {
      _observersC.push_back(observer);
   }
   void notifyUpdateLine()
   {
      int size = _observersL.size();
      for (int i = 0; i < size; i++)
      {
         _observersL[i]->updateL();
      }
   }
   void notifyUpdateCircle()
   {
      int size = _observersC.size();
      for (int i = 0; i < size; i++)
      {
         _observersC[i]->updateC();
      }
   }
private:
   std::vector<Observer*> _observersL;
   std::vector<Observer*> _observersC;
};

#endif