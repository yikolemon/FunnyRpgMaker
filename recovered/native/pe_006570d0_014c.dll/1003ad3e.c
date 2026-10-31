/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003ad3e */

void __thiscall FUN_1003ad3e(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_54 [21];
  undefined1 local_3f [3];
  int local_3c;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059f10;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1003a106(4,param_1 + 4,param_4);
  local_14 = 0;
  local_24 = *(int *)(param_3 + 0x14);
  iVar1 = -(local_24 + 0x76c);
  if (iVar1 < 0) {
    iVar1 = local_24 + 0x76c;
  }
  iVar1 = FUN_1002472e(local_54,iVar1,0x15);
  local_3c = iVar1;
  if (local_24 < -0x76c) {
    local_3c = iVar1 + -1;
    *(undefined1 *)(iVar1 + -1) = 0x2d;
  }
  FUN_1001909c(local_3c,local_3f);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

