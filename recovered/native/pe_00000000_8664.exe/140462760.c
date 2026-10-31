/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140462760 */

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
  *param_1 = &DAT_140538cf0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1404760f0(param_1,0,param_2);
  uVar1 = FUN_14047e4d0();
  *(undefined4 *)(param_1 + 5) = uVar1;
  return param_1;
}

