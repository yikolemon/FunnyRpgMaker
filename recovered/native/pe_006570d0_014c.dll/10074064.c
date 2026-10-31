/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074064 */

int __thiscall FUN_10074064(int param_1,uint param_2)

{
  int iVar1;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100c2a20;
  local_14 = ExceptionList;
  local_1c = param_1 + -0x20;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_100740fa();
  iVar1 = local_1c;
  local_c = 0xffffffff;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x68);
  }
  ExceptionList = local_14;
  return iVar1;
}

