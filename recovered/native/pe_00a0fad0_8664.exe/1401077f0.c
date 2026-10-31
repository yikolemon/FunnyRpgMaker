/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401077f0 */

int * FUN_1401077f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong param_5,longlong param_6)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  
  piVar7 = (int *)0x0;
  piVar10 = (int *)0x0;
  uVar8 = 0;
  uVar14 = 0;
  iVar9 = -1;
  uVar4 = *(uint *)((longlong)*(int *)(param_2 + 0x10) + 8 + param_6);
  if (uVar4 != 0) {
    do {
      iVar13 = (int)uVar14;
      piVar11 = (int *)(*(int *)(*(int *)((longlong)*(int *)(param_2 + 0x10) + 0xc + param_6) +
                                 param_6 + uVar14 * 4) + param_6);
      if (uVar8 < (uint)(iVar13 - iVar9)) {
        if (*piVar11 + param_6 != param_5) {
          pcVar6 = (char *)(*piVar11 + param_6 + 0x10);
          lVar12 = (param_5 + 0x10) - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar12];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) goto LAB_1401078aa;
        }
        piVar7 = piVar11;
        if (piVar10 != (int *)0x0) {
          if ((*(byte *)(piVar11 + 5) & 3) != 0) {
            return (int *)0x0;
          }
          bVar3 = *(byte *)(piVar10 + 5);
          goto joined_r0x00014010793c;
        }
        uVar8 = piVar11[1];
        iVar9 = iVar13;
      }
LAB_1401078aa:
      if (*piVar11 + param_6 == param_3) {
LAB_1401078d7:
        iVar5 = piVar11[3];
        lVar12 = 0;
        if (-1 < iVar5) {
          lVar12 = (longlong)*(int *)(*(longlong *)(iVar5 + param_1) + (longlong)piVar11[4]) +
                   (longlong)iVar5;
        }
        if ((piVar11[2] + lVar12 == param_4) && (piVar10 = piVar11, piVar7 != (int *)0x0)) {
          if (uVar8 < (uint)(iVar13 - iVar9)) {
            if ((piVar7[5] & 3U) != 0) {
              return (int *)0x0;
            }
          }
          else {
            if ((piVar7[5] & 0x40U) != 0) {
              bVar3 = *(byte *)((longlong)
                                *(int *)(*(int *)((longlong)piVar7[6] + 0xc + param_6) + param_6 +
                                        (ulonglong)(uint)(iVar13 - iVar9) * 4) + 0x14 + param_6);
              goto joined_r0x00014010793c;
            }
            if (iVar9 != 0) {
              return piVar7;
            }
          }
          bVar3 = *(byte *)(piVar11 + 5);
joined_r0x00014010793c:
          if ((bVar3 & 1) != 0) {
            return (int *)0x0;
          }
          return piVar7;
        }
      }
      else {
        pcVar6 = (char *)(*piVar11 + param_6 + 0x10);
        lVar12 = (param_3 + 0x10) - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar12];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) goto LAB_1401078d7;
      }
      uVar14 = (ulonglong)(iVar13 + 1U);
    } while (iVar13 + 1U < uVar4);
  }
  return (int *)0x0;
}

