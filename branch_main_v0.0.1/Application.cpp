#include "InterfaceCore.hpp"

int main(void){
   auto InstanceCore = InterfaceCore::Instantiate();
   while(
      InstanceCore->MainFunction()
   ){
   }
   return 0;
}
