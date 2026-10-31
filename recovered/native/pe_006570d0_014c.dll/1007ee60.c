/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007ee60 */

int __thiscall FUN_1007ee60(int param_1,uint param_2)

{
  int iVar1;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100c2fb0;
  local_14 = ExceptionList;
  local_1c = (param_1 - *(int *)(param_1 + -4)) + -0x68;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_1007eba6();
  iVar1 = local_1c;
  local_c = 0xffffffff;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0xb0);
  }
  ExceptionList = local_14;
  return iVar1;
}

