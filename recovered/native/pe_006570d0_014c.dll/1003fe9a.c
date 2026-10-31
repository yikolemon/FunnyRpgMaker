/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003fe9a */

void FUN_1003fe9a(void)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (char *)FUN_1003be58();
  sVar1 = _strlen(_Str);
  FUN_1001909c(_Str,_Str + sVar1);
  return;
}

