#include <iostream>
#include "quene.h"
#include "queneADT.h"


int main()
{
	quene<int> queue1(100);
	int x, y;
	queue1.initializeQueue();
	x = 30;
	y = 40;
	queue1.addQueue(x);
	queue1.addQueue(y);
	x = queue1.front();
	queue1.deleteQueue();
	queue1.addQueue(x + 5);
	queue1.addQueue(16);
	queue1.addQueue(x);
	queue1.addQueue(y - 3);


	cout << "Queue Elements: ";
	while (!queue1.isEmptyQueue())
	{
		cout << queue1.front() << " ";
		queue1.deleteQueue();
	}



	return 0;

}
