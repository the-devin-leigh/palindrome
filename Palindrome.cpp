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
  strcpy(palindrome, drome); //copies edited string to new string for comparison

  for(int j = 0; j < strlen(palindrome)/2; j++){
    char temp = palindrome[j];
    palindrome[j] = palindrome[strlen(drome)-j-1];
    palindrome[strlen(drome)-j-1] = temp;  
  }

  cout << palindrome << endl;

  if(strcmp(drome, palindrome) == 0){
    cout << "That's a palindrome." << endl;
  }else{
    cout << "Not a palindrome." << endl; 
  } 
}
