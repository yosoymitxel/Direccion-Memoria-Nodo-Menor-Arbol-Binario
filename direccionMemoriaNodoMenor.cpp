#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	struct treeNode{
		int dato;
		treeNode *rightPtr = NULL;
		treeNode *leftPtr = NULL;
	};
	
	typedef struct treeNode TREENODE;
	typedef TREENODE * TREE;
	
	void insertar (TREE *, int );
	/*void enOrden (TREE);
	void preOrden (TREE);
	void postOrden (TREE);*/
	TREE nodoMenor(TREE * );
	void contar (TREE, int*);
	void altura (TREE, int, int *);
	
	
int main(int argc, char** argv) {
	int x=0, item, n=0, hmax=0, ban=0, him = 999;
	TREE rootPtr=NULL;
	cout<<"Ingresar un numero, -1: ";
	cin>>item;
	
	while(item!=-1){
		insertar(&rootPtr,item);
		cout<<"Ingresar un numero, -1: ";
		cin>>item;
	}
	cout<<"Resultado: "<<nodoMenor(&rootPtr)<<endl;
	/*preOrden(rootPtr); 
	cout<<endl;
	enOrden(rootPtr);
	cout<<endl;
	postOrden(rootPtr);
	cout<<endl;*/

	system ("pause");
	return 1;
	
}
void insertar (TREE *treePtr, int valor){
	if  (*treePtr == NULL){
		*treePtr = new (TREENODE);
		if (*treePtr !=NULL){
			(*treePtr)->dato =valor;
			(*treePtr)->leftPtr =NULL;
			(*treePtr)->rightPtr=NULL;
		}else
			cout<<"No hay memoria"<<endl;
		}
		else
		if (valor < (*treePtr)->dato){
			insertar (&((*treePtr)->leftPtr), valor);
		}else 
		if (valor > (*treePtr)->dato){
			insertar (&((*treePtr)->rightPtr), valor);
		}else 
			cout<<"DUPLICADO"<<endl;
	
}

TREE nodoMenor(TREE * arbol){
	//TREE q = *arbol;
	while((*arbol)->leftPtr!=NULL){
		//cout<<"nosadf"<<endl;
		//q = (q)->leftPtr;
		(*arbol) = (*arbol)->leftPtr;
	}
	//cout<<"La direccion del dato es: "<<&((*arbol)->dato)<<endl;
	cout<<"La direccion es: "<<*arbol<<endl;
	//cout<<"El valor es: "<<(q)->dato<<q<<endl;
	return *arbol;
}

/*void preOrden(TREE treePtr)
{
	if (treePtr != NULL)
	{
		cout<<treePtr->dato<<"->";
		preOrden(treePtr->leftPtr);
		preOrden(treePtr->rightPtr);
	}
}
void enOrden(TREE treePtr)
{
	if (treePtr != NULL)
	{
		
		preOrden(treePtr->leftPtr);
		cout<<treePtr->dato<<"->";
		preOrden(treePtr->rightPtr);
	}
}
void postOrden(TREE treePtr)
{
	if (treePtr != NULL)
	{
		
		preOrden(treePtr->leftPtr);
		preOrden(treePtr->rightPtr);
		cout<<treePtr->dato<<"->";
	}
}*/


