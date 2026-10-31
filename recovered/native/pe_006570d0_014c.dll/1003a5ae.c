/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003a5ae */

void __thiscall FUN_1003a5ae(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
  local_18 = &LAB_10059ed0;
  local_1c = ExceptionList;
  _Str = (&PTR_DAT_1028f330)[*(int *)(param_3 + 0x10)];
  ExceptionList = &local_1c;
  sVar1 = _strlen(_Str);
  FUN_1003a106(sVar1,param_1 + 4,param_4);
  local_14 = 0;
  FUN_1001909c(_Str,_Str + sVar1);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

