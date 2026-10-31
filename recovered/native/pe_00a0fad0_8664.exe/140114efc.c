/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140114efc */

longlong * FUN_140114efc(short *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  longlong *plVar8;
  
  sVar4 = *param_1;
  lVar5 = 0;
  psVar7 = param_1;
  while (sVar4 != 0) {
    lVar6 = lVar5 + 1;
    if (sVar4 == 0x3d) {
      lVar6 = lVar5;
    }
    lVar5 = -1;
    do {
      lVar2 = lVar5;
      lVar5 = lVar2 + 1;
    } while (psVar7[lVar5] != 0);
    psVar7 = psVar7 + lVar2 + 2;
    lVar5 = lVar6;
    sVar4 = *psVar7;
  }
  plVar3 = (longlong *)_calloc_base(lVar5 + 1,8);
  plVar8 = plVar3;
  if (plVar3 == (longlong *)0x0) {
LAB_140114f67:
    FUN_1401212e0(0);
    plVar3 = (longlong *)0x0;
  }
  else {
    for (; *param_1 != 0; param_1 = param_1 + lVar6) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (param_1[lVar5] != 0);
      lVar6 = lVar6 + 2;
      if (*param_1 != 0x3d) {
        lVar5 = _calloc_base(lVar6,2);
        if (lVar5 == 0) {
          free_environment<>(plVar3);
          FUN_1401212e0(0);
          goto LAB_140114f67;
        }
        iVar1 = FUN_140121bd0();
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *plVar8 = lVar5;
        plVar8 = plVar8 + 1;
        FUN_1401212e0();
      }
    }
    FUN_1401212e0(0);
  }
  return plVar3;
}

