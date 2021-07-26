//            PROBLEM STATEMENT
//
//            There are three people, and each of them has an unbiased 6-sided die. The result of rolling a die will be a number between 1 and 6 (inclusive) with equal probability.
//
//            The three people throw their dice simultaneously. In this game, the third person wins only if his number is strictly greater than the sum of the other two numbers. Given that the first person rolls the value X and the second person rolls the value Y, what is the probability the third person will win?
//
//            Input Format
//            The first line contains an integer T, the number of test cases. Then the test cases follow.
//            Each test case contains two integers X and Y.
//            Output Format
//            For each test case, output the probability that the third person wins.
//
//            Your answer will be considered correct if its absolute error doesn't exceed 10−6.
//
//            Constraints
//            1≤T≤36
//            1≤X,Y≤6
//            Sample Input 1
//            3
//            1 3
//            2 4
//            2 3
//            Sample Output 1
//            0.333333
//            0
//            0.166666
//            Explanation
//            In the first test case, out of the six outcomes of a die, the third person wins if the result is either 5 or 6. So the probability of winning is 26≈0.333333.
//
//            In the second test case, the third person only wins if the result is greater than 6, which is impossible. So the probability of winning is 0.



//        <-----  SOLUTION  ----->

#include <iostream>
using namespace std;

int main() {
	double t, X[2], sum, diff;
	double prob;
	cin>>t;
	while(t--){
	    //cout<<"Iteration: "<<t<<endl;
	    sum = 0;
	    diff = 0;
	    prob = 0;
	    int i=0;
        cin>>X[i];
        cin>>X[i + 1];
        sum = X[i] + X[i + 1];
        //cout<<"The Sum is: "<<sum<<endl;
        do{
            if (sum >= 6){
                cout<<"0"<<endl;
                break;
            }
            diff = 6 - sum;
            //cout<<"The Diff is: "<<diff<<endl;
            prob = diff/6;
            //cout<<"The Prob is: "<<prob<<endl;
            cout<<prob<<endl;
        }while(0);
	}
	return 0;
}
