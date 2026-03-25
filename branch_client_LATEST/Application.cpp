#include "InterfaceCore.hpp"

int main(
      int   argc
   ,  char* argv[]
){
   if(argc < 2){
      cerr << "Error: No IP address provided." << endl;
      cout << "Usage: " << argv[0] << " <IP_ADDRESS>" << endl;
      return 1;
   }
   else{
      auto InstanceCore = InterfaceCore::Instantiate(
         argv[1]
      );
      while(
         InstanceCore->MainFunction()
      ){
      }
      return 0;
   }
}
