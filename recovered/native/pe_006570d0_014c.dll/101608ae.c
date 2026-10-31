/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101608ae */

int __thiscall FUN_101608ae(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_100fb0cc(param_2,0xffffffff);
  if (*piVar1 != -1) {
    return *piVar1 * 0x204 + *(int *)(param_1 + 8);
  }
  *piVar1 = *(int *)(param_1 + 0x18);
  iVar2 = FUN_1016a426();
  return iVar2;
}

