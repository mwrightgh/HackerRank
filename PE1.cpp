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

long int sum_formula(long int a1, long int an, long int n);

int main(){
    long int t;
	long int xnth, ynth, znth, xn, yn, zn, sum;
    cin >> t;
    for(long int a0 = 0; a0 < t; a0++){
        long int n;
		sum = 0;
        cin >> n;
		
		xn = (n-1)/3.0;
		yn = (n-1)/5.0;
		zn = (n-1)/15.0;

		cout << "#times " << xn << " " << yn << " " << zn << endl << endl;
		
		xnth = 3*xn;
		ynth = 5*yn;
		znth = 15*zn;

		cout << "nth number " << xnth << " " << ynth << " " << znth << endl << endl;
			
		sum += sum_formula(3, xnth, xn);
		cout << "Sum 3: " << sum_formula(3, xnth, xn) << endl;
	

		sum -= sum_formula(15, znth, zn);

		cout << "Sum 15: " << sum_formula(15, znth, zn) << endl;

		sum += sum_formula(5, ynth, yn);
		cout << "Sum 5: " << sum_formula(5, ynth, yn) << endl;

		cout << sum << endl;
    }
    return 0;
}

long sum_formula(long a1, long an, long n) {
	long int temp = n*((a1 + an)/2.0);
	return temp;
}



















