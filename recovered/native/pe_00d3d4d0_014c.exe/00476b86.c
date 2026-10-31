/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00476b86 */

undefined4 __fastcall FUN_00476b86(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x40);
  if ((iVar2 == 0) || (*(int *)(iVar1 + iVar2 * 4) < param_3)) {
    *(int *)(iVar1 + iVar2 * 4) = param_3;
  }
  do {
    iVar4 = iVar2;
    if (iVar4 == 0) goto LAB_00476bb9;
    iVar3 = *(int *)(iVar1 + -4 + iVar4 * 4);
    iVar2 = iVar4 + -1;
  } while (param_2 < iVar3);
  if ((iVar4 < 1) || (iVar3 < param_2)) {
LAB_00476bb9:
    uVar5 = *(int *)(param_1 + 0x1c) - 4;
    *(uint *)(param_1 + 0x1c) = uVar5;
    if (uVar5 <= *(uint *)(param_1 + 0x20)) {
      *(undefined4 *)(param_1 + 0x24) = 0x62;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
    do {
      iVar2 = *(int *)(iVar1 + -4 + iVar4 * 4);
      *(int *)(iVar1 + -4 + iVar4 * 4) = param_2;
      iVar4 = iVar4 + -1;
      param_2 = iVar2;
    } while (-1 < iVar4);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  return 0;
}

