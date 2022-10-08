// CMakeProject_snkow.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

// TODO: Reference additional headers your program requires here.







 // See the end of this file for license information.

 #ifndef TORSION_ARRAY_H
 #define TORSION_ARRAY_H




 template < class T>
 class Array {
 protected:
	   T * data;
	   unsigned int used_size;
	   unsigned int capacity;
	
		   static const unsigned int INITIAL_CAPACITY = 8;
	
 public:
	   Array() {
		     used_size = 0;
		     capacity = 0;
		     data = NULL;
		
	}
	
		   inline unsigned int
		   size() {
		     return used_size;
		
	}
	
		   void
		   grow();
	
		   inline void
		   ensure_capacity() {
		     if (used_size > capacity)
			       grow();
		
	}
	
		   inline void
		   append(T element) {
		     used_size++;
		     ensure_capacity();
		     data[used_size - 1] = element;
		
	}
	
		   inline T
		   operator [](unsigned int index) {
		     return data[index];
		
	}
	
		   inline void
		   clear() {
		     if (data)
			       free(data);
		
	}
	
};

 template <class T>
 void
 Array<T>::grow() {
	   if (capacity == 0) {                  // initially allocate a data array
		     data = (T*)malloc(INITIAL_CAPACITY * sizeof(T));
		     capacity = INITIAL_CAPACITY;
		
	}
	else {                              // allocate a new, larger data array
		     T * new_data = (T*)malloc(capacity * 2 * sizeof(T));
		                                         // copy the current data into it
			     memcpy(new_data, data, capacity * sizeof(T));
		     free(data);             // free the original array
		     data = new_data;
		     capacity *= 2;
		
	}
	
}

 #endif

 /* Torsion Operating System, Copyright (C) 2000-2002 Dan Helfman
00087  *
00088  * This program is free software; you can redistribute it and/or modify it
00089  * under the terms of the GNU General Public License as published by the
00090  * Free Software Foundation; either version 2 of the License, or (at your
00091  * option) any later version.
00092  *
00093  * This program is distributed in the hope that it will be useful, but
00094  * WITHOUT ANY WARRANTY; without even the implied warranty of
00095  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
00096  * General Public License for more details (in the COPYING file).
00097  *
00098  * You should have received a copy of the GNU General Public License along
00099  * with this program; if not, write to the Free Software Foundation, Inc.,
00100  * 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
00101  */


 // code copyied 





 ///https://www.nongnu.org/torsion/docs/html/virtmem_8h-source.html




//
//#include "snkow.h"
//
//#define	XTAL_FREQ	4MHZ	
//
//#define	byte		unsigned char
//#define word		unsigned int
//
//#include 	<pic.h>
//#include	<stdio.h>
// __CONFIG(HS& WDTDIS& PWRTEN& LVPDIS& DUNPROT& WRTEN);
//
// void main() {
//	 TRISA = 0x01;	//  RA0 на выход
//	 ADCON0 = 0x41;	//  настройка АЦП
//	 ADCON1 = 0X80
//		 OPTION = 0x08; // настройка TMR0
//	 TOIF = 0;      // сброс флага TMR0
//	 TMR0 = 0x13;   // пуск TMR0   //задержка на таймере TMR0 lkz pfhzlrb
//
//	 for (; !TOIF;) {}		// ожидание срабатывания таймера
//	 ADIF = 0;                  // сброс флага АЦП
//	 GO / -DONE = 1;        // пуск АЦП
//	 for (; !ADIF;) {}     // ожидание конца преобразования АЦП
//
//	 TXREG = ADRESH;       // передача в USART старшего байта АЦП
//	 TXREG = ADRESL;       // передача в USART  младшего байта АЦП
//
// }                // конец main
