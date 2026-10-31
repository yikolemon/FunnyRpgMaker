/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d8c98 */

undefined8 Catch_1800d8c98(undefined8 param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  undefined8 uVar2;
  
  _Str = (char *)(**(code **)(**(longlong **)(param_2 + 0xf8) + 8))();
  sVar1 = strlen(_Str);
  uVar2 = FUN_180017ca0(&DAT_180402968,_Str,sVar1);
  *(int *)(param_2 + 200) = (int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  return 0x1800d7343;
}

