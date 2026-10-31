/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a97b8 */

LPVOID FUN_1400a97b8(longlong *param_1)

{
  short *psVar1;
  longlong *plVar2;
  longlong lVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar7 = 0;
  if (param_1 == (longlong *)0x0) {
    pvVar4 = (LPVOID)0x0;
  }
  else {
    lVar9 = *param_1;
    plVar2 = param_1;
    while (lVar9 != 0) {
      lVar7 = lVar7 + 1;
      plVar2 = plVar2 + 1;
      lVar9 = *plVar2;
    }
    pvVar4 = _calloc_base(lVar7 + 1,8);
    if (pvVar4 == (LPVOID)0x0) {
LAB_1400a98a1:
                    /* WARNING: Subroutine does not return */
      FUN_140096cf8();
    }
    lVar7 = *param_1;
    if (lVar7 != 0) {
      lVar9 = (longlong)pvVar4 - (longlong)param_1;
      do {
        lVar3 = -1;
        do {
          lVar8 = lVar3;
          lVar3 = lVar8 + 1;
        } while (*(short *)(lVar7 + (lVar8 + 1) * 2) != 0);
        pvVar5 = _calloc_base(lVar8 + 2,2);
        *(LPVOID *)(lVar9 + (longlong)param_1) = pvVar5;
        FUN_1400a1290((LPVOID)0x0);
        psVar1 = *(short **)(lVar9 + (longlong)param_1);
        if (psVar1 == (short *)0x0) goto LAB_1400a98a1;
        uVar6 = FUN_1400a1b80(psVar1,lVar8 + 2,*param_1);
        if ((int)uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        lVar7 = *param_1;
      } while (lVar7 != 0);
    }
    FUN_1400a1290((LPVOID)0x0);
  }
  return pvVar4;
}

