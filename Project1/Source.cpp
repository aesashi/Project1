
/* Problem

Given a list of tickets, find itinerary in order using the given list.
Example:


Input:
"Russellville" -> "Conway"
"Little Rock" -> "Dallas"
"Fort Smith"    -> "Russellville"
"Dallas"  -> "Fort Smith"

Output:
Little Rock->Dallas, Dallas->Fort Smith, Fort Smith->Russellville, Russellville->Conway

*/

/* Algorithm
1) Create a HashMap of given pair of tickets.  Let the created
   HashMap be 'dataset'. Every entry of 'dataset' is of the form
   "from->to" like "Little Rock" -> "Dallas"

2) Find the starting point of itinerary.
	 a) Create a reverse HashMap.  Let the reverse be 'reverseMap'
		Entries of 'reverseMap' are of the form "to->form".
		Following is 'reverseMap' for above example.
		"Russellville" <- "Conway"
		"Little Rock" <- "Dallas"
		"Fort Smith"   <- "Russellville"
		"Dallas"  <- "Fort Smith"

	 b) Traverse 'dataset'.  For every key of dataset, check if it
		is there in 'reverseMap'.  If a key is not present, then we
		found the starting point. In the above example, "Little Rock" is
		starting point.

3) Start from above found starting point and traverse the 'dataset'
   to print itinerary.
*/


#include <iostream>
#include <map>
using namespace std;

void printItinerary(map<string, string> dataSet)
{
	// To store reverse of given map
	map<string, string> reversemap;
	map<string, string>::iterator it;

	//(*) To fill reverse map, iterate through the given map it ...
	//Enter code here...

	//(*) Find the starting point of itinerary
	string start;

	for (it = dataSet.begin(); it != dataSet.end(); it++)
	{
		//Enter Code here...
	}

	// If we could not find a starting point, then something wrong with input
	if (start.empty())
	{
		cout << "Invalid Input" << endl;
		return;
	}

	//(*) Once we have starting point, we simple need to go next,
	//next of next using given hash map
	it = dataSet.find(start);
	//Enter code here...

}

int main()
{
	map<string, string> dataSet;
	dataSet["Russellville"] = "Conway";
	dataSet["Little Rock"] = "Dallas";
	dataSet["Fort Smith"] = "Russellville";
	dataSet["Dallas"] = "Fort Smith";

	printItinerary(dataSet);

	return 0;
}
// C++ implementation is contributed by Aditya Goel