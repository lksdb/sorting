#include<iostream>
#include<vector>
#include<chrono>
#include<fstream>

using namespace std;

class Timer
{
private:
	// Type aliases to make accessing nested type easier
	using Clock = std::chrono::steady_clock;
	using Second = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<Clock> m_beg { Clock::now() };

public:
	void reset()
	{
		m_beg = Clock::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<Second>(Clock::now() - m_beg).count();
	}
};

void bubbleSort(vector <int> &data){
    bool swap = true;
    while(swap){
        swap = false;
        for(int i=0; i<data.size()-1; i++){
            if(data[i]>data[i+1]){
                int temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
                swap = true;            
            }
        }
    }
}
int main(){
ifstream ipfile("input.txt");    
vector <int> data;
int num, i;

while(ipfile>>num){
    data.push_back(num);
    i++;
}


Timer t;
bubbleSort(data);
for(int i=0; i<data.size(); i++){
    cout<<data[i]<<" ";
}

cout<<"\n";
cout<<"Time elasped : "<<t.elapsed()<<"s";

}