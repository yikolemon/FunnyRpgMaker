/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400898a0 */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __ptr64 __cdecl std::basic_ostream<char,struct std::char_traits<char>
   >::`scalar deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl std::basic_ostream<unsigned short,struct
   std::char_traits<unsigned short> >::`scalar deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl std::basic_ostream<wchar_t,struct
   std::char_traits<wchar_t> >::`scalar deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong * FID_conflict__scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -2;
  *(undefined ***)((longlong)*(int *)(*plVar1 + 4) + -0x10 + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x14 + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x10;
  *param_1 = std::ios_base::vftable;
  FUN_1400895d0((longlong)param_1);
  if ((param_2 & 1) != 0) {
    FUN_1400863f0();
  }
  return plVar1;
}

