#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char palin[80];
  char drome[80];
  char palindrome[80];
  int count = 0;
  
  cin.get(palin, 80);
  cin.get();

  for(int i = 0; i <= 80; i++){
    if((palin[i] != ' ') && (ispunct(palin[i]) == false)){
          drome[count] = tolower(palin[i]);
	  count++;
      }
  }

  cout << palin << endl;
  cout << drome << endl;

  /* for(int j = 0; i < strlen(drome); i++){
    
     }*/
}
