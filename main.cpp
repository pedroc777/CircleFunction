#include <iostream>
#include <cmath>
#include "calculation.h"

using namespace std;

int main(){
    long double n;
    int o = 1;




    cout << "Welcome to the Circle Function program. As you read in the article, this " << endl <<
    "program helps us to know the number of sides of a polygon according to its position in the sequence" << endl <<
    "of natural numbers (except for the three-sided polygon which position is represented by log(3)/log(2)" << endl <<
    "[read the article for a more extensive explanation]). Next, we only need to know the position of the" << endl <<
    "figure which number of sides you want to know: n. Remember that n >= 2 and it must be a natural number:" << endl <<
    "a positive integer or, in case you want to get the sides of the first figure, press 1 (remember that" << endl <<
    "position 1 is log(3)/log(2)." << endl << endl;

    while(o != 0){

        cout << endl << endl << endl << "Tell me the figure number which number of sides you want to know:" << endl;
        cin >> n;

        circlecalc(n);

        cout << endl << "Do you want to try with another number? Yes: press any key; No: press 0" << endl;
        cin >> o;


    }

    cout << endl << endl << "Thanks for using. Comeback soon!" << endl;


    return 0;
}
