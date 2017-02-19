/*
 * operators.h
 *
 *  Created on: 19 févr. 2017
 *      Author: Althuser
 */

#ifndef OPERATORS_H
#define OPERATORS_H

#include "../core/BinaryExpression.h"
#include "../core/UnaryExpression.h"


namespace fuzzy{

	template <class T>
	class And : public core::BinaryExpression<T>{
	};

	template <class T>
	class Or : public core::BinaryExpression<T>{
	};

	template <class T>
	class Then : public core::BinaryExpression<T>{
	};

	template <class T>
	class Agg : public core::BinaryExpression<T>{
	};

	template <class T>
	class Not : public core::UnaryExpression<T>{
	};

	template <class T>
	class Is : public core::UnaryExpression<T>{
	};

	template <class T>
	class MamdadiDefuzz : public core::BinaryExpression<T>{

	};

	template <class T>
	class CogDefuzz : public core::BinaryExpression<T>{

	};

}

#endif // OPERATORS_H

