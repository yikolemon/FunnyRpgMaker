/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d486 */

void __thiscall FUN_1018d486(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_3) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 4) + iVar2) = 0;
      *(int *)(*(int *)(param_1 + 4) + 4 + iVar2) = iVar3;
      *(undefined8 *)(*(int *)(param_1 + 4) + 8 + iVar2) = *(undefined8 *)(param_2 + iVar3 * 8);
      iVar1 = *(int *)(param_1 + 4) + 0x18 + iVar2;
      *(int *)(iVar1 + -8) = iVar1;
      iVar1 = *(int *)(param_1 + 4) + iVar2;
      *(int *)(iVar1 + 0x14) = iVar1 + -0x18;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x18;
    } while (param_3 != iVar3);
  }
  *(int *)(*(int *)(param_1 + 4) + 0x14) = *(int *)(param_1 + 4) + param_3 * 0x18 + -0x18;
  *(int *)(*(int *)(param_1 + 4) + -8 + param_3 * 0x18) = *(int *)(param_1 + 4);
  return;
}

