/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107980 */

int * FUN_140107980(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong param_5,longlong param_6)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int *piVar15;
  uint uVar16;
  longlong lVar17;
  int *piVar18;
  int *piVar19;
  bool bVar20;
  bool bVar21;
  
  piVar19 = (int *)0x0;
  piVar8 = (int *)0x0;
  piVar18 = (int *)0x0;
  piVar15 = (int *)0x0;
  uVar16 = 0;
  uVar14 = 0;
  iVar9 = -1;
  bVar20 = true;
  uVar3 = *(uint *)((longlong)*(int *)(param_2 + 0x10) + 8 + param_6);
  lVar17 = -1;
  if (uVar3 != 0) {
    do {
      iVar13 = (int)uVar14;
      piVar10 = (int *)(*(int *)(*(int *)((longlong)*(int *)(param_2 + 0x10) + 0xc + param_6) +
                                 param_6 + uVar14 * 4) + param_6);
      if (uVar16 < (uint)(iVar13 - iVar9)) {
        if (*piVar10 + param_6 != param_5) {
          pcVar6 = (char *)(*piVar10 + param_6 + 0x10);
          lVar11 = (param_5 + 0x10) - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar11];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) goto LAB_140107a3a;
        }
        uVar16 = piVar10[1];
        piVar15 = piVar10;
        iVar9 = iVar13;
        if ((*(byte *)(piVar10 + 5) & 3) == 0) {
          piVar18 = piVar10;
        }
      }
LAB_140107a3a:
      lVar11 = lVar17;
      if (*piVar10 + param_6 == param_3) {
LAB_140107a7b:
        iVar4 = piVar10[3];
        lVar12 = 0;
        if (-1 < iVar4) {
          lVar12 = (longlong)*(int *)(*(longlong *)(iVar4 + param_1) + (longlong)piVar10[4]) +
                   (longlong)iVar4;
        }
        if (piVar10[2] + lVar12 == param_4) {
          if (uVar16 < (uint)(iVar13 - iVar9)) {
            if ((*(byte *)(piVar10 + 5) & 5) == 0) {
              piVar8 = piVar10;
            }
          }
          else if (bVar20) {
            if ((*(byte *)(piVar15 + 5) & 0x40) == 0) {
              if ((iVar9 == 0) && (bVar20 = true, (*(byte *)(piVar10 + 5) & 1) != 0)) {
                bVar20 = false;
              }
              bVar7 = 1;
            }
            else {
              uVar5 = *(uint *)((longlong)
                                *(int *)(*(int *)((longlong)piVar15[6] + 0xc + param_6) + param_6 +
                                        (ulonglong)(uint)(iVar13 - iVar9) * 4) + 0x14 + param_6);
              bVar20 = (uVar5 & 1) == 0;
              bVar7 = ~(byte)(uVar5 >> 2) & 1;
            }
            if ((bVar20) && (bVar7 != 0)) {
              iVar4 = piVar15[3];
              lVar11 = 0;
              if (-1 < iVar4) {
                lVar11 = (longlong)*(int *)(*(longlong *)(iVar4 + param_1) + (longlong)piVar15[4]) +
                         (longlong)iVar4;
              }
              lVar11 = piVar15[2] + lVar11;
              bVar21 = piVar19 != (int *)0x0;
              piVar19 = piVar15;
              if ((bVar21) && (lVar17 != lVar11)) {
                return (int *)0x0;
              }
            }
          }
        }
      }
      else {
        pcVar6 = (char *)(*piVar10 + param_6 + 0x10);
        lVar12 = (param_3 + 0x10) - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar12];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) goto LAB_140107a7b;
      }
      uVar14 = (ulonglong)(iVar13 + 1U);
      lVar17 = lVar11;
    } while (iVar13 + 1U < uVar3);
    if ((bVar20) && (piVar19 != (int *)0x0)) {
      return piVar19;
    }
    if (piVar8 != (int *)0x0) {
      return piVar18;
    }
  }
  return (int *)0x0;
}

