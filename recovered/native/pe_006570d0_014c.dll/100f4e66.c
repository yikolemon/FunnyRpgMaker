/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4e66 */

void __thiscall FUN_100f4e66(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5770;
  local_1c = ExceptionList;
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  ExceptionList = &local_1c;
  piVar1 = &local_24;
  if (((iVar2 + uVar5 & 3) == 0) && (piVar1 = &local_24, *(uint *)(param_1 + 8) <= iVar2 + 4U >> 2))
  {
    FUN_100b667e(1);
    uVar5 = *(uint *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x10);
    piVar1 = (int *)local_20;
  }
  local_20 = (undefined1 *)piVar1;
  uVar5 = *(int *)(param_1 + 8) * 4 - 1U & uVar5;
  iVar4 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 0xc) = uVar5;
  uVar5 = uVar5 + iVar2;
  uVar6 = uVar5 >> 2;
  uVar7 = *(int *)(param_1 + 8) + 0x3fffffffU & uVar6;
  if (*(int *)(iVar4 + uVar7 * 4) == 0) {
    local_24 = param_1;
    uVar3 = FUN_10228350(0x10);
    *(undefined4 *)(*(int *)(local_24 + 4) + uVar7 * 4) = uVar3;
    iVar4 = *(int *)(local_24 + 4);
    uVar7 = *(int *)(local_24 + 8) - 1U & uVar6;
    param_1 = local_24;
  }
  iVar2 = *(int *)(iVar4 + uVar7 * 4);
  uVar3 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(iVar2 + (uVar5 & 3) * 4) = uVar3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  ExceptionList = local_1c;
  return;
}

