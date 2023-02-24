#ifndef C__PROGRAMMIERUNG_FUNCTIONS_H
#define C__PROGRAMMIERUNG_FUNCTIONS_H

#endif //C__PROGRAMMIERUNG_FUNCTIONS_H

int Div(int number)
{
    return (int)number;
}

int IntChangeSign(int number)
{
    return number * -1;
}

float FloatChangeSign(float number)
{
    return number * -1;
}

void MoveCircle(int VectorX, int VectorY, int &x, int &y)
{
    x += VectorX;
    y += VectorY;
}

void Matrix(int (&matrix)[3][3], int number)
{
    for (int i = 0; i < 3; ++i) {
        matrix[i][0] *= number;
        matrix[i][1] *= number;
        matrix[i][2] *= number;
    }
}
