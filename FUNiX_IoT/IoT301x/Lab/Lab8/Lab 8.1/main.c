#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v);
float absolute (float x);
float sqroot (float y);

int main()
{
    gcd();
    absolute ();
    sqroot ()
    return 0;
}

int gcd (int u, int v){
    int temp;
    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

float absolute(float x) {
    if (x < 0) {
        x = -x;
    }

    return x;
}

float sqroot (float y) {
    const float epsilon = 0.00001;
    float guess = 1.0;

    if(y < 0) {
        printf("The input is invalid");
        guess = -1.05;
    } else {
        while (absolute(guess*guest - y)) >= epsilon {
            guess = (y/guess + guess) / 2.0;
        }
    }
    return guess;
}
