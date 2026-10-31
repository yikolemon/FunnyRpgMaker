/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013490d */

void FUN_14013490d(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  short *psVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  param_1 = (ulonglong)param_3 * 0x898 + param_1;
  psVar2 = *(short **)(param_1 + 0x60);
  if (psVar2 == (short *)0x0) {
    psVar9 = (short *)0x0;
  }
  else {
    psVar9 = psVar2 + (ulonglong)*(uint *)(param_1 + 0x58) * 0x24;
  }
  lVar12 = (ulonglong)param_3 * 0x1c4;
  lVar10 = (longlong)*(int *)(param_2 + 0x44 + lVar12);
  lVar5 = ((ulonglong)*(uint *)(param_2 + 0x40) / 0x28) * lVar10;
  iVar4 = (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
  iVar11 = 0x20;
  if (iVar4 < 0x20) {
    iVar11 = iVar4;
  }
  if (psVar2 < psVar9) {
    param_2 = param_2 + lVar12;
    do {
      uVar6 = (ulonglong)*(uint *)(param_2 + 0x11c);
      if (uVar6 != 0) {
        piVar7 = (int *)0x0;
        piVar3 = (int *)(param_2 + 0x120);
        iVar4 = iVar11;
        do {
          iVar8 = iVar4;
          if (((piVar3[6] & 1U) != 0) &&
             (((piVar3[6] & 2U) == 0) ==
              (*(int *)(param_1 + 0x68) == (int)*(char *)((longlong)psVar2 + 0xd)))) {
            iVar16 = (int)*psVar2;
            iVar8 = *piVar3;
            uVar15 = iVar8 - iVar16;
            if (iVar8 < iVar16) {
              uVar15 = iVar16 - iVar8;
            }
            iVar1 = piVar3[3];
            piVar13 = piVar3 + 3;
            uVar14 = iVar1 - iVar16;
            if (iVar1 < iVar16) {
              uVar14 = iVar16 - iVar1;
            }
            if (uVar15 <= uVar14) {
              piVar13 = piVar3;
              iVar1 = iVar8;
            }
            uVar15 = iVar1 - iVar16;
            if (iVar1 < iVar16) {
              uVar15 = iVar16 - iVar1;
            }
            lVar5 = (ulonglong)uVar15 * lVar10;
            iVar8 = (int)((ulonglong)((lVar5 >> 0x3f) + lVar5 + 0x8000) >> 0x10);
            if (iVar8 < iVar4) {
              piVar7 = piVar13;
            }
            if (iVar4 < iVar8) {
              iVar8 = iVar4;
            }
          }
          iVar4 = iVar8;
          piVar3 = piVar3 + 7;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (piVar7 != (int *)0x0) {
          *(int **)(psVar2 + 0xc) = piVar7;
        }
      }
      psVar2 = psVar2 + 0x24;
    } while (psVar2 < psVar9);
  }
  return;
}

