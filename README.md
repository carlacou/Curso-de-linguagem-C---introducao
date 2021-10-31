## Getting Started with Language C

In this early code development, we covered a lot of content, such as:

* every C language program has the main function, which acts as a starting point. When running the program in the terminal, it will be the first function executed;

```
int main() {
  printf("********************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("********************************************\n");
}
```

* printf(), which prints a string to the screen;

* the string can contain special characters such as:

*  \n, equivalent to "Enter";

*  %d, mask that allows the place it is to be replaced by a variable;

* declare variables — in the example we worked on, we wanted to keep a secret number, and for that we declared a variable of type int, as it held an integer;

* scanf(), function used to read what is typed, and which allows the use of a mask, such as %d in printf(), to store the variable typed by the user;

```
int main(){
  int numerosecreto = 42;
  int chute;

	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

}
```

* To start the course, it is necessary to install **GCC**.

* **GCC** is a C language compiler. The compiler is responsible for transforming all the code we write in C language into machine code (after all, the computer doesn't understand C language directly).

* If you use Linux or Mac, it should already be installed.


