
double jacobian(double x_1, double x_2, double x_3, double h, double matrix[3][3])
{
    matrix[0][0] = derivative_function_x1(x_1, x_2, x_3, h, func1);
    matrix[0][1] = derivative_function_x2(x_1, x_2, x_3, h, func1);
    matrix[0][2] = derivative_function_x3(x_1, x_2, x_3, h, func1);

    matrix[1][0] = derivative_function_x1(x_1, x_2, x_3, h, func2);
    matrix[1][1] = derivative_function_x2(x_1, x_2, x_3, h, func2);
    matrix[1][2] = derivative_function_x3(x_1, x_2, x_3, h, func2);

    matrix[2][0] = derivative_function_x1(x_1, x_2, x_3, h, func3);
    matrix[2][1] = derivative_function_x2(x_1, x_2, x_3, h, func3);
    matrix[2][2] = derivative_function_x3(x_1, x_2, x_3, h, func3);
}