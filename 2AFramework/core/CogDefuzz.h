/*
 * CogDefuzz.h
 *
 *  Created on: 18 févr. 2017
 *      Author: Althuser
 */

#ifndef COQDEFUZZ_H
#define COQDEFUZZ_H

#include "MamdaniDefuzz.h"

namespace core{

	template <class T>
	class CogDefuzz:public MamdaniDefuzz<T>{
	public :
		CogDefuzz(const T&,const T&,const T&);

		T evaluate(Expression<T>*,Expression<T>*);

	};

	template <class T>
	CogDefuzz<T>::CogDefuzz(const T& _min,const T& _max,const T& _step):
		MamdaniDefuzz<T>(_min,_max,_step){
	}



}

#endif // COQDEFUZZ_H
