#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
int time() {

}

int main(){


  time_t tim = time(0);
  tm *gottime = localtime(&tim);
  cout << gottime->tm_hour;
}