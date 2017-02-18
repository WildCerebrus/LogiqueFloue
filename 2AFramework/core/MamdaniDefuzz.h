/*
 * MamdaniDefuzz.h
 *
 *  Created on: 18 févr. 2017
 *      Author: Althuser
 */

#ifndef MAMDANIDEFUZZ_H
#define MAMDANIDEFUZZ_H

#include"BinaryExpression.h"

namespace core{

	template <class T>
		class MamdaniDefuzz:public BinaryExpression<T>{

		public :
			MamdaniDefuzz(const T&,const T&,const T&);
			virtual ~MamdaniDefuzz();

			virtual T evaluate(Expression<T>*,Expression<T>*) const;


		private:
			T min, max, step, current;
		};

		template<class T>
		MamdaniDefuzz<T>::MamdaniDefuzz(const T& _min,const T& _max,const T& _step):
		min(_min),max(_max),step(_step){
		}

		template<class T>
		T MamdaniDefuzz<T>::evaluate(Expression<T>* l,Expression<T>* r) const{

		}

}

#endif // MAMDANIDEFUZZ_H

