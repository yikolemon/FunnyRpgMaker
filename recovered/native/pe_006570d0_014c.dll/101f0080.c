/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f0080 */

int __fastcall FUN_101f0080(byte *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 8);
  if (*piVar1 < param_2) {
    uVar4 = (uint)*param_1;
    if (1 < uVar4) {
      uVar5 = 1;
      do {
        if (param_2 <= piVar1[uVar5]) {
          iVar2 = *(int *)(*(int *)(param_1 + 4) + -4 + uVar5 * 4);
          iVar3 = FUN_101c16ea(param_2 - piVar1[uVar5 - 1],
                               *(int *)(*(int *)(param_1 + 4) + uVar5 * 4) - iVar2,
                               piVar1[uVar5] - piVar1[uVar5 - 1]);
          iVar3 = iVar3 + iVar2;
          goto LAB_101f00d2;
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 4) + -4 + uVar4 * 4);
  }
  else {
    iVar3 = **(int **)(param_1 + 4);
  }
LAB_101f00d2:
  return iVar3 << 0x10;
}

