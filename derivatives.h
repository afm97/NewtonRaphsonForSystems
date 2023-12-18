typedef double (*function)(double, double, double);

double derivative_function_x1(double x_1, double x_2, double x_3, double h, function f)
{
    return (f(x_1 + h, x_2, x_3) - f(x_1, x_2, x_3)) / h;
}

double derivative_function_x2(double x_1, double x_2, double x_3, double h, function f)
{
    return (f(x_1, x_2 + h, x_3) - f(x_1, x_2, x_3)) / h;
}

double derivative_function_x3(double x_1, double x_2, double x_3, double h, function f)
{
    return (f(x_1, x_2, x_3 + h) - f(x_1, x_2, x_3)) / h;
}