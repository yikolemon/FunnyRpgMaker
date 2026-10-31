/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401076b0 */

int * FUN_1401076b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar7 = 0;
  uVar3 = *(uint *)((longlong)*(int *)(param_1 + 0x10) + 8 + param_4);
  lVar6 = *(int *)((longlong)*(int *)(param_1 + 0x10) + 0xc + param_4) + param_4;
  if (uVar3 != 0) {
    do {
      piVar5 = (int *)(*(int *)(lVar6 + uVar7 * 4) + param_4);
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      if (*piVar5 + param_4 == param_3) {
        if (uVar3 <= uVar9) {
          return (int *)0x0;
        }
        while( true ) {
          lVar8 = (longlong)*(int *)(lVar6 + uVar7 * 4);
          if ((*(byte *)(lVar8 + 0x14 + param_4) & 4) != 0) {
            return (int *)0x0;
          }
          if (*(int *)(lVar8 + param_4) + param_4 == param_2) break;
          uVar9 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar9;
          if (uVar3 <= uVar9) {
            return (int *)0x0;
          }
        }
        return piVar5;
      }
    } while (uVar9 < uVar3);
    uVar7 = 0;
    do {
      piVar5 = (int *)(*(int *)(lVar6 + uVar7 * 4) + param_4);
      pcVar4 = (char *)((longlong)*piVar5 + param_4 + 0x10);
      lVar8 = (param_3 + 0x10) - (longlong)pcVar4;
      do {
        cVar1 = *pcVar4;
        cVar2 = pcVar4[lVar8];
        if (cVar1 != cVar2) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      if (cVar1 == cVar2) {
        if (uVar3 <= uVar9) {
          return (int *)0x0;
        }
        do {
          lVar8 = (longlong)*(int *)(lVar6 + uVar7 * 4);
          if ((*(byte *)(lVar8 + 0x14 + param_4) & 4) != 0) {
            return (int *)0x0;
          }
          pcVar4 = (char *)((longlong)*(int *)(lVar8 + param_4) + 0x10 + param_4);
          lVar8 = (param_2 + 0x10) - (longlong)pcVar4;
          do {
            cVar1 = *pcVar4;
            cVar2 = pcVar4[lVar8];
            if (cVar1 != cVar2) break;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            return piVar5;
          }
          uVar9 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar9;
          if (uVar3 <= uVar9) {
            return (int *)0x0;
          }
        } while( true );
      }
    } while (uVar9 < uVar3);
  }
  return (int *)0x0;
}

