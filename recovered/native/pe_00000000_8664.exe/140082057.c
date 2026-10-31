/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140082057 */

void FUN_140082057(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  lVar3 = DAT_140f2a910;
  uVar1 = *(uint *)(DAT_140f2a910 + 0x2148);
  uVar6 = (ulonglong)uVar1;
  if (uVar6 != 0) {
    uVar8 = 0;
    if ((param_1 == 0) || ((int)uVar1 < 1)) {
LAB_1400820ed:
      if ((int)uVar8 < (int)uVar1) {
        if ((*(byte *)(lVar3 + 0x2acc) & 8) != 0) {
          if (param_1 == 0) {
            pcVar5 = "<NULL>";
          }
          else {
            pcVar5 = *(char **)(param_1 + 8);
          }
          FUN_1400772a6("[popup] ClosePopupsOverWindow(\"%s\")\n",pcVar5);
        }
        FUN_140094394(uVar8 & 0xffffffff,param_2);
        return;
      }
    }
    else {
      lVar2 = *(longlong *)(DAT_140f2a910 + 0x2150);
      plVar9 = (longlong *)(lVar2 + 8);
      uVar8 = 0;
      uVar11 = uVar6;
      do {
        uVar7 = uVar11;
        plVar10 = plVar9;
        if (*(longlong *)(lVar2 + 8 + uVar8 * 0x38) != 0) {
          while ((*plVar10 == 0 || (cVar4 = FUN_140080895(param_1), cVar4 == '\0'))) {
            uVar7 = uVar7 - 1;
            plVar10 = plVar10 + 7;
            if (uVar7 == 0) goto LAB_1400820ed;
          }
        }
        uVar8 = uVar8 + 1;
        plVar9 = plVar9 + 7;
        uVar11 = uVar11 - 1;
      } while (uVar8 != uVar6);
    }
  }
  return;
}

