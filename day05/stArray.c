#include <stdio.h>

typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];
} Addr;

void print_list(Addr*);

int main() {
	// ±¸Á¶Ã¼ ¹è¿­
	Addr list[3] = { {"È«±æµ¿", 100, "010-123-1234", "¸ô¶ó" },
						{ "±èÃ¶¼ö", 33, "010-222-2222", "ºÎ»ê" },
						{"±è¿µÈñ", 24, "010-333-3333", "¿ï»ê"}
	};

	print_list(list);

	return 0;
}

void print_list(Addr* a) {
	for (int i = 0; i < 3; i++) {
		printf("ÀÌ¸§: %s, ³ªÀÌ: %d, ÀüÈ­¹øÈ£: %s, ÁÖ¼Ò: %s\n", a[i].name, a[i].age, a[i].tel, a[i].addr);
	}

}