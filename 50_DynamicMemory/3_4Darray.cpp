#include <iostream>
using namespace std;
int main()
{
    int dim1 = 2;
    int dim2 = 3;
    int dim3 = 4;
    int dim4 = 5;
    int ****array4D = new int ***[dim1];
    for (int i = 0; i < dim1; ++i)
    {
        array4D[i] = new int **[dim2];
        for (int j = 0; j < dim2; ++j)
        {
            array4D[i][j] = new int *[dim3];
            for (int k = 0; k < dim3; ++k)
            {
                array4D[i][j][k] = new int[dim4];
            }
        }
    }
    for (int i = 0; i < dim1; ++i)
    {
        for (int j = 0; j < dim2; ++j)
        {
            for (int k = 0; k < dim3; ++k)
            {
                for (int l = 0; l < dim4; ++l)
                {
                    array4D[i][j][k][l] = i * dim2 * dim3 * dim4 + j * dim3 * dim4 + k * dim4 + l;
                }
            }
        }
    }
    for (int i = 0; i < dim1; ++i)
    {
        for (int j = 0; j < dim2; ++j)
        {
            for (int k = 0; k < dim3; ++k)
            {
                for (int l = 0; l < dim4; ++l)
                {
                    cout << array4D[i][j][k][l] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        cout << endl;
    }
    for (int i = 0; i < dim1; ++i)
    {
        for (int j = 0; j < dim2; ++j)
        {
            for (int k = 0; k < dim3; ++k)
            {
                delete[] array4D[i][j][k];
            }
            delete[] array4D[i][j];
        }
        delete[] array4D[i];
    }
    delete[] array4D;
    return 0;
}
