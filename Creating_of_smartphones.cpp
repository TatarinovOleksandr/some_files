#include <iostream>
#include <string>
using namespace std;

class SMARTPHONE
{
   private: 

   /*Private fields of smartphones' parametres*/
   string name = "";
   string processor = "";
   int diagonal_of_display;
   string color = "";
   int camera;
   int battery;
   /**/

   public:

   /*Public methods for work with parametres*/
   void set_name(string name)
   {
      this->name = name;
   }
   string get_name()
   {
      return name;
   }
   void set_processor(string processor)
   {
      this->processor = processor;
   }
   string get_processor()
   {
      return processor;
   }
   void set_diagonal_of_display(int diagonal_of_display)
   {
      this->diagonal_of_display = diagonal_of_display;
   }
   int get_diagonal_of_display()
   {
      return diagonal_of_display;
   }
   void set_color(string color)
   {
      this->color = color;
   }
   string get_color()
   {
      return color;
   }
   void set_camera(int camera)
   {
      this->camera = camera;
   }
   int get_camera()
   {
      return camera;
   }
   void set_battery(int battery)
   {
      this->battery = battery;
   }
   int get_battery()
   {
      return battery;
   }
   /**/

   /*Constructor for making objects of class SMARTPHONE*/
   SMARTPHONE(string name, string processor, int diagonal_of_display, string color, int camera, int battery)
   {
      set_name(name);
      set_processor(processor);
      set_diagonal_of_display(diagonal_of_display);
      set_color(color);
      set_camera(camera);
      set_battery(battery);
   }
   /**/
};



int main()
{
   int amount_of_smartphones;

   string name = "", processor = "", color = "";
   int diagonal_of_display, camera, battery;

   std::cout << "Please, choose amount of smartphones which you going to make: ";
   std::cin >> amount_of_smartphones;
   SMARTPHONE* smartphones = new SMARTPHONE[amount_of_smartphones];
   
   std::cout << "Please, fill the parametres for ones";

   /*Filling of smartphones' parametres*/
   for(int i = 0; i < amount_of_smartphones; i++)
   {
      std::cout << "Enter a name: ";
      std::cin >> name; smartphones[i]->set_name(name);
      std::cout << std::endl;
      std::cout << "Enter a processor: "; 
      std::cin >> processor; smartphones[i]->set_processor(processor);
      std::cout << std::endl;
      std::cout << "Enter a diagonal of display: ";
      std::cin >> diagonal_of_display; smartphones[i]->set_diagonal_of_display(diagonal_of_display);
      std::cout << std::endl;
      std::cout << "Enter a color: ";
      std::cin >> color; smartphones[i]->set_color(color);
      std::cout << std::endl;
      std::cout << "Enter a camera: ";
      std::cin >> camera; smartphones[i]->set_camera(camera);
      std::cout << std::endl;
      std::cout << "Enter a battery: ";
      std::cin >> battery; smartphones[i]->set_battery(battery);
      std::cout << std::endl;
      std::cout << "________________________________________________"
   }
   /**/

   std::cout << "Smartphones are successfully created." << std::endl;

   return 0;
}