/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00435177 */

void __fastcall FUN_00435177(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x28) + iVar5 * 4);
      iVar6 = -0x80000000;
      iVar7 = 0x7fffffff;
      if (iVar1 != 0) {
        iVar4 = iVar1;
        iVar2 = *(int *)(*(int *)(iVar1 + 0x20) + 0x20);
        while (iVar2 != iVar1) {
          iVar3 = *(int *)(iVar4 + 0x14);
          iVar4 = *(int *)(iVar4 + 0x20);
          if (iVar3 < iVar7) {
            iVar7 = iVar3;
          }
          iVar2 = iVar4;
          if (iVar6 < iVar3) {
            iVar6 = iVar3;
          }
        }
      }
      *(int *)(*(int *)(param_1 + 0x2c) + iVar5 * 4) = iVar7;
      *(int *)(*(int *)(param_1 + 0x30) + iVar5 * 4) = iVar6;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x24));
  }
  return;
}

