//
//  Tile.cpp
//
//  Created by T. Suzuki on 2013/07/10.
//  Copyright (c) 2013 T. Suzuki. All rights reserved.
//

#include <cassert>
#include "Tile.h"

/**
 * Constructor
 *
 * @param m number of lows of the matrix
 * @param n number of columns of the matrix
 */
template <class _Tp>
Tile<_Tp>::Tile( const int m, const int n, const int ib ) : SuperM<_Tp>(m,n)
{
	assert( ib > 0 );

	ib_ = ib;
	this->top_ = new _Tp [ this->m_ * this->n_ ];
	
	for (int i = 0; i < this->m_ * this->n_; i++ )
		this->top_ [ i ] = (_Tp)(0);
}

/**
 * Copy Constructor
 *
 * @param T original object
 */
template <class _Tp>
Tile<_Tp>::Tile( const Tile<_Tp>& T ) : SuperM<_Tp>(T)
{
	ib_ = T.ib();
	this->top_ = new _Tp[ this->m_ * this->n_ ];
	for (int i = 0; i < this->m_ * this->n_; i++)
		this->top_[i] = T.top_[i];
}

/**
 * Destructor
 */
template <class _Tp>
Tile<_Tp>::~Tile()
{
	delete[] this->top_;
}


/**
 * Explicit instantiation of the template class
 */
template class Tile<int>;
template class Tile<float>;
template class Tile<double>;

