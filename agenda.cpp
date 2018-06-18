#include <fstream>
#include <iostream>

using namespace std;

class agenda
{
	private:
	 char nome[45],end[100],email[50];
     int idade;
     long long tel;
    
    public:
     //agenda();
     char setnome();
     char setend();
     char setemail();
     long long settel();
     int setidade();
     void getnome();
     void getend();
     void getemail();
     void gettel();
     void getidade();
     
};

/*agenda::agenda()
{
	idade = tel = 0
}*/

char agenda::setnome()
{
	cin.getline(nome , 45);
}

void agenda::getnome()
{
	cout<<nome;
}

char agenda::setend()
{
	cin.getline(end , 100);
}

void agenda::getend()
{
	cout<<end;
}

char agenda::setemail()
{
	cin.getline(email , 50);
}

void agenda::getemail()
{
	cout<<email;
}

int agenda::setidade()
{
	cin>>idade;
}

void agenda::getidade()
{
	cout<<idade;
}

long long agenda::settel()
{
	cin>>tel;
}

void agenda::gettel()
{
	cout<<tel;
}


int main()
{
	agenda a;
	
	int escolha,flag = 1;
	cout<<"[1] Digitar os dados da pessoa\n";
	cout<<"[2] Imprimir todos os dados\n";
	
	cout<<"Oque deseja fazer?\n";
	cout<<"Sua escolha: ";
	cin>>escolha;
	
	switch (escolha)
	case 1:
	  ofstream arqs("arquivoagenda.meu" , ios::binary);
	  while(flag)
	  {
	     a.setnome();
	     a.setend();
	     a.setemail();
	     a.settel;
	     a.setidade;
	     
	     cin.ignore();
	     
	     rqs.write(reinterpret_cast<const char*>(&a) , sizeof(agenda));	  
	  }
	   
	   arqs.close();
	   
	   break;
	   
	case 2:
	  ifstream arqs("arquivobinario.meu" , ios::binary);
	  
	  arqs.read(reinterpret_cast<const char*>(&a) , sizeof(agenda));
	  
	while(!arqs.eof())
     {

			 a.getnome();
			 a.getend();
			 a.getemail();
			 a.gettel;
			 a.getidade;

			 cin.ignore();
			 arqs.read(reinterpret_cast<const char*>(&a) , sizeof(agenda));
     }
        arqs.close();   
	
     break;
     
   
	
	
}
