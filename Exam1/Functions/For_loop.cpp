/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/


void loop()
{
	for (int i = -32; i < 1899; i += 3)
	{
		cout << i << endl; 
	}
}

void loop2 ()
{
	int i = -32; 
	while (i < 1899)
	{
		cout << i << endl;
		i += 3;
	}
}
int main()
{
	loop();
	loop2();
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}