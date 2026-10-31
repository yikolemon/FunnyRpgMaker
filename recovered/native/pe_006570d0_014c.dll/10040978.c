/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10040978 */

void FUN_10040978(int param_1)

{
  char *_Str;
  size_t sVar1;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    _Str = (char *)FUN_10024702(*(undefined4 *)(param_1 + 0x24));
    sVar1 = _strlen(_Str);
    FUN_1001909c(_Str,_Str + sVar1);
  }
  return;
}

