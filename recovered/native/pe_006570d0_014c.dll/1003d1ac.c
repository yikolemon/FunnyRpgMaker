/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003d1ac */

void __thiscall FUN_1003d1ac(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_50 [21];
  undefined1 local_3b [3];
  undefined4 local_38;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a080;
  local_1c = ExceptionList;
  uVar3 = *(uint *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x14);
  iVar2 = uVar3 - *(uint *)(param_1 + 0x10);
  if ((int)((iVar1 - *(int *)(param_1 + 0x14)) - (uint)(uVar3 < *(uint *)(param_1 + 0x10))) < 0) {
    iVar2 = 0;
  }
  ExceptionList = &local_1c;
  *(uint *)(param_1 + 0x10) = uVar3;
  *(int *)(param_1 + 0x14) = iVar1;
  uVar3 = iVar2 * 100;
  iVar1 = 0x1f;
  if (uVar3 + 1 != 0) {
    for (; uVar3 + 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  FUN_1003a106(*(int *)(&DAT_102902d4 + iVar1 * 8) +
               (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar1 * 8),uVar3),param_1 + 4,param_4);
  local_14 = 0;
  local_38 = FUN_1002472e(local_50,uVar3,0x15);
  FUN_1001909c(local_38,local_3b);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

