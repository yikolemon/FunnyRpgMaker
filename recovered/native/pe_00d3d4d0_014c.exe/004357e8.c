/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004357e8 */

void __fastcall FUN_004357e8(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  short *psVar17;
  uint local_38;
  
  psVar17 = *(short **)(param_1 + 0x58c);
  if ((psVar17 != (short *)0x0) && (*(int *)(param_1 + 0x584) != 0)) {
    psVar5 = psVar17 + *(int *)(param_1 + 0x584) * 0x16;
    uVar2 = *(uint *)(param_2 + 0x234);
    do {
      bVar1 = *(byte *)(psVar17 + 6);
      if (((bVar1 & 0x10) == 0) && (iVar12 = *(int *)(param_2 + 0x30c), iVar12 != 0)) {
        lVar3 = (longlong)(int)(*(uint *)(param_2 + 0x2c) / 0x28) * (longlong)(int)uVar2;
        iVar14 = (int)(lVar3 >> 0x3f);
        lVar3 = lVar3 + CONCAT44(iVar14,iVar14) + 0x8000;
        local_38 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
        if (0x1f < (int)local_38) {
          local_38 = 0x20;
        }
        bVar4 = 0;
        piVar13 = (int *)0x0;
        piVar15 = (int *)(param_2 + 0x310);
        do {
          uVar9 = piVar15[8];
          if ((uVar9 & 1) != 0) {
            uVar8 = uVar9 >> 3;
            if (((uVar8 & 1) != 0) ||
               (((uVar9 & 6) != 0) !=
                (*(int *)(param_1 + 0x590) == (int)*(char *)((int)psVar17 + 0xd)))) {
              iVar10 = (int)*psVar17;
              iVar14 = *piVar15;
              uVar7 = iVar14 - iVar10;
              if (iVar14 < iVar10) {
                uVar7 = iVar10 - iVar14;
              }
              uVar6 = (uint)((ulonglong)uVar7 * (ulonglong)uVar2);
              iVar16 = (int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20) +
                       uVar7 * ((int)uVar2 >> 0x1f);
              uVar11 = iVar16 >> 0x1f;
              uVar7 = uVar6 + uVar11;
              uVar7 = (uVar11 + iVar16 + (uint)CARRY4(uVar6,uVar11) + (uint)(0xffff7fff < uVar7)) *
                      0x10000 | uVar7 + 0x8000 >> 0x10;
              if ((int)uVar7 < (int)local_38) {
                bVar4 = (byte)uVar8 & 1;
              }
              uVar6 = local_38;
              if ((int)uVar7 <= (int)local_38) {
                uVar6 = uVar7;
              }
              if ((int)uVar7 < (int)local_38) {
                piVar13 = piVar15;
              }
              local_38 = uVar6;
              if (((((uVar8 & 1) == 0) && (((uVar9 & 6) != 0) == iVar14 <= iVar10)) &&
                  ((bVar1 & 1) != 0)) && (uVar7 != 0)) {
                iVar14 = piVar15[3];
                uVar9 = iVar14 - iVar10;
                if (iVar14 < iVar10) {
                  uVar9 = iVar10 - iVar14;
                }
                uVar8 = (uint)((ulonglong)uVar9 * (ulonglong)uVar2);
                iVar14 = (int)((ulonglong)uVar9 * (ulonglong)uVar2 >> 0x20) +
                         uVar9 * ((int)uVar2 >> 0x1f);
                uVar7 = iVar14 >> 0x1f;
                uVar9 = uVar8 + uVar7;
                uVar9 = (uVar7 + iVar14 + (uint)CARRY4(uVar8,uVar7) + (uint)(0xffff7fff < uVar9)) *
                        0x10000 | uVar9 + 0x8000 >> 0x10;
                if ((int)uVar9 < (int)uVar6) {
                  piVar13 = piVar15 + 3;
                  bVar4 = 0;
                  local_38 = uVar9;
                }
              }
            }
          }
          piVar15 = piVar15 + 9;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        if ((piVar13 != (int *)0x0) && (*(int **)(psVar17 + 10) = piVar13, bVar4 != 0)) {
          *(byte *)(psVar17 + 6) = bVar1 | 8;
        }
      }
      psVar17 = psVar17 + 0x16;
    } while (psVar17 < psVar5);
  }
  return;
}

