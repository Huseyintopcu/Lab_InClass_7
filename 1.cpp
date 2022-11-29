#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main()
{
	
	queue<int> q;
	int opinion,count=0;
	do
	{
		cout << "What Operation Do You Want To Perform? Select Opinion Number. Enter the 0 to Exit." << endl;
		cout << "1. Emtpy()" << endl;
		cout << "2. Size()" << endl;
		cout << "3. Top()" << endl;
		cout << "4. Push(i)" << endl;
		cout << "5. Pop()" << endl;
		cout << "6. Display()" << endl << endl;
		do
		{
			cin >> opinion;
			if (opinion>6)
			{
				cout << endl << endl << "------PLEASE ENTER A VALUE BETWEEN 0 AND 7-----" << endl << endl;
			}
			else
			{
				break;
			}
		} while (1);
		
		
		switch (opinion)
		{
		case 1:
		{
			int check;
			check = q.empty();
			if (check == 0)
			{
				cout << "Stack is not empty" << endl << endl;
			}
			else
			{
				cout <<  "Stack is empty" << endl << endl;
			}

			break;
		}
		case 2:
		{
			cout <<  "Size of Stack is:" << q.size() << endl << endl;
			break;
		}
		case 3:
		{
			cout <<  "Top of Stack is:" << q.front() << endl << endl;
			break;
		}
		case 4:
		{
			int item;
			cout << "Enter a value:";
			cin >> item;
			q.push(item);
			for (int i = 0; i < count; i++)
			{
				q.push(q.front());
				q.pop();
			}
			count++;
			cout << endl << endl;
			break;
		}
		case 5:
		{
			if (count == 0)
			{
				cout << endl << "-----IT IS EMPTY!!!-----" << endl << endl;
				break;
			}
			q.pop();
			count--;
			break;
		}
		case 6:
		{
			cout << "Elements of Stack:" << endl;

			for (int i = 0; i < count; i++)
			{
				cout << q.front() << " ";
				q.push(q.front());
				q.pop();
			}
			cout << endl << endl;
			break;
		}
		default:
			break;
		}
	} while (opinion != 0);
	
}