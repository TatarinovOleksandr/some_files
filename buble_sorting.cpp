#include <iostream>
using namespace std;
class SORTING
{
   public:
   int value = 10;
   int array[value];
   void making_values()  // methode fills the array
   {
      for(int i = 0; i < value; i++)
      {
         array[i] = srand();
      }
   }
   void buble_sorting()  // methode sorts for methode of buble
   {
      int count = 0;
      do{
         for(int i = 0; i < value; i++)
         {
            if(i + 1 == value)
		     break;
            if (array[i] > array[i+1])
               swap(array[i], array[i+1]);
         }
         count++;
      }while(count != value);
   }
   void show_array()  // methode shows array
   {
      std::cout << "Array: ";
      for(int i = 0; i < value; i++)
      {
         std::cout << array[i] << " ";
      }
      std::cout << std::endl;
   }
};
int main()
{
   SORTING *OBJ_1 = new SORTING();
   OBJ_1->making_values();
   OBJ_1->buble_sorting();
   OBJ_1->show_array();
   return 0;
}