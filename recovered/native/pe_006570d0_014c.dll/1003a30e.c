/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003a30e */

void __thiscall FUN_1003a30e(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 local_50 [21];
  undefined1 local_3b [3];
  undefined4 local_38;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059e90;
  local_1c = ExceptionList;
  uVar2 = *(uint *)(param_2 + 0x18) | 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  ExceptionList = &local_1c;
  FUN_1003a106(*(int *)(&DAT_102902d4 + iVar1 * 8) +
               (uint)CARRY4(*(uint *)(param_2 + 0x18),*(uint *)(&DAT_102902d0 + iVar1 * 8)),
               param_1 + 4,param_4);
  local_14 = 0;
  local_38 = FUN_1002472e(local_50,*(undefined4 *)(param_2 + 0x18),0x15);
  FUN_1001909c(local_38,local_3b);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

