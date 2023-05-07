#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int function_windows_border(){
	system("gsettings set org.mate.Marco.general theme \"Windows 10 Light\"");
	return 0;
}
int function_windows_icons(){
	system("dconf write /org/mate/desktop/interface/icon-theme \"\'Windows-10-Icons\'\"");
	return 0;
}
int function_change_windows_background(){
	system("dconf write /org/mate/desktop/background/picture-filename \"\'/usr/share/ABC/log.jpg\'\"");
	return 0;
}
int function_controls(){
	system("gsettings set org.mate.interface gtk-theme \"Windows 10 Light\"");
	return 0;
}

//funciones default
int def_unix_border(){
	system("gsettings set org.mate.Marco.general theme \"Dopple\"");
	return 0;
}
int def_unix_icons(){
	system("dconf write /org/mate/desktop/interface/icon-theme \"\'Tango\'\"");
	return 0;
}
int def_unix_change_back(){
	system("dconf write /org/mate/desktop/background/picture-filename \"\'/usr/share/ABC/ghostemane-thorn-crown-a0br105yd9rq5oap.jpg\'\"");
	return 0;
}
int def_unix_controls(){
	system("gsettings set org.mate.interface gtk-theme \"Abyss-DEEP\"");
	return 0;
}
int main(){

	int numero;
	printf("[1] Windows10 :)\n");
	printf("[2] Unix\n");
	printf("===> ");
	scanf("%d", &numero);
	if(numero==1){
		function_windows_border();
		function_windows_icons();
		function_change_windows_background();
		function_controls();
	}else{
		if(numero==2){
			def_unix_border();
			def_unix_icons();
			def_unix_change_back();
			def_unix_controls();
		}else{
			if(numero!=1 && numero!=2){
				printf("[+]Opcion invalida break!");
				return 0;
			}
		}
	}
	return 0;
}
