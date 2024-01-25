#include <iostream>
#include <string>

using namespace std; 

int main()
{
  int key = 2; 
  string text = "Tyler";

  string cripted_text = (text[0]+key)%25;
}

return 0; 
