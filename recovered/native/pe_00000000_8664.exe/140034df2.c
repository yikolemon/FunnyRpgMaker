/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140034df2 */

void FUN_140034df2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (&PTR_s_T_140eccb6f_0x14_1401c8150)[*(int *)(param_2 + 0x10)];
  sVar1 = strlen(_Str);
  FUN_140019fc2(param_4,_Str,_Str + sVar1);
  return;
}

