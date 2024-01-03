#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <sys/timeb.h>
#include <time.h>

struct segment
{
	int x,y;
	struct segment *next,*prev;
}*head,*tail,*current,*temp;
int skor_read(){
	FILE *rd;
	int high_score;
	rd =fopen("high_score.txt","r");
	if(!rd){
		return 0;
	}
	else{
		while(!feof(rd))
		{
			fscanf(rd "%d",&high_score);
			fflush("tsdin");
		}
		fclose(rd);
	}
	return high_score;
}
int score_write(int score){
	File *wr;
	int skor;
	skor =score;
	wr =fopen("high score.txt","w")
	if(!wr){
		return 0;
	}
	else{
		fprintf(wr"%d",skor);
	}
	fclose(wr);
}
	void push(int x,int y)
	{
		current =(struct segment*)malloc(sizeof(struct segment));
		current->next =current->prev =NULL;
		current->x =x;
		current->y =y;
		if(head==NULL){
			head = tail = current;
		}
		else{
			current->next =head;
			head->prev =current;
			head = current;
		}
	}
	
	void pop()
	{
		if(head == tail){
			free(head);
			head = tail = NULL;
		}
		else{
			tail = tail->prev;
			free(tail->next);
			tail->next =NULL;
		}
	}
	
	void pop_all()
	{
		while(head!=NULL){
			pop();
		}
	}

	void gotoxy(int x,int y)
	{
		coord pos;
		pos.x =x;
		pos.y =y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}	
	void display()
	{
		temp = head;
		while(temp!=NULL){
			gotoxy(temp->x,temp->y);
			printf("o");
			temp = temp->next;
		}
	}
	//variable set game snake
	int snake_size =3;
	int snake_speed =200;
	int dir = VK_RIGHT;
	int game_width =56;
	int game_height =25;
	int food_x,food_y;
	
	int check(int x,int y)
	{
		temp = head;
		while(temp!=NULL){
			if(temp->==x && temp->y == y){
				return 1;
			}
			temp = temp->next;
		}
		return 0;
	}
	
	void place_food(){
		int x,y;
		do{
			food_x =rand()%(game_width-1) + 1;
			food_y =rand()%(game_height-1) + 1;
		}while(check(food_x,food_y)==1);
		
	}
	