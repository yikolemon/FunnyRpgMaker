/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e8d7f */

void FUN_1801e8d7f(longlong param_1,longlong param_2)

{
  short *psVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte bVar13;
  byte bVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  
  psVar6 = *(short **)(param_1 + 0x8f8);
  if ((psVar6 != (short *)0x0) && ((ulonglong)*(uint *)(param_1 + 0x8f0) != 0)) {
    psVar1 = psVar6 + (ulonglong)*(uint *)(param_1 + 0x8f0) * 0x24;
    lVar12 = (longlong)*(int *)(param_2 + 0x248);
    do {
      bVar2 = *(byte *)(psVar6 + 6);
      if (((bVar2 & 0x10) == 0) && (uVar11 = (ulonglong)*(uint *)(param_2 + 800), uVar11 != 0)) {
        lVar9 = ((ulonglong)*(uint *)(param_2 + 0x40) / 0x28) * lVar12;
        iVar17 = (int)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10);
        if (0x1f < iVar17) {
          iVar17 = 0x20;
        }
        piVar16 = (int *)0x0;
        bVar14 = 0;
        piVar15 = (int *)(param_2 + 0x324);
        do {
          uVar3 = piVar15[8];
          if ((uVar3 & 1) != 0) {
            bVar13 = (byte)uVar3 >> 3 & 1;
            if ((bVar13 != 0) ||
               (((uVar3 & 6) != 0) !=
                (*(int *)(param_1 + 0x900) == (int)*(char *)((longlong)psVar6 + 0xd)))) {
              iVar10 = (int)*psVar6;
              iVar8 = *piVar15;
              uVar4 = iVar8 - iVar10;
              if (iVar8 < iVar10) {
                uVar4 = iVar10 - iVar8;
              }
              iVar7 = (int)((ulonglong)uVar4 * lVar12 +
                            ((longlong)((ulonglong)uVar4 * lVar12) >> 0x3f) + 0x8000 >> 0x10);
              iVar5 = iVar17;
              if (iVar7 <= iVar17) {
                iVar5 = iVar7;
              }
              if (iVar7 < iVar17) {
                piVar16 = piVar15;
                bVar14 = bVar13;
              }
              iVar17 = iVar5;
              if ((((bVar13 == 0) && (((uVar3 & 6) != 0) == iVar8 <= iVar10)) && ((bVar2 & 1) != 0))
                 && (iVar7 != 0)) {
                iVar8 = piVar15[3];
                uVar3 = iVar8 - iVar10;
                if (iVar8 < iVar10) {
                  uVar3 = iVar10 - iVar8;
                }
                iVar8 = (int)((ulonglong)uVar3 * lVar12 +
                              ((longlong)((ulonglong)uVar3 * lVar12) >> 0x3f) + 0x8000 >> 0x10);
                if (iVar8 < iVar5) {
                  piVar16 = piVar15 + 3;
                  bVar14 = 0;
                  iVar17 = iVar8;
                }
              }
            }
          }
          piVar15 = piVar15 + 9;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        if ((piVar16 != (int *)0x0) && (*(int **)(psVar6 + 0xc) = piVar16, bVar14 != 0)) {
          *(byte *)(psVar6 + 6) = bVar2 | 8;
        }
      }
      psVar6 = psVar6 + 0x24;
    } while (psVar6 < psVar1);
  }
  return;
}

