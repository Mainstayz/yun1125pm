﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3077;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3078;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
struct  Enumerator_t3079 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::list
	LinkedList_1_t3077 * ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::current
	LinkedListNode_1_t3078 * ___current_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::index
	int32_t ___index_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::version
	uint32_t ___version_3;
};
