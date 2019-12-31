#include <queue>
#include <deque>
#include <list>
#include <vector>
using namespace std;

int main() {
	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	//1. Not allowed - iterator constructor
	queue <int> s1(a1, a1 + 10);
	
	//2. Not allowed - copy constructor source and target stack object using different
	// storage containers - s1 ima fundament deque, mi pa ustvarjamo queue s fundamentom vector,
	//ki ga pa sploh ne smemo uporabiti pri gradnji queue-a. Uporabimo lahko samo list in deque
	queue<int, vector <int>> s2(s1);
	
	//3. Not allowed - initialization using predefined container - using different
	//storage object than declared
	//podobno kot zgoraj, ne smemo upoarbiti vectorja 
	deque <int> d1(a1, a1 + 10);
	queue<int, vector <int>> s3(d1);

	return 0;
}