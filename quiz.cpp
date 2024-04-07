#include <iostream>
#include <clocale>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");

	string name, surname;
	char choice;

	cout << "Введите свое имя и фамилию (желательно на английском языке)" << endl;
	cin >> name >> surname;
	cout << name << "," << " " << "Добро пожаловать в игру 'Кто хочет стать миллионером'!" << endl;

	cout << "Первый вопрос на 500 рублей!" << endl;
	cout << "Сколько байт в одном килобайте?" << endl;
	cout << "Варианты ответа" << endl;
	cout << "A) 256" << endl;
	cout << "B) 8" << endl;
	cout << "C) 1024" << endl;
	cout << "D) 64" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Поздравляем, вы выиграли 500 рублей!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Итак, вопрос на 1500 рублей!" << endl;
	cout << "Сколько сантиметров составляет одна тысячная часть километра?" << endl;
	cout << "A) 10 см" << endl;
	cout << "B) 100 см" << endl;
	cout << "C) 1000 см" << endl;
	cout << "D) 10000 см" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Поздравляем, вы выиграли 1500 рублей!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Внимание, а теперь вопрос на 3000 рублей!" << endl;
	cout << "Число возвели в квадрат и получилось 64, что это за число?" << endl;
	cout << "A) 8" << endl;
	cout << "B) 12" << endl;
	cout << "C) 4" << endl;
	cout << "D) 6" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Это правильный ответ, вы выиграли 3000 рублей!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "4 вопрос на 5.000 рублей!" << endl;
	cout << "Он звучит так: Назовите годы Второй мировой войны" << endl;
	cout << "A) 1914 - 1919" << endl;
	cout << "B) 1939 - 1945" << endl;
	cout << "C) 1944 - 1945" << endl;
	cout << "D) 1940 - 1950" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Потрясающе! Это правильный ответ, вы выигрываете 5.000 рублей!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Молодец! Вы дошли до 5-го вопроса!" << endl;
	cout << "Вы можете выиграть 10.000 рублей!" << endl;
	cout << "Вопрос: Какого газа больше всего на Земле?" << endl;
	cout << "A) Кислород" << endl;
	cout << "B) Гелий" << endl;
	cout << "C) Углекислый газ" << endl;
	cout << "D) Азот" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Это неправильный ответ!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Вы отвечаете верно и выигрываете 10.000 рублей!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Настало время сложных вопросов" << endl;
	cout << "За правильный ответ вы получите 20.000 рублей!" << endl;
	cout << "Вопрос: Какая страна подарила 'Статую Свободы' Америке?" << endl;
	cout << "A) Франция" << endl;
	cout << "B) Испания" << endl;
	cout << "C) Швеция" << endl;
	cout << "D) Канада" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Невероятно, Вы получаете 20.000 рублей!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Увы, но правильный ответ : Франция!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Увы, но правильный ответ : Франция!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Увы, но правильный ответ : Франция!" << endl;
		cin.get(); cin.get();
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Мы вернемся через некоторое время, а пока реклама" << endl;
	cout << "Покупайте процессоры Intel Core, лучшее качество по лучшей цене!" << endl;
	Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)

	cout << "Игра продолжается!" << endl;
	cout << "Вы можете выиграть 30.000 рублей, ответив на следующий вопрос!" << endl;
	cout << "Вопрос звучит следующим образом: За какое время лучи Солнца достигают Земли?" << endl;
	cout << "A) За 15 минут" << endl;
	cout << "B) За 5 минут" << endl;
	cout << "C) За 8 минут" << endl;
	cout << "D) За 17 минут" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Увы, но правильный ответ : За 8 минут" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Увы, но правильный ответ : За 8 минут" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Да, вы ответили верно и получаете 30.000 рублей!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Увы, но правильный ответ : За 8 минут" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Внимание: Вопрос на 50.000 рублей!" << endl;
	cout << "Вопрос: Самое глубокая точка в океане это -" << endl;
	cout << "A) Курило-Камчатский желоб" << endl;
	cout << "B) Марианская впадина" << endl;
	cout << "C) Желоб Тонга" << endl;
	cout << "D) Впадина Минданао" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Неее, это неправильный ответ" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Ого, правильно, забирайте 50.000 рублей!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Неее, это неправильный ответ" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Неее, это неправильный ответ" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Если вы дошли до этого этапа, значит вы сверхразум" << endl;
	cout << "Вы можете получить целых 100.000 рублей, ответив на данный вопрос!" << endl;
	cout << "Итак: Назовите ближайшие 2 к Земле звезды" << endl;
	cout << "A) Солнце и Сириус" << endl;
	cout << "B) Сириус и Альфа Центавра" << endl;
	cout << "C) Солнце и Проксима Центавра" << endl;
	cout << "D) Проксима Центавра и Сириус" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Неее, это неправильный ответ" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Неее, это неправильный ответ" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Даа, вы хороший астроном, либо очень везучий человек!" << endl;
		cout << "Ваш выигрыш составляет 100.000 рублей!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Неее, это неправильный ответ" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Поздравляю, вы прошли очень далеко" << endl;
	cout << "Итак, вопрос №10 на 250.000 рублей!" << endl;
	cout << "Бомба, созданная человеком, которая обладает самой большой мощностью" << endl;
	cout << "A) Вакуумная бомба" << endl;
	cout << "B) Кобальтовая бомба" << endl;
	cout << "C) Нейтронная бомба" << endl;
	cout << "D) Царь бомба" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Вы проигралиии((((" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Вы проигралиии((((" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Вы проигралиии((((" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Невероятно, ядерщик." << endl;
		cout << "Приз: 250.000 рублей" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "11 вопрос на 500.000 рублей: Кому из пророков Аллах1 ниспослал книгу Инджиль (Евангелие)?" << endl;
	cout << "Варианты ответа" << endl;
	cout << "A) Дауду" << endl;
	cout << "B) Мусе" << endl;
	cout << "C) Исе" << endl;
	cout << "D) Мухаммаду" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Вы проиграли, увидимся в следующий раз" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Вы проиграли, увидимся в следующий раз" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Молодец, верно! 500.000 рублей ваши!" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Вы проиграли, увидимся в следующий раз" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Мне кажется или кто-то станет миллионером?" << endl;
	cout << "Приступаем к вопросу №12 на 1.000.000 рублей" << endl;
	cout << "В каком году затонул всеми известный корабль 'Титаник'?" << endl;
	cout << "A) В 1806 году" << endl;
	cout << "B) В 1815 году" << endl;
	cout << "C) В 1878 году" << endl;
	cout << "D) В 1912 году" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Эх вы, могли бы 1.000.000 выйграть" << endl;
		cout << "Походу в другой раз" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Эх вы, могли бы 1.000.000 выйграть" << endl;
		cout << "Походу в другой раз" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Эх вы, могли бы 1.000.000 выйграть" << endl;
		cout << "Походу в другой раз" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Играем дальше, 1.000.000 рублей у вас" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Осталось 3 вопроса" << endl;
	cout << "Итак, 13 вопрос на LADA 2107" << endl;
	cout << "Вопрос звучит так: Какой клетки нет на шахматной доске?" << endl;
	cout << "A) k6" << endl;
	cout << "B) h8" << endl;
	cout << "C) g5" << endl;
	cout << "D) b7" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Это правильный ответ!!!" << endl;
		cout << "Вы получаете LADA 2107" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Нет, это неправильный ответ, могли бы выйграть машину" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Нет, это неправильный ответ, могли бы выйграть машину" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Нет, это неправильный ответ, могли бы выйграть машину" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Вы точно настроены на большой приз" << endl;
	cout << "Ваш приз за 14 вопрос - КЛЮЧИ от LADA 2107" << endl;
	cout << "Так, Какая медаль была вручена Юрию Гагарину после полета в космос?" << endl;
	cout << "A) Золотая медаль" << endl;
	cout << "B) За отвагу" << endl;
	cout << "C) За освоение целинных земель" << endl;
	cout << "D) За трудовую доблесть" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Это поражение друзья" << endl;
		cout << "Аплодисменты гостям)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "Это поражение друзья" << endl;
		cout << "Аплодисменты гостям)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Невероятно, вы большой молодец" << endl;
		cout << "Ваш приз КЛЮЧИ от LADA 2107)" << endl;
		Sleep(3000);    //задержка в 3000 миллисекунд (3 секунды)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Это поражение друзья" << endl;
		cout << "Аплодисменты гостям)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "Последний вопрос на РУЛЬ от LADA 2107" << endl;
	cout << "Вопрос №15: Какой из следующих брендов одежды самый популярный?" << endl;
	cout << "A) Chanel" << endl;
	cout << "B) Gucci" << endl;
	cout << "C) Barberry" << endl;
	cout << "D) Louis Vuitton" << endl;
	cout << "Ваш ответ: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "Вы были так близко, ваш выигрыш составляет 0 рублей(" << endl;
		cout << "Это поражение друзья" << endl;
		cout << "Аплодисменты гостям)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "!!!!Дааа, вы победили, это было превосходно!!!!" << endl;
		cout << "Ваш приз составляет 1.000.000 рублей и собранная LADA 2107" << endl;
		cout << "Ваше имя будет записано в таблице лучших" << endl;
		cout << "Поздравляем!!!" << endl;
		cout << "Поздравляем!!!" << endl;
		cout << "Поздравляем!!!" << endl;
		cout << "Таблица победителей игры:" << endl;
		cout << "1: " << name << " " << surname << endl;
		cout << "2: " << "пока неизвестно" << endl;
		cout << "3: " << "пока неизвестно" << endl;
		cout << "4: " << "пока неизвестно" << endl;
		cout << "5: " << "пока неизвестно" << endl;
		cout << "6: " << "пока неизвестно" << endl;
		cout << "7: " << "пока неизвестно" << endl;
		cout << "8: " << "пока неизвестно" << endl;
		cout << "9: " << "пока неизвестно" << endl;
		cout << "10: " << "Albert Einstein" << endl;
		cout << "11: " << "Cristiano Ronaldo 7" << endl;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "Вы были так близко, ваш выигрыш составляет 0 рублей(" << endl;
		cout << "Это поражение друзья" << endl;
		cout << "Аплодисменты гостям)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "Вы были так близко, ваш выигрыш составляет 0 рублей(" << endl;
		cout << "Это поражение друзья" << endl;
		cout << "Аплодисменты гостям)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "Вы ввели неправильную букву!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	cin.get(); cin.get();
	return 0;
}