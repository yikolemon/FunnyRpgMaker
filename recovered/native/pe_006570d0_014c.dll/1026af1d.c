/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026af1d */

/* Library Function - Multiple Matches With Same Base Name
    public: static long __cdecl __crt_integer_traits<long>::loctotime<unsigned short &,unsigned
   short &,unsigned short &,unsigned short &,unsigned short &,unsigned short &,int>(unsigned short
   &,unsigned short &,unsigned short &,unsigned short &,unsigned short &,unsigned short &,int &&)
    public: static __int64 __cdecl __crt_integer_traits<__int64>::loctotime<unsigned short
   &,unsigned short &,unsigned short &,unsigned short &,unsigned short &,unsigned short
   &,int>(unsigned short &,unsigned short &,unsigned short &,unsigned short &,unsigned short
   &,unsigned short &,int &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void loctotime<>(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                undefined2 *param_5,undefined2 *param_6,undefined4 *param_7)

{
  FUN_1027a86f(*param_1,*param_2,*param_3,*param_4,*param_5,*param_6,*param_7);
  return;
}

