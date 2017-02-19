/*
 * FactoryExpression.h
 *
 *  Created on: 19 févr. 2017
 *      Author: Althuser
 */

#ifndef FACTORYEXPRESSION_H
#define FACTORYEXPRESSION_H

#include "Expression.h"
#include "UnaryExpression.h"
#include "BinaryExpression.h"

namespace core{

	template <class T>
	class FactoryExpression{

		public:

			Expression<T>* Hold(Expression<T>*);
            UnaryExpression<T>* newUnaryExpression(UnaryExpression<T>*, Expression<T>*);
            BinaryExpression<T>* newBinaryExpression(BinaryExpression<T>*, Expression<T>*, Expression<T>*);


		private:
			Expression<T>* memory;

	};

	template <class T>
	UnaryExpression<T>* FactoryExpression<T>::newUnaryExpression(UnaryExpression<T>*ope, Expression<T>*o){
		return new UnaryExpression<T>(ope,o);
	}

	template <class T>
	BinaryExpression<T>* FactoryExpression<T>::newBinaryExpression(BinaryExpression<T>* ope, Expression<T>*l, Expression<T>*r){
		return new BinaryExpression<T>(ope,l,r);
	}


}

#endif // FACTORYEXPRESSION_H

