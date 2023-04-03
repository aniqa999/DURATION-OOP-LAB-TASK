#include <iostream>
using namespace std;
class A {
   private:
      string name;
   protected:
      int age;
   public:
      void setName(string n) {
         name = n;
      }
      void setAge(int a) {
         age = a;
      }
      void printInfo() {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
      }
};


class B: public A {
   public:
      void Show() {
         cout << "Public Function is accessed" << endl;
      }
};

int main() {
   B bObject;
   bObject.setName("Anika");
   bObject.setAge(18);
   bObject.printInfo();
   bObject.Show();

   return 0;
}
