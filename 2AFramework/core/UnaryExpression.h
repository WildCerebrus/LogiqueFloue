/*
 * UnaryExpression.h
 *
 *  Created on: 19 févr. 2017
 *      Author: Althuser
 */

#ifndef UNARYEXPRESSION_H
#define UNARYEXPRESSION_H

#include "Expression.h"

namespace core{

	template <class T>
	class UnaryExpression{

		public :

			virtual T evaluate(Expression<T>*) = 0;

	};

}

#endif // UNARYEXPRESSION_H

