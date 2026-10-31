/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012c198 */

longlong FUN_14012c198(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar8;
  longlong lVar7;
  
  lVar5 = 0;
  if (param_1 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar3 = *param_1;
    plVar1 = param_1;
    while (lVar3 != 0) {
      lVar5 = lVar5 + 1;
      plVar1 = plVar1 + 1;
      lVar3 = *plVar1;
    }
    lVar5 = _calloc_base(lVar5 + 1,8);
    if (lVar5 == 0) {
LAB_14012c281:
                    /* WARNING: Subroutine does not return */
      FUN_140115938();
    }
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar8 = lVar5 - (longlong)param_1;
      do {
        lVar6 = -1;
        do {
          lVar7 = lVar6;
          lVar6 = lVar7 + 1;
        } while (*(short *)(lVar3 + lVar6 * 2) != 0);
        uVar4 = _calloc_base(lVar7 + 2,2);
        *(undefined8 *)(lVar8 + (longlong)param_1) = uVar4;
        FUN_1401212e0(0);
        if (*(longlong *)(lVar8 + (longlong)param_1) == 0) goto LAB_14012c281;
        iVar2 = FUN_140121bd0();
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        lVar3 = *param_1;
      } while (lVar3 != 0);
    }
    FUN_1401212e0(0);
  }
  return lVar5;
}

