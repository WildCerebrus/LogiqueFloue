/*
 * BinaryExpression.h
 *
 *  Created on: 18 févr. 2017
 *      Author: Althuser
 */

#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H

#include "Expression.h"

namespace core{

	template <class T>
	class BinaryExpression{

		public :

			virtual T evaluate(Expression<T>*,Expression<T>*) = 0;

	};

}

#endif // BINARYEXPRESSION_H
