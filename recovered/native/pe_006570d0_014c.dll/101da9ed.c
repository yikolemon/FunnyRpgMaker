/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101da9ed */

void __fastcall FUN_101da9ed(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  short *psVar13;
  int *piVar14;
  int iVar15;
  uint local_34;
  
  param_1 = param_1 + param_3 * 0x544;
  psVar13 = *(short **)(param_1 + 0x48);
  if (psVar13 == (short *)0x0) {
    psVar9 = (short *)0x0;
  }
  else {
    psVar9 = psVar13 + *(int *)(param_1 + 0x40) * 0x16;
  }
  uVar1 = *(uint *)(param_2 + 0x30 + param_3 * 0x1c4);
  lVar3 = (longlong)(int)(*(uint *)(param_2 + 0x2c) / 0x28) * (longlong)(int)uVar1;
  iVar11 = (int)(lVar3 >> 0x3f);
  lVar3 = lVar3 + CONCAT44(iVar11,iVar11) + 0x8000;
  uVar12 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
  uVar4 = 0x20;
  if ((int)uVar12 < 0x20) {
    uVar4 = uVar12;
  }
  if (psVar13 < psVar9) {
    param_2 = param_3 * 0x1c4 + param_2;
    do {
      iVar11 = *(int *)(param_2 + 0x108);
      if (iVar11 != 0) {
        piVar6 = (int *)0x0;
        piVar10 = (int *)(param_2 + 0x10c);
        local_34 = uVar4;
        do {
          if (((piVar10[6] & 1U) != 0) &&
             (((piVar10[6] & 2U) == 0) ==
              (*(int *)(param_1 + 0x4c) == (int)*(char *)((int)psVar13 + 0xd)))) {
            iVar7 = (int)*psVar13;
            iVar15 = *piVar10;
            iVar2 = piVar10[3];
            uVar12 = iVar15 - iVar7;
            if (iVar15 < iVar7) {
              uVar12 = iVar7 - iVar15;
            }
            uVar5 = iVar2 - iVar7;
            if (iVar2 < iVar7) {
              uVar5 = iVar7 - iVar2;
            }
            piVar14 = piVar10 + 3;
            if (uVar12 <= uVar5) {
              piVar14 = piVar10;
              iVar2 = iVar15;
            }
            uVar12 = iVar2 - iVar7;
            if (iVar2 < iVar7) {
              uVar12 = iVar7 - iVar2;
            }
            uVar5 = (uint)((ulonglong)uVar12 * (ulonglong)uVar1);
            iVar15 = (int)((ulonglong)uVar12 * (ulonglong)uVar1 >> 0x20) +
                     uVar12 * ((int)uVar1 >> 0x1f);
            uVar8 = iVar15 >> 0x1f;
            uVar12 = uVar5 + uVar8;
            uVar12 = (uVar8 + iVar15 + (uint)CARRY4(uVar5,uVar8) + (uint)(0xffff7fff < uVar12)) *
                     0x10000 | uVar12 + 0x8000 >> 0x10;
            if ((int)uVar12 < (int)local_34) {
              piVar6 = piVar14;
            }
            if ((int)uVar12 <= (int)local_34) {
              local_34 = uVar12;
            }
          }
          piVar10 = piVar10 + 7;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        if (piVar6 != (int *)0x0) {
          *(int **)(psVar13 + 10) = piVar6;
        }
      }
      psVar13 = psVar13 + 0x16;
    } while (psVar13 < psVar9);
  }
  return;
}

