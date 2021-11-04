#include <iostream>
#include <iomanip>
using namespace std;

void Init(int t[], const int size)
{
    for (size_t i = 0; i < size; i++)
        t[i] = -20 + rand() % 58;
}

void Print(int t[], const int size)
{
    cout << "{";
    for (size_t i = 0; i < size; i++)
    {
        cout << t[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << "}" << endl;
}

int SumElement(const int* const t, const int size)
{
    int S = 0;
    for (size_t i = 0; i < size; i++)
        if (t[i] % 5 != 0 && t[i] < 0)
            S += t[i];
    return S;
}

int CountElement(const int* const t, const int size)
{
    int C = 0;
    for (size_t i = 0; i < size; i++)
        if (t[i] % 5 != 0 && t[i] < 0)
            C++;
    return C;
}

void ReplaceElement(int t[], const int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (t[i] % 5 != 0 && t[i] < 0)
            t[i] = 0;
    }
}

int main()
{
    srand(time(0));

    const int size = 22;
    int t[size];

    Init(t, size);
    Print(t, size);
    cout << "Array sum by condition = " << SumElement(t, size) << endl;
    cout << "Count element by condition = " << CountElement(t, size) << endl;
    ReplaceElement(t, size);
    Print(t, size);

    return 0;
}