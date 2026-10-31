/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003d08c */

void __thiscall FUN_1003d08c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  local_18 = &LAB_1005a070;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_2 + 0x28) < 1) {
    FUN_1003a106(0,param_1 + 4,param_4);
    local_14 = 0xffffffff;
    FUN_1003a17a();
  }
  else {
    sVar1 = 0;
    local_20 = local_34;
    if (*(char *)(param_1 + 0xd) == '\x01') {
      local_20 = local_34;
      sVar1 = _strlen(*(char **)(param_2 + 0x2c));
    }
    FUN_1003a106(sVar1,param_1 + 4,param_4);
    local_14 = 1;
    _Str = *(char **)(param_2 + 0x2c);
    sVar1 = _strlen(_Str);
    FUN_1001909c(_Str,_Str + sVar1);
    local_14 = 0xffffffff;
    FUN_1003a17a();
  }
  ExceptionList = local_1c;
  return;
}

