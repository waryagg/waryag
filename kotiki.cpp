#include <iostream> 
#include <cstring>
using namespace std;

class kotiki
{
	private:
		string color, eyes, name;
		int weight;
	public:
		kotiki () {
			name = "tosha";
			color = "black";
			weight = 3;
			eyes = "yellow";
			
			get();
			cout << endl;
		}
		kotiki (int in_weight) {
			name = "tosha";
			color = "black";
			weight = in_weight;
			eyes = "yellow";
			
			get();
			cout << endl;
	}
		void set(string in_name, string in_color, string in_eyes, int in_weight)
		{
			color = in_color;
			weight = in_weight;
			eyes = in_eyes;
			name = in_name;
          }
		void get() 
		{
			cout << "The color of this cat is " << color << endl;
			cout << "The weight of this cat is " << weight << endl;
			cout << "The color of eyes of this cat is " << eyes << endl;
			cout << "The name of this cat is "<< name << endl;
		
			}
		string getcolor () const
		{
			return color;	
		}
		void sleep()
		{
			cout << "Your cat is going to sleep" << endl;
		}
		void sleep2()
		{
			cout << "Murchik is going to sleep." <<endl;
		}
		~kotiki () {
			cout << "Now your cat wants to be alone. Bye!"<<endl;
		}
};
ostream & operator<<(ostream &m, kotiki const &obj)
{
	m<<obj.getcolor();
	return m;
}
class kotyata: public kotiki 
{
	public:
		void molochko()
		{
			cout << "Your kitten drinks milk"<<endl;
		}
};

 int main()
{  	
     int k=1, r = 0;
	string q, w, e;
	kotiki barsik;
	kotiki *murchik;
     kotyata pushok;
     
	while (k!=0)
	{
	cout << "1 - Write the propetries of your cat" << endl;
	cout << "2 - Show the propetries of your cat" << endl;
	cout << "3 - Suggest to your cat going to sleep" << endl;
	cout << "4 - Call your kitten!"<<endl;
	cout << "0 - Exit" << endl;
	
	cin >> k;
	switch (k)
	{
		case 1:
			cout << "Write the name of the cat" << endl;
			cin >> q;
			cout << "Write the color of the cat"<< endl;
			cin >> w;
			cout << "Write the color of eyes of the cat"<< endl;
			cin >> e;
			cout << "Write the weight of the cat"<< endl;
			cin >> r;
			barsik.set(q,w,e,r);
			break;
		case 2:
			barsik.get();
			break;
		case 3:
			barsik.sleep();
			break;
		case 4:
			pushok.molochko();
			break;
}
	}
	murchik = new kotiki;
	murchik -> sleep2();
}
