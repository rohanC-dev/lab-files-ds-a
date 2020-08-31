#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/*
Rohan's State Machine:
 
A F E
B D H
C A C
D C G
E H F
F G D
G E B
H B C
 
Your starting state is: C 
*/
typedef struct state{
	   char name;
	   struct state* input0;
	   struct state* input1;
   }state;
state a, b, c, d, e, f, g, h, currentState;
void createStateMachine(){
   a.name = 'A';
   a.input0 = &f;
   a.input1 = &e;
   b.name = 'B';
   b.input0 = &d;
   b.input1 = &h;
   c.name = 'C';
   c.input0 = &a;
   c.input1 = &c;
   d.name = 'D';
   d.input0 = &c;
   d.input1 = &g;
   e.name = 'E';
   e.input0 = &h;
   e.input1 = &f;
   f.name = 'F';
   f.input0 = &g;
   f.input1 = &d;
   g.name = 'G';
   g.input0 = &e;
   g.input1 = &b;
   h.name = 'H';
   h.input0 = &b;
   h.input1 = &c;	
}
state returnState(char i){
	if(i == 'A' || i =='a'){
		return a;
	}else if(i == 'B' || i =='b'){
		return b;
	}else if(i == 'C' || i =='c'){
		return c;
	}else if(i == 'D' || i =='d'){
		return d;
	}else if(i == 'E' || i =='e'){
		return e;
	}else if(i == 'F' || i =='f'){
		return f;
	}else if(i == 'G' || i =='g'){
		return g;
	}else if(i == 'H' || i =='h'){
		return h;
	}
	return a;
}
void changeCurrentState(int i, state currentState){
	if(i == 0){
		if(currentState.input0 == &a){
			currentState = a;
		}else if(currentState.input0 == &b){
			currentState = b;
		}else if(currentState.input0 == &c){
			currentState = c;
		}else if(currentState.input0 == &d){
			currentState = d;
		}else if(currentState.input0 == &e){
			currentState = e;
		}else if(currentState.input0 == &f){
			currentState = f;
		}else if(currentState.input0 == &g){
			currentState = g;
		}else if(currentState.input0 == &h){
			currentState = h;
		}
	}else if(i == 1){
		if(currentState.input1 == &a){
			currentState = a;
		}else if(currentState.input1 == &b){
			currentState = b;
		}else if(currentState.input1 == &c){
			currentState = c;
		}else if(currentState.input1 == &d){
			currentState = d;
		}else if(currentState.input1 == &e){
			currentState = e;
		}else if(currentState.input1 == &f){
			currentState = f;
		}else if(currentState.input1 == &g){
			currentState = g;
		}else if(currentState.input1 == &h){
			currentState = h;
		}
	}
}
int findUnreachableStates(){
	int i;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int count6 = 0;
	int count7 = 0;
	int count8 = 0;
	for(i = 0; i < 8; i++){
		if((*(a.input0)).name == 'A' || (*(a.input1)).name == 'A')
			count1++;
		if((*(a.input0)).name == 'B' || (*(a.input1)).name == 'B')
			count2++;
		if((*(a.input0)).name == 'C' || (*(a.input1)).name == 'C')
			count3++;
		if((*(a.input0)).name == 'D' || (*(a.input1)).name == 'D')
			count4++;
		if((*(a.input0)).name == 'E' || (*(a.input1)).name == 'E')
			count5++;
		if((*(a.input0)).name == 'F' || (*(a.input1)).name == 'F')
			count6++;
		if((*(a.input0)).name == 'G' || (*(a.input1)).name == 'G')
			count7++;
		if((*(a.input0)).name == 'H' || (*(a.input1)).name == 'H')
			count8++;
	}
	for(i = 0; i < 8; i++){
		if((*(b.input0)).name == 'A' || (*(b.input1)).name == 'A')
			count1++;
		if((*(b.input0)).name == 'B' || (*(b.input1)).name == 'B')
			count2++;
		if((*(b.input0)).name == 'C' || (*(b.input1)).name == 'C')
			count3++;
		if((*(b.input0)).name == 'D' || (*(b.input1)).name == 'D')
			count4++;
		if((*(b.input0)).name == 'E' || (*(b.input1)).name == 'E')
			count5++;
		if((*(b.input0)).name == 'F' || (*(b.input1)).name == 'F')
			count6++;
		if((*(b.input0)).name == 'G' || (*(b.input1)).name == 'G')
			count7++;
		if((*(b.input0)).name == 'H' || (*(b.input1)).name == 'H')
			count8++;
	}
	for(i = 0; i < 8; i++){
		if((*(c.input0)).name == 'A' || (*(c.input1)).name == 'A')
			count1++;
		if((*(c.input0)).name == 'B' || (*(c.input1)).name == 'B')
			count2++;
		if((*(c.input0)).name == 'C' || (*(c.input1)).name == 'C')
			count3++;
		if((*(c.input0)).name == 'D' || (*(c.input1)).name == 'D')
			count4++;
		if((*(c.input0)).name == 'E' || (*(c.input1)).name == 'E')
			count5++;
		if((*(c.input0)).name == 'F' || (*(c.input1)).name == 'F')
			count6++;
		if((*(c.input0)).name == 'G' || (*(c.input1)).name == 'G')
			count7++;
		if((*(c.input0)).name == 'H' || (*(c.input1)).name == 'H')
			count8++;
	}
	for(i = 0; i < 8; i++){
		if((*(d.input0)).name == 'A' || (*(d.input1)).name == 'A')
			count1++;
		if((*(d.input0)).name == 'B' || (*(d.input1)).name == 'B')
			count2++;
		if((*(d.input0)).name == 'C' || (*(d.input1)).name == 'C')
			count3++;
		if((*(d.input0)).name == 'D' || (*(d.input1)).name == 'D')
			count4++;
		if((*(d.input0)).name == 'E' || (*(d.input1)).name == 'E')
			count5++;
		if((*(d.input0)).name == 'F' || (*(d.input1)).name == 'F')
			count6++;
		if((*(d.input0)).name == 'G' || (*(d.input1)).name == 'G')
			count7++;
		if((*(d.input0)).name == 'H' || (*(d.input1)).name == 'H')
			count8++;
	}
	for(i = 0; i < 8; i++){
		if((*(e.input0)).name == 'A' || (*(e.input1)).name == 'A')
			count1++;
		if((*(e.input0)).name == 'B' || (*(e.input1)).name == 'B')
			count2++;
		if((*(e.input0)).name == 'C' || (*(e.input1)).name == 'C')
			count3++;
		if((*(e.input0)).name == 'D' || (*(e.input1)).name == 'D')
			count4++;
		if((*(e.input0)).name == 'E' || (*(e.input1)).name == 'E')
			count5++;
		if((*(e.input0)).name == 'F' || (*(e.input1)).name == 'F')
			count6++;
		if((*(e.input0)).name == 'G' || (*(e.input1)).name == 'G')
			count7++;
		if((*(e.input0)).name == 'H' || (*(e.input1)).name == 'H')
			count8++;
	}
	for(i = 0; i < 8; i++){
		if((*(f.input0)).name == 'A' || (*(f.input1)).name == 'A')
			count1++;
		if((*(f.input0)).name == 'B' || (*(f.input1)).name == 'B')
			count2++;
		if((*(f.input0)).name == 'C' || (*(f.input1)).name == 'C')
			count3++;
		if((*(f.input0)).name == 'D' || (*(f.input1)).name == 'D')
			count4++;
		if((*(f.input0)).name == 'E' || (*(f.input1)).name == 'E')
			count5++;
		if((*(f.input0)).name == 'F' || (*(f.input1)).name == 'F')
			count6++;
		if((*(f.input0)).name == 'G' || (*(f.input1)).name == 'G')
			count7++;
		if((*(f.input0)).name == 'H' || (*(f.input1)).name == 'H')
			count8++;
	}
	for(i = 0; i < 8; i++){
		if((*(g.input0)).name == 'A' || (*(g.input1)).name == 'A')
			count1++;
		if((*(g.input0)).name == 'B' || (*(g.input1)).name == 'B')
			count2++;
		if((*(g.input0)).name == 'C' || (*(g.input1)).name == 'C')
			count3++;
		if((*(g.input0)).name == 'D' || (*(g.input1)).name == 'D')
			count4++;
		if((*(g.input0)).name == 'E' || (*(g.input1)).name == 'E')
			count5++;
		if((*(g.input0)).name == 'F' || (*(g.input1)).name == 'F')
			count6++;
		if((*(g.input0)).name == 'G' || (*(g.input1)).name == 'G')
			count7++;
		if((*(g.input0)).name == 'H' || (*(g.input1)).name == 'H')
			count8++;
	}
	for(i = 0; i < 8; i++){
		if((*(h.input0)).name == 'A' || (*(h.input1)).name == 'A')
			count1++;
		if((*(h.input0)).name == 'B' || (*(h.input1)).name == 'B')
			count2++;
		if((*(h.input0)).name == 'C' || (*(h.input1)).name == 'C')
			count3++;
		if((*(h.input0)).name == 'D' || (*(h.input1)).name == 'D')
			count4++;
		if((*(h.input0)).name == 'E' || (*(h.input1)).name == 'E')
			count5++;
		if((*(h.input0)).name == 'F' || (*(h.input1)).name == 'F')
			count6++;
		if((*(h.input0)).name == 'G' || (*(h.input1)).name == 'G')
			count7++;
		if((*(h.input0)).name == 'H' || (*(h.input1)).name == 'H')
			count8++;
	}
	//int count[8] = {count1, count2, count3, count4, count5, count6, count7, count8};
	int count[8];
	count[0] = count1;
	count[1] = count2;
	count[2] = count3;
	count[3] = count4;
	count[4] = count5;
	count[5] = count6;
	count[6] = count7;
	count[7] = count8;
	int garbage[8] = {0,0,0,0,0,0,0,0};
	char stateNum[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	int counter = 0;
	for(i = 0; i < 8; i++){
		if(count[i] == 0){
			garbage[counter] = i+1;
			counter++;
		}
	}
	if(garbage[0] == 0){
		printf("No garbage.");
		return 0;
	}
	printf("Garbage:");
	for(i = 0; garbage[i] != 0; i++){
		printf("\n%c", stateNum[i]);
	}
	return 0;
	
}
void printStateMachine(){
	printf("%c %c %c", a.name, (a.input0)->name, (*(a.input1)).name);
	printf("\n%c %c %c", b.name, (*(b.input0)).name, (*(b.input1)).name);
	printf("\n%c %c %c", c.name, (*(c.input0)).name, (*(c.input1)).name);
	printf("\n%c %c %c", d.name, (*(d.input0)).name, (*(d.input1)).name);
	printf("\n%c %c %c", e.name, (*(e.input0)).name, (*(e.input1)).name);
	printf("\n%c %c %c", f.name, (*(f.input0)).name, (*(f.input1)).name);
	printf("\n%c %c %c", g.name, (*(g.input0)).name, (*(g.input1)).name);
	printf("\n%c %c %c", h.name, (*(h.input0)).name, (*(h.input1)).name);
	
}
void changeState(int i, state x, state r){
	if(i == 0){
		if(x.name == 'A'){
			if(r.name == 'A'){
				a.input0 = &a;
			}else if(r.name == 'B'){
				b.input0 = &a;
			}else if(r.name == 'C'){
				c.input0 = &a;
			}else if(r.name == 'D'){
				d.input0 = &a;
			}else if(r.name == 'E'){
				e.input0 = &a;
			}else if(r.name == 'F'){
				f.input0 = &a;
			}else if(r.name == 'G'){
				g.input0 = &a;
			}else if(r.name == 'H'){
				h.input0 = &a;
			}
		}else if(x.name == 'B'){
			if(r.name == 'A'){
				a.input0 = &b;
			}else if(r.name == 'B'){
				b.input0 = &b;
			}else if(r.name == 'C'){
				c.input0 = &b;
			}else if(r.name == 'D'){
				d.input0 = &b;
			}else if(r.name == 'E'){
				e.input0 = &b;
			}else if(r.name == 'F'){
				f.input0 = &b;
			}else if(r.name == 'G'){
				g.input0 = &b;
			}else if(r.name == 'H'){
				h.input0 = &b;
			}
		}else if(x.name == 'C'){
			if(r.name == 'A'){
				a.input0 = &c;
			}else if(r.name == 'B'){
				b.input0 = &c;
			}else if(r.name == 'C'){
				c.input0 = &c;
			}else if(r.name == 'D'){
				d.input0 = &c;
			}else if(r.name == 'E'){
				e.input0 = &c;
			}else if(r.name == 'F'){
				f.input0 = &c;
			}else if(r.name == 'G'){
				g.input0 = &c;
			}else if(r.name == 'H'){
				h.input0 = &c;
			}
		}else if(x.name == 'D'){
			if(r.name == 'A'){
				a.input0 = &d;
			}else if(r.name == 'B'){
				b.input0 = &d;
			}else if(r.name == 'C'){
				c.input0 = &d;
			}else if(r.name == 'D'){
				d.input0 = &d;
			}else if(r.name == 'E'){
				e.input0 = &d;
			}else if(r.name == 'F'){
				f.input0 = &d;
			}else if(r.name == 'G'){
				g.input0 = &d;
			}else if(r.name == 'H'){
				h.input0 = &d;
			}
		}else if(x.name == 'E'){
			if(r.name == 'A'){
				a.input0 = &e;
			}else if(r.name == 'B'){
				b.input0 = &e;
			}else if(r.name == 'C'){
				c.input0 = &e;
			}else if(r.name == 'D'){
				d.input0 = &e;
			}else if(r.name == 'E'){
				e.input0 = &e;
			}else if(r.name == 'F'){
				f.input0 = &e;
			}else if(r.name == 'G'){
				g.input0 = &e;
			}else if(r.name == 'H'){
				h.input0 = &e;
			}
		}else if(x.name == 'F'){
			if(r.name == 'A'){
				a.input0 = &f;
			}else if(r.name == 'B'){
				b.input0 = &f;
			}else if(r.name == 'C'){
				c.input0 = &f;
			}else if(r.name == 'D'){
				d.input0 = &f;
			}else if(r.name == 'E'){
				e.input0 = &f;
			}else if(r.name == 'F'){
				f.input0 = &f;
			}else if(r.name == 'G'){
				g.input0 = &f;
			}else if(r.name == 'H'){
				h.input0 = &f;
			}
		}else if(x.name == 'G'){
			if(r.name == 'A'){
				a.input0 = &g;
			}else if(r.name == 'B'){
				b.input0 = &g;
			}else if(r.name == 'C'){
				c.input0 = &g;
			}else if(r.name == 'D'){
				d.input0 = &g;
			}else if(r.name == 'E'){
				e.input0 = &g;
			}else if(r.name == 'F'){
				f.input0 = &g;
			}else if(r.name == 'G'){
				g.input0 = &g;
			}else if(r.name == 'H'){
				h.input0 = &g;
			}
		}else if(x.name == 'H'){
			if(r.name == 'A'){
				a.input0 = &h;
			}else if(r.name == 'B'){
				b.input0 = &h;
			}else if(r.name == 'C'){
				c.input0 = &h;
			}else if(r.name == 'D'){
				d.input0 = &h;
			}else if(r.name == 'E'){
				e.input0 = &h;
			}else if(r.name == 'F'){
				f.input0 = &h;
			}else if(r.name == 'G'){
				g.input0 = &h;
			}else if(r.name == 'H'){
				h.input0 = &h;
			}
		}
		
		
		
	}else if(i == 1){
		if(r.name == 'A'){
				a.input1 = &a;
			}else if(r.name == 'B'){
				b.input1 = &a;
			}else if(r.name == 'C'){
				c.input1 = &a;
			}else if(r.name == 'D'){
				d.input1 = &a;
			}else if(r.name == 'E'){
				e.input1 = &a;
			}else if(r.name == 'F'){
				f.input1 = &a;
			}else if(r.name == 'G'){
				g.input1 = &a;
			}else if(r.name == 'H'){
				h.input1 = &a;
			}
		}else if(x.name == 'B'){
			if(r.name == 'A'){
				a.input1 = &b;
			}else if(r.name == 'B'){
				b.input1 = &b;
			}else if(r.name == 'C'){
				c.input1 = &b;
			}else if(r.name == 'D'){
				d.input1 = &b;
			}else if(r.name == 'E'){
				e.input1 = &b;
			}else if(r.name == 'F'){
				f.input1 = &b;
			}else if(r.name == 'G'){
				g.input1 = &b;
			}else if(r.name == 'H'){
				h.input1 = &b;
			}
		}else if(x.name == 'C'){
			if(r.name == 'A'){
				a.input1 = &c;
			}else if(r.name == 'B'){
				b.input1 = &c;
			}else if(r.name == 'C'){
				c.input1 = &c;
			}else if(r.name == 'D'){
				d.input1 = &c;
			}else if(r.name == 'E'){
				e.input1 = &c;
			}else if(r.name == 'F'){
				f.input1 = &c;
			}else if(r.name == 'G'){
				g.input1 = &c;
			}else if(r.name == 'H'){
				h.input1 = &c;
			}
		}else if(x.name == 'D'){
			if(r.name == 'A'){
				a.input1 = &d;
			}else if(r.name == 'B'){
				b.input1 = &d;
			}else if(r.name == 'C'){
				c.input1 = &d;
			}else if(r.name == 'D'){
				d.input1 = &d;
			}else if(r.name == 'E'){
				e.input1 = &d;
			}else if(r.name == 'F'){
				f.input1 = &d;
			}else if(r.name == 'G'){
				g.input1 = &d;
			}else if(r.name == 'H'){
				h.input1 = &d;
			}
		}else if(x.name == 'E'){
			if(r.name == 'A'){
				a.input1 = &e;
			}else if(r.name == 'B'){
				b.input1 = &e;
			}else if(r.name == 'C'){
				c.input1 = &e;
			}else if(r.name == 'D'){
				d.input1 = &e;
			}else if(r.name == 'E'){
				e.input1 = &e;
			}else if(r.name == 'F'){
				f.input1 = &e;
			}else if(r.name == 'G'){
				g.input1 = &e;
			}else if(r.name == 'H'){
				h.input1 = &e;
			}
		}else if(x.name == 'F'){
			if(r.name == 'A'){
				a.input1 = &f;
			}else if(r.name == 'B'){
				b.input1 = &f;
			}else if(r.name == 'C'){
				c.input1 = &f;
			}else if(r.name == 'D'){
				d.input1 = &f;
			}else if(r.name == 'E'){
				e.input1 = &f;
			}else if(r.name == 'F'){
				f.input1 = &f;
			}else if(r.name == 'G'){
				g.input1 = &f;
			}else if(r.name == 'H'){
				h.input1 = &f;
			}
		}else if(x.name == 'G'){
			if(r.name == 'A'){
				a.input1 = &g;
			}else if(r.name == 'B'){
				b.input1 = &g;
			}else if(r.name == 'C'){
				c.input1 = &g;
			}else if(r.name == 'D'){
				d.input1 = &g;
			}else if(r.name == 'E'){
				e.input1 = &g;
			}else if(r.name == 'F'){
				f.input1 = &g;
			}else if(r.name == 'G'){
				g.input1 = &g;
			}else if(r.name == 'H'){
				h.input1 = &g;
			}
		}else if(x.name == 'H'){
			if(r.name == 'A'){
				a.input1 = &h;
			}else if(r.name == 'B'){
				b.input1 = &h;
			}else if(r.name == 'C'){
				c.input1 = &h;
			}else if(r.name == 'D'){
				d.input1 = &h;
			}else if(r.name == 'E'){
				e.input1 = &h;
			}else if(r.name == 'F'){
				f.input1 = &h;
			}else if(r.name == 'G'){
				g.input1 = &h;
			}else if(r.name == 'H'){
				h.input1 = &h;
			}
		}
	}
int main(int argc, char * argv[]){
   createStateMachine();
   currentState = c;
   printf("Starting State %c: ", c.name);
   char input;
   char inputLine[5];
   // type '$' to exit
   while(inputLine[0] != '$'){
	   printf("\n>>");
	   gets(inputLine);
	   input = inputLine[0];
	   switch(tolower(input)){
			case '0':
				printf("New State: %c", (*(currentState.input0)).name);
				changeCurrentState(0, currentState);
				break;
			case '1':
				printf("New State: %c", (*(currentState.input1)).name);
				changeCurrentState(1, currentState);
				break;
			case 'c':
				if(inputLine[2] == '0'){
					changeState(0, returnState(inputLine[4]), currentState);
					printf("Inputting %c from State %c now sends you to State %c", inputLine[2], currentState.name, returnState(inputLine[4]).name);
				}else if(inputLine[2] == '1'){
					changeState(1, returnState(inputLine[4]), currentState);
					printf("Inputting %c from State %c now sends you to State %c", inputLine[2], currentState.name, returnState(inputLine[4]).name);
				}
				break;
			case 'p':
				printStateMachine();
				break;
			case 'g':
				findUnreachableStates();
				break;
			case 'd':
				break;
			case 'q':
				printf("\nCurrent State: %c", currentState.name);
				break;
	   }
   }
   
   exit(0);
}



