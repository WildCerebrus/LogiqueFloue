/*
 * UnaryShadowExpression.h
 *
 *  Created on: 19 févr. 2017
 *      Author: Althuser
 */

#ifndef UNARYSHADOWEXPRESSION_H
#define UNARYSHADOWEXPRESSION_H

namespace core{

	template <class T>
	class UnaryShadowExpression : public UnaryExpression<T>{

		public:
			UnaryShadowExpression(UnaryExpression<T>*);
			~UnaryShadowExpression(){};

			T evaluate(Expression<T>*);
			void setTarget(UnaryExpression<T>*);

		private:
			UnaryExpression<T>* target;
	};

		template <class T>
		UnaryShadowExpression<T>::UnaryShadowExpression(UnaryExpression<T>* e):
			target(e){
		}

		template <class T>
		T UnaryShadowExpression<T>::evaluate(Expression<T>* o){
			if(target != NULL)
				return target->evaluate(o);
		}

}

#endif // UNARYSHADOWEXPRESSION_H

