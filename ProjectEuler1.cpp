#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

//Arithmetic Sum function prototype
long int sum_formula(long int a1, long int an, long int n);

int main(){
    long int t;
	long int xnth, ynth, znth, xn, yn, zn, sum;
    cin >> t;
    for(long int a0 = 0; a0 < t; a0++){
        long int n;

		sum = 0; //Setting sum back to zero
        cin >> n;
	
		//Calculate how many terms for each
		xn = (n-1)/3;
		yn = (n-1)/5;
		zn = (n-1)/15;
		
		//Calculate nth term for each
		xnth = 3*xn;
		ynth = 5*yn;
		znth = 15*zn;
		
		//Add all mutiples of 3 and 5 while subtracting mutiples of 15
		sum += sum_formula(3, xnth, xn);
		sum += sum_formula(5, ynth, yn);
		sum -= sum_formula(15, znth, zn);

		//Print the result
		cout << sum << endl;
    }
    return 0;
}

/* Function to calculate the sum of an arithmetic series
 * 
 * Parameters: a1 (First term), an (nth term), n (number of terms)
 * Return Value: Arithmetic Sum
 */
long sum_formula(long a1, long an, long n) {
	long int temp = n*((a1 + an)/2.0);
	return temp;
}
