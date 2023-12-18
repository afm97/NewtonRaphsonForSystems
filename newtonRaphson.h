void NewtonRaphson(unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows], double independentValues[numberOfRows], double x_1, double x_2, double x_3, double h)
{

    jacobian(x_1, x_2, x_3, h, matrix);

    independentValues[0] = -func1(x_1, x_2, x_3);
    independentValues[1] = -func2(x_1, x_2, x_3);
    independentValues[2] = -func3(x_1, x_2, x_3);

    gaussianElimination(numberOfRows, matrix, independentValues);

    printArray(numberOfRows, independentValues);
}