----include header files later-----


void menu()
{
	printf("\n");
	printf("****************************************\n");
	printf("*****   1. add        2. del       *****\n");
	printf("*****   3. search     4. modify    *****\n");
	printf("*****   5. show       0. exit      *****\n");
	printf("****************************************\n");
}

enum Option
{
	EXIT,    //0
	ADD,     //1
	DEL,     //2
	SEARCH,  //3
	MODIFY,  //4
	SHOW     //5
};
