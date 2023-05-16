#include <iostream>
#include <sstream>
#include <string>
int main() 
{    
	std::string line;    	
	std::getline(std::cin, line);   
	std::istringstream iss(line);    
	std::string word;    
	while (iss >> word) 
	{        
		std::cout << word.length() << " ";   
	}    
	std::cout << std::endl;    
	  return 0;
}

