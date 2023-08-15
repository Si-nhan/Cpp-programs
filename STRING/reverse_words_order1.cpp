#include <iostream>

main()
{
    std::string input;
    std::cout << "Enter a string to reverse: ";
      getline(std::cin, input);
    int len = input.length(),
        space[len], // The array of indexes of spaces in the input string
        count = 0; // The amount of spaces in the input string
    
    // Create the array of the spaces indexes and count the amount of the spaces
    for (int i = 0; i < len; i++) 
      if (input[i] == ' ') {
        count++;
        static int j = 0;
        space[j] = i;
        j++;
      }

    std::string str_arr[count+1]; // The array of words splitted from the input string 

    // Split the input string into the str_arr array
    for (int i = 0; i < space[0]; i++)
      str_arr[0].push_back(input[i]);

    for (int i = 0; i < count-1; i++) 
      for (int j = space[i]+1; j < space[i+1]; j++)
        str_arr[i+1].push_back(input[j]);

    for (int i = space[count-1]+1; i < len; i++)
      str_arr[count].push_back(input[i]);
    
    std::cout << "The reverse string is: ";
    for(int i = count; i >= 0; i--)
      std::cout << str_arr[i] << ' ';
}