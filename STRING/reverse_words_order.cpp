#include <iostream>
#include <vector>

std::vector <std::string> split(std::string s, char delimiter)
{   /* Split a string into words stored in a vector */
  std::vector <std::string> result; 
  std::string temp;
  for (int i = 0; i < s.length(); i++)
    if (s[i] != delimiter)
      temp += s[i];
    else {
      result.push_back(temp);
      temp.erase();
    }
  result.push_back(temp);
  return result;
}

main() 
{
    std::string input_str;
    std::cout << "Enter a string to reverse: ";
      getline(std::cin, input_str);

    // Split the string before reversing it
    std::vector <std::string> str_vec;
    char del = ' ';
    str_vec = split(input_str, del);

    std::cout << "The reverse string is: ";
    for (int i = str_vec.size()-1; i > -1; i--)
       std::cout << str_vec[i] << ' ';
}

   



  