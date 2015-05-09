// Copyright 2015 © Группа 4373, Митряйкин Максим и Бойков Кирилл, 26.04.2015
#ifndef TRANS_Z_Q_CPP
#define TRANS_Z_Q_CPP

#include "../../structs/struct.h"
	
fraction TRANS_Z_Q(const &integer Z) {
	fraction Q;
	Q.numerator = Z; // Присваиваем числителю нашего рационального числа значение целого, хранящегося в переменной Z
	return Q; // Возвращаем значение рационального числа
}

#endif //TRANS_Z_Q_CPP
