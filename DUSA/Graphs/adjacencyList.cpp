#include<bits/stdc++.h>
#include<unordered_map>
#include<list>
using namespace std;


template<typename T>
//graph graph
class graph {
public: 

	unordered_map<T, list<T> > adj;

	void addEdge(int firstEgde, int secondEdge, bool direction){
		//direction 0 -> undrirected
		//direction 1 -> dyricted

		//creating edge
		adj[firstEgde].push_back(secondEdge);

		if(direction == 0){
			adj[secondEdge].push_back(firstEgde);
		}
	}

	void printAdjList(){

		for(auto& it: adj){
			cout << it.first << "-> " ;

			for(auto& it2: it.second){
				cout << it2 << ",";
			}
			cout << endl;
		}
	}
};


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cout << "enter the number of nodes" << endl;
	cin >> n;

	int m;
	cout << "enter the number of edges" << endl;
	cin >> m;

	//making graph
	graph<int> g;

	for(int i=0; i<m; i++){

		int firstEdge, secondEdge;
		cin >> firstEdge >> secondEdge;

		//creating undirectional graph
		g.addEdge(firstEdge, secondEdge, 0);
	}

	//printing graph
	g.printAdjList();

	return 0;
}	