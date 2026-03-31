#include "InterfaceCore.hpp"
#include "InterfaceDcmSchm.hpp"

int main(void){
   auto InstanceCore = InterfaceCore::Instantiate();
   while(
      InstanceCore->MainFunction()
   ){
      InterfaceDcmSchm_vMainFunction();
   }
   return 0;
}
