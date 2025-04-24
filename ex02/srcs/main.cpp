#include <iostream>

/*Difference between ptr and reference.
 * A pointer is a variable that holds the memory address of another variable.
 * A pointer has its own memory address.
 * A reference's memory address is the same at the referenced variable.
 * A pointer can be decleared and assigned on different lines.
 * A reference has to be decleared and initialized on the same line.
 * A rererence cannot be assigned to a NULL directly, while  a pointer can.
 * A reference can be thought of as a constant pointer. 
 * You can have a pointer to pointer while you can't have a reference to a reference.
 * */

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string  *stringPTR =  &string;
	std::string &stringREF = string;

	std::cout << "string address: " << &string << '\n';
	std::cout << "pointer address: " << stringPTR << '\n';
	std::cout << "ref address: " << &stringREF << '\n';

	std::cout << "string value: " << string << '\n';
	std::cout << "pointer value: " << *stringPTR << '\n';
	std::cout << "ref value: " << stringREF << '\n';

}
