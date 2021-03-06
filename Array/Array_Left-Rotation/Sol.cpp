Method 1 ------------  Naive Sol.

#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2, 3, 4, 1, 9};
    
    int k;
    cout << "Enter k: ";
    cin >> k;
    
    cout << "Array after " << k << " left-rotations: ";           // Space Complexity O(1)
    
    while (k--)                                                   // Time Complexity O(n*k), n = no. of elements and k = no. of left rotations to perform.
    {
        int t = A[0];
        for (int i = 1; i < 5; i++)
        {
            A[i-1] = A[i];
        }
        A[4] = t;
    }
    
    for (int j = 0; j < 5; j++)
    {
        cout << A[j] << " ";
    }
    return 0;
}


Method 2 ---------- using auxiliary array.

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while (t--)
	{
	    int n, d;
	    cin >> n >> d;
	    int arr[n];
	    for (int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int narr[n];                            // auxiliary space - O(n)
	    
	    for (int k = 0; k < n; k++)             // T.C - O(n)
	    {
	        narr[k] = arr[(k+d)%n];
	    }
	   
	    for (int q = 0; q < n; q++)
	    {
	        cout << narr[q] << " "; 
	    }
	    cout << endl;
	}
	return 0;
}


Method 3 ------------- Juggling Algorithm ---------- O(n) time and O(1) space
// Implementation
