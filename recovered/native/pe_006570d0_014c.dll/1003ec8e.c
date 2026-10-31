/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003ec8e */

void FUN_1003ec8e(int param_1)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (&PTR_s_T_1033c14c_6_1028f2dc)[*(int *)(param_1 + 8)];
  sVar1 = _strlen(_Str);
  FUN_1001909c(_Str,_Str + sVar1);
  return;
}

