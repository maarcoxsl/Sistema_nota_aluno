#include <iostream>;
int main(){
	std::string nome_aluno;
	int regiao_aluno_escola;

	std::cout << "Insira o seu nome de aluno";
	std::cin >> nome_aluno;
	std::cout << "Insira em qual regiao voce estuda\n1 - sudeste\n2 - nordeste\n";
	std::cin >> regiao_aluno_escola;
	std::cout << "seu nome " << nome_aluno << std::endl;
	std::cout << "Sua regiao " << regiao_aluno_escola << std::endl;

	switch (regiao_aluno_escola) {
	case 1: {
		int nota0;
		int nota1;
		int nota2;
		std::cout << "Insira a sua nota de trabalho: ";
		std::cin >> nota0;
		std::cout << "Insira a sua nota de prova 1: ";
		std::cin >> nota1;
		std::cout << "insira a sua terceira nota de prova 2: ";
		std::cin >> nota2;
		if (nota0 >= 0 && nota0 <= 10 && nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10) {
			int media_aluno = (nota0 + nota1 + nota2) / 3;
			if (media_aluno >= 6 && media_aluno <= 10) {
				std::cout << "Voce foi aprovado.\nSua media: " << media_aluno << std::endl;
			}
			else {
				std::cout << "Voce foi reprovado\nsua  media: " << media_aluno << std::endl;
			}

		}
		else {
			std::cout << "há erro em suas informações tente novamente\nProgama encerrado !!" << std::endl;
		}
		break;
	} case 2 {
		int nota0;
		int nota1;
		int nota2;
		std::cout << "Insira a sua nota de trabalho: ";
		std::cin >> nota0;
		std::cout << "Insira a sua nota de prova 1: ";
		std::cin >> nota1;
		std::cout << "insira a sua terceira nota de prova 2: ";
		std::cin >> nota2;
		if (nota0 >= 0 && nota0 <= 10 && nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10) {
			int media_aluno = (nota0 + nota1 + nota2) / 3;
			if (media_aluno >= 6 && media_aluno <= 10) {
				std::cout << "Voce foi aprovado.\nSua media: " << media_aluno << std::endl;
			}
			else {
				std::cout << "Voce foi reprovado\nsua  media: " << media_aluno << std::endl;
			}

		}
		else {
			std::cout << "há erro em suas informações tente novamente\nProgama encerrado !!" << std::endl;
		}
		break;
	}
	}
	int nota0;
	int nota1;
	int nota2;
	std::cout << "Insira a sua nota de trabalho: ";
	std::cin >> nota0;
	std::cout << "Insira a sua nota de prova 1: "  ;
	std::cin >> nota1;
	std::cout << "insira a sua terceira nota de prova 2: ";
	std::cin >> nota2;
	
	if (nota0 >= 0 && nota0 <= 10 && nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10) {
		int media_aluno = (nota0 + nota1 + nota2) / 3;
		if (media_aluno >= 6 && media_aluno <= 10) {
			std::cout << "Voce foi aprovado.\nSua media: " <<media_aluno<<std::endl;
		}
		else {
			std::cout << "Voce foi reprovado\nsua  media: " <<media_aluno<< std::endl;
		}

	} else {
		std::cout << "há erro em suas informações tente novamente\nProgama encerrado !!" << std::endl;
	}
	
	
	
}
	
