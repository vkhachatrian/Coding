#include "Stack.h"

#include <iostream>

int main()
{
	Stack st{2, 3, 4, 5, 6};

	std::cout << st.pop();

	return 0;
}
