#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
 
using namespace std;
 
void sort(int* ar, int n)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(ar[j] > ar[j + 1])
                swap(ar[j], ar[j + 1]);
}

void search(int* ar, int n, int numb)
{ 
    for(int i = 0; i < n; i++)
            if(ar[i] == numb) 
                n = i, cout << "\nMatch" << endl;
}
 
int main()
{
    srand(time(NULL));
    int n;
    int num;
    cout << "Enter n: ";
    cin >> n;
    cout << "Search: ";
    cin >> num;
    int* ar = new int [n];
    for(int i = 0; i < n; i++)
    cout << setw(4) << (ar[i] = rand()%100);
    cout << endl;
    sort(ar, n);
    cout << "Sort:\n";
    for(int i = 0; i < n; i++)
    cout << setw(4) << ar[i];
    search(ar, n, num);
    return 0;
}