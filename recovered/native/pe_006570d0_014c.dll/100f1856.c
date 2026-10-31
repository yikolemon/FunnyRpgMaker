/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1856 */

undefined4 * __thiscall FUN_100f1856(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_100f54c0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_2 = 0;
  local_c = 0;
  uVar3 = *(uint *)(param_1 + 0x9c) & 3;
  iVar1 = *(int *)(*(int *)(param_1 + 0x94) +
                  (*(int *)(param_1 + 0x98) - 1U & *(uint *)(param_1 + 0x9c) >> 2) * 4);
  uVar2 = *(undefined4 *)(iVar1 + uVar3 * 4);
  *(undefined4 *)(iVar1 + uVar3 * 4) = 0;
  *param_2 = uVar2;
  FUN_100f1c88();
  ExceptionList = local_14;
  return param_2;
}

