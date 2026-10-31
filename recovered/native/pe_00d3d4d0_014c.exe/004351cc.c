/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004351cc */

int __fastcall FUN_004351cc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar4 = 0;
  if (2 < iVar1) {
    iVar3 = FUN_00435650(param_1);
    iVar6 = -0x80000000;
    iVar4 = 0;
    iVar5 = 0;
    do {
      if (((iVar3 != iVar5) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x30) + iVar5 * 4), iVar6 < iVar2)) &&
         (*(int *)(*(int *)(param_1 + 0x2c) + iVar5 * 4) <
          *(int *)(*(int *)(param_1 + 0x2c) + iVar3 * 4))) {
        iVar4 = iVar5;
        iVar6 = iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return iVar4;
}

