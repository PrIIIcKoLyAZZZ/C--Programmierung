#include <iostream>
#include "Functions.h"

int main()
{
    //Задание № 1
    float Number;
    std::cin >> Number;
    std::cout << Div(Number) << '\n';
    std::cout << "----------------------------------\n";

    //Задание № 2
    std::cout << IntChangeSign(Div(Number)) << '\n';
    std::cout << FloatChangeSign(Number) << '\n';
    std::cout << "----------------------------------\n";

    //Задание № 3
    int X = 5, Y = 7;
    int VectorX = 5, VectorY = -9;
    MoveCircle(VectorX, VectorY, X, Y);
    std::cout << "X: " << X << " Y: " << Y << '\n';
    std::cout << "----------------------------------\n";

    //Задание № 4
    float matrix[3][3];

    for (int i = 0; i < 3; ++i) {
        std::cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2];
    }

    Matrix(matrix, 5.5);

    for (int i = 0; i < 3; ++i) {
        std::cout << matrix[i][0] << " " << matrix[i][1] << " " << matrix[i][2] << '\n';
    }

    return 0;
}