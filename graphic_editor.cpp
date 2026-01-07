#include "model.cpp"
#include "View.cpp"
#include "Controller.cpp"


int main()
{
   LineModel line;
   LineModel line1;
   CircleModel circle;
   ConsoleView view(&line);
   view.AddModel(&circle);
   view.AddModel(&line1);
   Controller controller(&line);
   controller.AddModel(&line1);
   controller.AddModel(&circle);
    controller.start();
   return 0;
}