/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043215d */

void __fastcall FUN_0043215d(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  int *piVar16;
  int iVar17;
  uint local_34;
  
  iVar1 = param_1 + param_3 * 0x544;
  psVar15 = *(short **)(iVar1 + 0x48);
  if (psVar15 == (short *)0x0) {
    psVar11 = (short *)0x0;
  }
  else {
    psVar11 = psVar15 + *(int *)(iVar1 + 0x40) * 0x16;
  }
  uVar2 = *(uint *)(param_2 + 0x30 + param_3 * 0x1c4);
  lVar4 = (longlong)(int)(*(uint *)(param_2 + 0x2c) / 0x28) * (longlong)(int)uVar2;
  iVar13 = (int)(lVar4 >> 0x3f);
  lVar4 = lVar4 + CONCAT44(iVar13,iVar13) + 0x8000;
  uVar14 = (int)((ulonglong)lVar4 >> 0x20) << 0x10 | (uint)lVar4 >> 0x10;
  uVar5 = 0x20;
  if ((int)uVar14 < 0x20) {
    uVar5 = uVar14;
  }
  if (psVar15 < psVar11) {
    iVar13 = param_3 * 0x1c4 + param_2;
    do {
      iVar10 = *(int *)(iVar13 + 0x108);
      if (iVar10 != 0) {
        piVar7 = (int *)0x0;
        piVar12 = (int *)(iVar13 + 0x10c);
        local_34 = uVar5;
        do {
          if (((piVar12[6] & 1U) != 0) &&
             (((piVar12[6] & 2U) == 0) ==
              (*(int *)(iVar1 + 0x4c) == (int)*(char *)((int)psVar15 + 0xd)))) {
            iVar8 = (int)*psVar15;
            iVar17 = *piVar12;
            iVar3 = piVar12[3];
            uVar14 = iVar17 - iVar8;
            if (iVar17 < iVar8) {
              uVar14 = iVar8 - iVar17;
            }
            uVar6 = iVar3 - iVar8;
            if (iVar3 < iVar8) {
              uVar6 = iVar8 - iVar3;
            }
            piVar16 = piVar12 + 3;
            if (uVar14 <= uVar6) {
              piVar16 = piVar12;
              iVar3 = iVar17;
            }
            uVar14 = iVar3 - iVar8;
            if (iVar3 < iVar8) {
              uVar14 = iVar8 - iVar3;
            }
            uVar6 = (uint)((ulonglong)uVar14 * (ulonglong)uVar2);
            iVar17 = (int)((ulonglong)uVar14 * (ulonglong)uVar2 >> 0x20) +
                     uVar14 * ((int)uVar2 >> 0x1f);
            uVar9 = iVar17 >> 0x1f;
            uVar14 = uVar6 + uVar9;
            uVar14 = (uVar9 + iVar17 + (uint)CARRY4(uVar6,uVar9) + (uint)(0xffff7fff < uVar14)) *
                     0x10000 | uVar14 + 0x8000 >> 0x10;
            if ((int)uVar14 < (int)local_34) {
              piVar7 = piVar16;
            }
            if ((int)uVar14 <= (int)local_34) {
              local_34 = uVar14;
            }
          }
          piVar12 = piVar12 + 7;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        if (piVar7 != (int *)0x0) {
          *(int **)(psVar15 + 10) = piVar7;
        }
      }
      psVar15 = psVar15 + 0x16;
    } while (psVar15 < psVar11);
  }
  return;
}

