#include <iostream>
#include <cmath>
using namespace std; 

int main(){
    float a,b,c;
    do {
        cout << "Podaj długości boków trójkąta prostokątnego a, b (większe od zera)" << endl;
        cin >> a >> b;

        if(a <= 0 || b <= 0) {
            cout << "Długości boków muszą być większe od zera. Spróbuj ponownie." << endl;
        }
    } while (a <= 0 || b <= 0);

    // obliczamy bok c
    c = pow((a*a+b*b), 0.5);

    cout << "Boki wynoszą a = "<< a << ", b = "<< b<<", c = " << c << endl;

    // obliczamy obwód trójkąta
    float ob = a + b + c;

    // obliczamy pole
    float p = 0.5 * a * b;

    cout << "Obwód trójkąta wynosi ob = "<< ob << ", pole trójkąta wynosi p = "<< p << endl;
    return 0;
}
