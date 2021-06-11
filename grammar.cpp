#include <iostream>
#include <vector>

using namespace std;

struct produccion{
	string izq;
	vector<string> der;
};

class gramatica{
	vector<produccion> producciones;
public:
	gramatica(vector<produccion> v){
		for(int i = 0; i < v.size(); i++)
			producciones.push_back(v[i]); 
	}
	vector<produccion> getProducciones(string nt){
		vector<produccion> produc; 
		for(int i = 0; i < producciones.size(); i++){
			std::vector<string>::iterator it;
			it = std::find (producciones[i].der.begin(), producciones[i].der.end(), nt);
			if (it != producciones[i].der.end())
				produc.push_back(producciones[i]);
		}
		return produc;
	}
};






