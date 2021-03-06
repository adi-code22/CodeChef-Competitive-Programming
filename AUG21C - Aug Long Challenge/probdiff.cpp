//              You have prepared four problems. The difficulty levels of the problems are A1,A2,A3,A4 respectively. A problem set comprises at least two problems and no two problems in a problem set should have the same difficulty level. A problem can belong to at most one problem set. Output the maximum number of problem sets you can create using the four problems.
//
//                Input Format
//                The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
//                The first and only line of each test case contains four space-separated integers A1, A2, A3, A4, difficulty levels of the four problems.
//                Output Format
//                For each test case, print a single line containing one integer - the maximum number of problem sets you can create using the four problems.
//
//                Constraints
//                1≤T≤1000
//                1≤A1,A2,A3,A4≤10
//                Subtasks
//                Subtask #1 (100 points): Original constraints
//
//                Sample Input 1
//                3
//                1 4 3 2
//                4 5 5 5
//                2 2 2 2
//                Sample Output 1
//                2
//                1
//                0
//                Explanation
//                Test case 1: You can prepare the first problem set using the first two problems and the second problem set using the next two problems. So the problem sets will be [1,4] and [3,2].
//
//                Test case 2: You can prepare one problem set using one problem having a difficulty level of 4 and the other having a difficulty level of 5. There is no way to prepare more than one problem set.
//
//                Test case 3: There is no way to prepare a problem set.


//                <------------ SOLUTION  ----------->



#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int ar[4], a, b, ca=0, cb=0;
	    set<int, greater<int>> s1;
	    for(int i=0; i<4; i++){
	        cin>>ar[i];
	        s1.insert(ar[i]);
	    }
	   // set<int, greater<int> >::iterator itr;
	   // for(itr=s1.begin(); itr != s1.end(); itr++){
	   //     cout<<*itr<<endl;
	   // }

	    switch(s1.size()){
	        case 4:
	                cout<<2<<endl;
	                break;
	        case 3:
	                cout<<2<<endl;
	                break;
	       case 2:  a = ar[0];
	                for(int i=0; i<4; i++){
	                    if(ar[i] != a){
	                        b = ar[i];
	                        cb++;
	                    }
	                    else{
	                        ca++;
	                    }
	                }
	                ca == cb ? cout<<2<<endl : cout<<1<<endl ;
	                break;

	       case 1:
	                cout<<0<<endl;
	                break;
	    }

	}
	return 0;
}
