default:
	@gcc -o main.exe main.c printChar.c printName.c shootPlane.c -lm

run:
	sudo ./main.exe