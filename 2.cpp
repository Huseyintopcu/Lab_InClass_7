#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main()
{

	stack<int> s,st;
	int opinion, count = 0;
	do
	{
		cout << "What Operation Do You Want To Perform? Select Opinion Number. Enter the 0 to Exit." << endl;
		cout << "1. Emtpy()" << endl;
		cout << "2. Size()" << endl;
		cout << "3. Front()" << endl;
		cout << "4. enqueue(i)" << endl;
		cout << "5. dequeue()" << endl;
		cout << "6. Display()" << endl << endl;
		do
		{
			cin >> opinion;
			if (opinion > 6)
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
			check = s.empty();
			if (check == 0)
			{
				cout <<  "Queue is not empty" << endl << endl;
			}
			else
			{
				cout << "Queue is empty" << endl << endl;
			}

			break;
		}
		case 2:
		{
			cout << "Size of Queue is:" << s.size() << endl << endl;
			break;
		}
		case 3:
		{
			cout << "Front of Queue is: " << s.top() << endl << endl;
			break;
		}
		case 4:
		{
			int item;
			cout << "Enter a value:";
			cin >> item;
			while (!s.empty())
			{
				st.push(s.top());
				s.pop();
			}
			s.push(item);
			while (!st.empty())
			{
				s.push(st.top());
				st.pop();
			}
			count++;
			cout << endl << endl;
			break;
		}
		case 5:
		{
			if (count==0)
			{
				cout << endl << "-----IT IS EMPTY!!!-----" << endl << endl;
				break;
			}
			s.pop();
			count--;
			break;
		}
		case 6:
		{
			cout << endl << "Elements of Queue:" << endl;

			for (int i = 0; i < count; i++)
			{
				cout << s.top() << " ";
				st.push(s.top());
				s.pop();
			}
			while (!st.empty())
			{
				s.push(st.top());
				st.pop();
			}
			cout << endl << endl;
			break;
		}
		default:
			break;
		}
	} while (opinion != 0);

}