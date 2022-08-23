#include <iostream>
#include <stdlib.h>
using namespace std;

class Restaurant {
   public:
      Restaurant(string name, unsigned int capacity, string phone) {
         restaurantName = name;
	 maximumCapacity = capacity;
	 phoneNumber = phone;
      }

      Restaurant() {
         restaurantName = "";
         maximumCapacity = 0;
         phoneNumber = "";
      }

      void show() {
         cout << restaurantName << " (" << maximumCapacity << "): " << phoneNumber << endl;
      }

   private:
      string restaurantName = "";
      unsigned int maximumCapacity = 0;
      string phoneNumber = "";
};

int main(int argc, char *argv[]) {
   Restaurant one;
   Restaurant *two = new Restaurant("Cortese", 100, "(607)723-6477");
   one.show();
   two->show();
   delete(two);
}
