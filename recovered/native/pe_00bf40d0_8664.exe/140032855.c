/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140032855 */

void FUN_140032855(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  
  lVar2 = (ulonglong)param_3 * 0x898 + param_1;
  psVar3 = *(short **)(lVar2 + 0x60);
  if (psVar3 == (short *)0x0) {
    psVar10 = (short *)0x0;
  }
  else {
    psVar10 = psVar3 + (ulonglong)*(uint *)(lVar2 + 0x58) * 0x24;
  }
  lVar13 = (ulonglong)param_3 * 0x1c4;
  lVar11 = (longlong)*(int *)(param_2 + 0x44 + lVar13);
  lVar6 = ((ulonglong)*(uint *)(param_2 + 0x40) / 0x28) * lVar11;
  iVar5 = (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
  iVar12 = 0x20;
  if (iVar5 < 0x20) {
    iVar12 = iVar5;
  }
  if (psVar3 < psVar10) {
    lVar13 = param_2 + lVar13;
    do {
      uVar7 = (ulonglong)*(uint *)(lVar13 + 0x11c);
      if (uVar7 != 0) {
        piVar8 = (int *)0x0;
        piVar4 = (int *)(lVar13 + 0x120);
        iVar5 = iVar12;
        do {
          iVar9 = iVar5;
          if (((piVar4[6] & 1U) != 0) &&
             (((piVar4[6] & 2U) == 0) ==
              (*(int *)(lVar2 + 0x68) == (int)*(char *)((longlong)psVar3 + 0xd)))) {
            iVar17 = (int)*psVar3;
            iVar9 = *piVar4;
            uVar16 = iVar9 - iVar17;
            if (iVar9 < iVar17) {
              uVar16 = iVar17 - iVar9;
            }
            iVar1 = piVar4[3];
            piVar14 = piVar4 + 3;
            uVar15 = iVar1 - iVar17;
            if (iVar1 < iVar17) {
              uVar15 = iVar17 - iVar1;
            }
            if (uVar16 <= uVar15) {
              piVar14 = piVar4;
              iVar1 = iVar9;
            }
            uVar16 = iVar1 - iVar17;
            if (iVar1 < iVar17) {
              uVar16 = iVar17 - iVar1;
            }
            lVar6 = (ulonglong)uVar16 * lVar11;
            iVar9 = (int)((ulonglong)((lVar6 >> 0x3f) + lVar6 + 0x8000) >> 0x10);
            if (iVar9 < iVar5) {
              piVar8 = piVar14;
            }
            if (iVar5 < iVar9) {
              iVar9 = iVar5;
            }
          }
          iVar5 = iVar9;
          piVar4 = piVar4 + 7;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        if (piVar8 != (int *)0x0) {
          *(int **)(psVar3 + 0xc) = piVar8;
        }
      }
      psVar3 = psVar3 + 0x24;
    } while (psVar3 < psVar10);
  }
  return;
}

