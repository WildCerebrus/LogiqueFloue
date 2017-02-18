/*
 * Expression.h
 *
 *  Created on: 18 févr. 2017
 *      Author: Althuser
 */

#ifndef EXPRESSION_H
#define EXPRESSION_H

namespace core{

	template <class T>
	class Expression {

		public :
			virtual T evaluate() = 0;

	};

}
#endif // EXPRESSION_H
