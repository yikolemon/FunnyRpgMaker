/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e77f0 */

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::time_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::time_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >(class
   std::_Locinfo const & __ptr64,unsigned __int64) __ptr64
    public: __cdecl std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >(class std::_Locinfo const & __ptr64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

undefined8 * time_get<>(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
             vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1400fb180(param_1,0,param_2);
  uVar1 = FUN_140105830();
  *(undefined4 *)(param_1 + 5) = uVar1;
  return param_1;
}

