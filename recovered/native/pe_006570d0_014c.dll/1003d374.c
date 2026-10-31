/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003d374 */

void __thiscall FUN_1003d374(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_54 [21];
  undefined1 local_3f [3];
  undefined4 local_3c;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a0a0;
  local_1c = ExceptionList;
  uVar1 = *(uint *)(param_2 + 0x10);
  local_24 = *(int *)(param_2 + 0x14);
  iVar2 = uVar1 - *(uint *)(param_1 + 0x10);
  iVar4 = (local_24 - *(int *)(param_1 + 0x14)) - (uint)(uVar1 < *(uint *)(param_1 + 0x10));
  if (iVar4 < 0) {
    iVar2 = 0;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  ExceptionList = &local_1c;
  uVar3 = __aulldiv(iVar2,iVar4,10000,0);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x14) = local_24;
  iVar2 = 0x1f;
  if ((uVar3 | 1) != 0) {
    for (; (uVar3 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  FUN_1003a106(*(int *)(&DAT_102902d4 + iVar2 * 8) +
               (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar2 * 8),uVar3),param_1 + 4,param_4);
  local_14 = 0;
  local_3c = FUN_1002472e(local_54,uVar3,0x15);
  FUN_1001909c(local_3c,local_3f);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

