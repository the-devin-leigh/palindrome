#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char palin[80];
  char drome[80];
  char palindrome[80];
  int count = 0;

  cout << "Please enter a string no longer than 80 characters: " << endl;
  
  cin.get(palin, 80);
  cin.get();
  
  for(int i = 0; i <= 80; i++){ //for loop removes spaces and punctuation from string
    if((palin[i] != ' ') && (ispunct(palin[i]) == false)){
          drome[count] = tolower(palin[i]); //makes characters lowercase as they're copied over
	  count++; //stackoverflow.com suggestion so new string fills in from beginning consistently
      }
  }

  //test print outs
  // cout << palin << endl;
  // cout << drome << endl;
  strcpy(palindrome, drome); //copies edited string to new string for comparison

  for(int j = 0; j < strlen(palindrome)/2; j++){ //flips characters in new string
    char temp = palindrome[j];
    palindrome[j] = palindrome[strlen(drome)-j-1]; //see attached picture
    palindrome[strlen(drome)-j-1] = temp;  
  }

  // cout << palindrome << endl;

  if(strcmp(drome, palindrome) == 0){ //compares edited string with new reversed string
    cout << "That's a palindrome." << endl;
  }else{
    cout << "Not a palindrome." << endl; 
  } 
}
