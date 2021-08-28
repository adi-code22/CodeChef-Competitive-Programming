//        Problem Statement.
//        In a season, each player has three statistics: runs, wickets, and catches. Given the season stats of two players A and B, denoted by R, W, and C respectively, the person who is better than the other in the most statistics is regarded as the better overall player. Tell who is better amongst A and B. It is known that in each statistic, the players have different values.
//
//        Input Format
//        The first line contains an integer T, the number of test cases. Then the test cases follow.
//        Each test case contains two lines of input.
//        The first line contains three integers R1, W1, C1, the stats for player A.
//        The second line contains three integers R2, W2, C2, the stats for player B.
//        Output Format
//        For each test case, output in a single line "A" (without quotes) if player A is better than player B and "B" (without quotes) otherwise.
//
//        Constraints
//        1≤T≤1000
//        0≤R1,R2≤500
//        0≤W1,W2≤20
//        0≤C1,C2≤20
//        R1≠R2
//        W1≠W2
//        C1≠C2
//        Sample Input 1
//        3
//        0 1 2
//        2 3 4
//        10 10 10
//        8 8 8
//        10 0 10
//        0 10 0
//        Sample Output 1
//        B
//        A
//        A
//        Explanation.
//        Test Case 1: Player B is better than A in all 3 fields.
//
//        Test Case 2: Player A is better than B in all 3 fields.
//
//        Test Case 3: Player A is better than B in runs scored and number of catches.

//        <----- SOLUTION ----->

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int A[3], B[3], valA=0, valB=0;
	while(t--){
	    valA = 0;
	    valB = 0;

	    for (int i = 0; i<3;i++){
    	    cin>>A[i];
    	    //sumA = sumA + A[i];
    	}
	    for (int j = 0; j<3;j++){
    	    cin>>B[j];
    	    //sumB = sumB + B[j];
    	}
    	for(int k=0; k<3; k++ ){
    	    if(A[k]>B[k]){
    	        valA++;
    	    }
    	    else{
    	        valB++;
    	    }
    	}
	    if(valA>valB){
	        cout<<"A"<<endl;
	    }
	    else{
	        cout<<"B"<<endl;
	    }
	}
	return 0;
}
