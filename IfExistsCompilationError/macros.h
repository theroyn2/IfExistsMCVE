#pragma once

#include <iostream>

#define SIM_DECLARE_REFLECTION(ClassName) \
	public:	\
		static int* GetClassDescriptor() \
		{	\
			static int sClassDescriptor = 0;\
			\
			return &sClassDescriptor; \
		} \

#ifdef SIM_DECLARE_REFLECTION
#define ReadValueDef(outValue)\
__if_exists(GetClassDescriptor)\
{\
	__if_exists(this)\
	{\
		std::cout << "reflected member function"<< this << ","<<GetClassDescriptor()<<", outvalue="<<outValue<< "\n"\
	}\
		__if_not_exists(this)\
	{\
		std::cout << "reflected static member function"<< 0 << ","<<GetClassDescriptor()<<", outvalue="<<outValue<< "\n"\
	}\
}\
__if_not_exists(GetClassDescriptor)\
{\
		std::cout << "non-reflected function"<< 0 << ","<<0<<", outvalue="<<outValue<< "\n"\
}
#endif