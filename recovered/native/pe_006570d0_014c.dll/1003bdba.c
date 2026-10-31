/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003bdba */

void __thiscall FUN_1003bdba(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined1 local_34 [20];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059fd0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1003a106(2,param_1 + 4,param_4);
  local_14 = 0;
  _Str = (char *)FUN_1003be58();
  sVar1 = _strlen(_Str);
  FUN_1001909c(_Str,_Str + sVar1);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

