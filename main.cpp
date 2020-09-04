#include <iostream>
using namespace std;


int main() {

    int num1, num2; // num1 represents for age and num2 represents for gender
    const int size = 6;
    int arr [size]; // array for 6 groups of people grouped based on gender and age

    for (int i = 0; i <6; i++ ) {
        // initializing 6 variables
        arr [i] =0;
    }

    /*Input 10 sets of numbers for 10 people */
    for (int i=0; i<10 ; i++ ){
        cout << "Type in two numbers represent for age and gender (non-binary = 0, female = 1, male = 2)" << endl;
        cin >> num1 >> num2;

        if (num2 == 1){
            if (num1 > 20) {
                // number of female over 20
                arr[0] ++;

            }
            else {
                // number of female 20 and under
                arr[1] ++;
            }
        }

        else if (num2 == 2) {

            if (num1 > 20) {
                // number of male over 20
                arr[2] ++;
            }
            else {
                // number of male 20 and under
                arr[3] ++;
            }
        }
        else {

            if (num1 > 20) {
                // number of non-binary over 20
                arr[4] ++;
            }
            else {
                // number of non-binary 20 and under
                arr[5] ++;
            }
        }
    }

    cout << "You have enter " << arr[2] << " males over 20 and " << arr[3] << " males 20 and under" <<endl;
    cout << "You have enter " << arr[0] << " females over 20 and " << arr[1] << " females 20 and under" <<endl;
    cout << "You have enter " << arr[4] << " non-binary over 20 and " << arr[5] << " non-binary 20 and under" <<endl;
    return 0;
}
