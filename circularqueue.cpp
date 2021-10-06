#include <stdio.h>

int rear = -1;
int n = 5;
int front = n;

int insert(int arr[], int num)
{
	if (front == 0)
	{
		printf("Overflow\n\n");
	}
	else
	{
		arr[n - 2 - rear] = num;
		rear++;
		front--;
		printf("The number inserted is %d\n\n", num);
	}
}

int del(int arr[])
{
	if (rear == -1)
	{
		printf("UnderFlow\n\n");
	}
	else
	{
		printf("The deleted number is %d\n\n", arr[n - 1]);
		for (int i = n - 1; i >= front; i--)
		{
			arr[i] = arr[i - 1];
		}
		front++;
		rear--;
	}
}
bool present = false;
int x = 0;

int peep(int arr[], int m)
{
	if (rear == -1)
	{
		printf("Queue is empty\n\n");
	}
	else
	{
		for (int i = front; i < n; i++)
		{
			if (arr[i] == m)
			{
				present = true;
				x = i - front;
				break;
			}
		}
		if (present)
		{
			printf("\nIt is present at index %d\n\n", x);
		}
		else
		{
			printf("\nIt is not present in the queue.\n\n");
		}
	}
}

int display(int arr[])
{
	if (rear == -1)
	{
		printf("Queue is Empty\n\n");
	}
	else
	{
		for (int i = front; i < n; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n\n");
	}
}

int main()
{
	int arr[n];
	int in;
	int num;
	while (in != -1)
	{
		printf("Enter 0 for insert, 1 for delete , 2 for peep, 3 for display:");
		scanf("%d", &in);
		if (in == 0)
		{
			printf("Enter the number you want to insert:");
			scanf("%d", &num);
			insert(arr, num);
		}
		if (in == 1)
		{
			del(arr);
		}
		if (in == 2)
		{
			printf("Enter the number you want to peep:");
			scanf("%d", &num);
			peep(arr, num);
		}
		if (in == 3)
		{
			display(arr);
		}
	}
	return 0;

	//	insert(arr,100);
	//	insert(arr,20);
	//	insert(arr,30);
	//	insert(arr,40);
	//	insert(arr,2);
	//	del(arr);
	//	insert(arr,88);
	//	display(arr);
	//	peep(arr,99);
}
