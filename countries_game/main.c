#include<stdio.h>
#include<stdlib.h>

int int_choice = 0;
char char_choice[3];
char bi[3];

int setup_country() {
	system("clear");
	printf("Country Setup Menu");
}

int un() {
	system("clear");
	printf("United Nations Menu");
}

int diplomacy() {
	system("clear");
	printf("Diplomacy Menu");
}

int construction() {
	system("clear");
	printf("Construction Menu");
}

int armed_forces() {
	system("clear");
	printf("Armed Forces Menu");
}

int fighting() {
	system("clear");
	printf("Wars and Battles Menu");
}

int scores() {
	do {
		system("clear");
		printf("Scoring and Winning\n\n");
		printf("1. Scoring\n");
		printf("2. Winning\n");
		printf("3. View Stats\n");
		printf("4. Back\n\n");
		printf("after you've read the information, type in any letter and hit enter\n\n");

		scanf("%s", char_choice);
		int_choice = atoi(char_choice);

		switch(int_choice) {
			case 1:
				printf("scoring info\n");
				scanf("%s", bi);
				break;
			case 2:
				printf("winning info\n");
				scanf("%s", bi);
				break;
			case 3:
				printf("stats\n");
				scanf("%s", bi);
				break;
			case 4:
				main_menu();
				break;
			default:printf("not valid. enter again");
				break;
		}

	}while(int_choice != 99);
}

int shutdown() {
	system("clear");
	printf("Saving...\n");
	//actually save it in like an xml or something
	printf("Submitting...\n");
	//send it to some kind of server
	//also: figure how the hell to make the server work
	printf("Shutting Down...\n");
	//just a placebo lol
	int_choice = 99;
}

int main_menu() {
	do {
		system("clear");
		printf("Countries Game -- Main Menu:\n\n");
		printf("1. Setup Country\n");
		printf("2. United Nations\n");
		printf("3. Diplomacy\n");
		printf("4. Construction\n");
		printf("5. Armed Forces\n");
		printf("6. Wars and Battles\n");
		printf("7. Scoring and Winning\n");
		printf("8. Save/Submit\n\n");

		scanf("%s", char_choice);
		int_choice = atoi(char_choice);

		switch(int_choice) {
			case 1:
				setup_country();
				break;
			case 2:
				un();
				break;
			case 3:
				diplomacy();
				break;
			case 4:
				construction();
				break;
			case 5:
				armed_forces();
				break;
			case 6:
				fighting();
				break;
			case 7:
				scores();
				break;
			case 8:
				shutdown();
				break;
			default:printf("not valid. enter again");
				break;
		}
	}while(int_choice !=99);
}

int main() {
	main_menu();
	return 0;
}
