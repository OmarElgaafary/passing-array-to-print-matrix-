#include <iostream>


void funcprint(int array[3][3]);

int main() {

	int arr[3][3] = { {0, 2, 4}, {6, 8, 10}, {12, 14, 16} };

	funcprint(arr);
}

void funcprint(int array[3][3]) {

	for (int i = 0; i < 3; i++) {
		std::cout << "[";

		for (int j = 0; j < 3; j++) {
			std::cout << array[i][j];
			if (j <= 1) {
				std::cout << ", ";
		}
	}
		std::cout << "]";
		std::cout << std::endl;
	}
}
