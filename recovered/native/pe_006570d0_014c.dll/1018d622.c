/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d622 */

void __thiscall FUN_1018d622(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = param_1[3];
  if (iVar4 == 0) {
    FUN_1018d6d0();
    if (-1 < *param_1) {
      piVar5 = param_1 + 1;
      iVar4 = *param_1 + 1;
      do {
        puVar1 = (undefined4 *)*piVar5;
        *puVar1 = 0;
        piVar5 = puVar1 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1[5] = 0;
    FUN_1018d4f4();
    FUN_1018d564();
    iVar4 = param_1[3];
    if (iVar4 == 0) {
      *(int *)param_1[2] = param_1[1];
      iVar4 = 1;
    }
  }
  param_1[3] = iVar4 + -1;
  iVar4 = *(int *)(param_1[2] + -4 + iVar4 * 4);
  *param_2 = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 4);
  param_2[1] = *(undefined4 *)(iVar4 + 4);
  param_2[2] = *(undefined4 *)(*(int *)(iVar4 + 0x10) + 4);
  iVar2 = *(int *)(iVar4 + 0x14);
  *(int *)(*(int *)(iVar4 + 0x10) + 0x14) = iVar2;
  iVar3 = *(int *)(iVar4 + 0x10);
  *(int *)(iVar2 + 0x10) = iVar3;
  if (iVar4 == param_1[1]) {
    param_1[1] = iVar3;
  }
  FUN_1018d704(*(undefined4 *)(iVar4 + 0x14));
  FUN_1018d704(*(undefined4 *)(iVar4 + 0x10));
  *param_1 = *param_1 + -1;
  return;
}

