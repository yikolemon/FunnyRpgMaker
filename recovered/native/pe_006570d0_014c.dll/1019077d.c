/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019077d */

void FUN_1019077d(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  int *piVar6;
  uint uVar7;
  ushort *puVar8;
  int *piVar9;
  bool bVar10;
  
  *(undefined1 *)(*(int *)(param_1 + 0x290) + 0xa9) = 1;
  if (*(int *)(param_1 + 0x54) != 0) {
    piVar6 = *(int **)(param_1 + 0x5c);
    piVar2 = piVar6 + *(int *)(param_1 + 0x54);
    do {
      iVar4 = *piVar6;
      FUN_10190228(*(undefined4 *)(iVar4 + 0x14),0xbf800000);
      if (*(short *)(iVar4 + 0x26) != 0) {
        FUN_101902dc(*(short *)(iVar4 + 0x26));
      }
      if (*(short *)(iVar4 + 0x24) != 0) {
        FUN_101902dc(*(short *)(iVar4 + 0x24));
      }
      if (*(int *)(iVar4 + 0x18) != 0) {
        piVar9 = *(int **)(iVar4 + 0x20);
        piVar3 = piVar9 + *(int *)(iVar4 + 0x18);
        do {
          puVar8 = *(ushort **)(*piVar9 + 0x3c);
          if (puVar8 == (ushort *)0x0) {
            puVar8 = &DAT_102f74f4;
          }
          uVar5 = *puVar8;
          while (uVar5 != 0) {
            if (uVar5 <= puVar8[1]) {
              uVar7 = (uint)uVar5;
              do {
                FUN_101902dc(uVar7 & 0xffff);
                if (puVar8[1] <= uVar7) break;
                bVar10 = uVar7 < 0xffff;
                uVar7 = uVar7 + 1;
              } while (bVar10);
            }
            puVar1 = puVar8 + 2;
            puVar8 = puVar8 + 2;
            uVar5 = *puVar1;
          }
          piVar9 = piVar9 + 1;
        } while (piVar9 != piVar3);
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar2);
  }
  return;
}

