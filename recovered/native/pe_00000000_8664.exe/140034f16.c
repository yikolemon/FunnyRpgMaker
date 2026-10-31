/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140034f16 */

void FUN_140034f16(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (&PTR_DAT_1401c81f8)[*(int *)(param_3 + 0x10)];
  sVar1 = strlen(_Str);
  FUN_140019fc2(param_4,_Str,_Str + sVar1);
  return;
}

