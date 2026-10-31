/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180108d3f */

void FUN_180108d3f(longlong param_1,undefined1 param_2)

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
  
  lVar3 = DAT_180419160;
  uVar1 = *(uint *)(DAT_180419160 + 0x2148);
  uVar6 = (ulonglong)uVar1;
  if (uVar6 != 0) {
    uVar8 = 0;
    if ((param_1 == 0) || ((int)uVar1 < 1)) {
LAB_180108dd5:
      if ((int)uVar8 < (int)uVar1) {
        if ((*(byte *)(lVar3 + 0x2acc) & 8) != 0) {
          if (param_1 == 0) {
            pcVar5 = "<NULL>";
          }
          else {
            pcVar5 = *(char **)(param_1 + 8);
          }
          FUN_1800fdfea("[popup] ClosePopupsOverWindow(\"%s\")\n",pcVar5);
        }
        FUN_18011b0d8(uVar8 & 0xffffffff,param_2);
        return;
      }
    }
    else {
      lVar2 = *(longlong *)(DAT_180419160 + 0x2150);
      plVar9 = (longlong *)(lVar2 + 8);
      uVar8 = 0;
      uVar11 = uVar6;
      do {
        uVar7 = uVar11;
        plVar10 = plVar9;
        if (*(longlong *)(lVar2 + 8 + uVar8 * 0x38) != 0) {
          while ((*plVar10 == 0 || (cVar4 = FUN_18010757d(param_1), cVar4 == '\0'))) {
            uVar7 = uVar7 - 1;
            plVar10 = plVar10 + 7;
            if (uVar7 == 0) goto LAB_180108dd5;
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

