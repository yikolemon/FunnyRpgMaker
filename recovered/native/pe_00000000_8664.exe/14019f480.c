/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019f480 */

longlong * FUN_14019f480(char *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  
  cVar4 = *param_1;
  lVar5 = 0;
  pcVar7 = param_1;
  while (cVar4 != '\0') {
    lVar6 = lVar5 + 1;
    if (cVar4 == '=') {
      lVar6 = lVar5;
    }
    lVar5 = -1;
    do {
      lVar2 = lVar5;
      lVar5 = lVar2 + 1;
    } while (pcVar7[lVar5] != '\0');
    pcVar7 = pcVar7 + lVar2 + 2;
    lVar5 = lVar6;
    cVar4 = *pcVar7;
  }
  plVar3 = (longlong *)_calloc_base(lVar5 + 1,8);
  plVar8 = plVar3;
  if (plVar3 == (longlong *)0x0) {
LAB_14019f4e3:
    FUN_1401aea30(0);
    plVar3 = (longlong *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + lVar6) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (param_1[lVar5] != '\0');
      lVar6 = lVar6 + 2;
      if (*param_1 != '=') {
        lVar5 = _calloc_base(lVar6,1);
        if (lVar5 == 0) {
          free_environment<>(plVar3);
          FUN_1401aea30(0);
          goto LAB_14019f4e3;
        }
        iVar1 = FUN_1401ae4e0();
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *plVar8 = lVar5;
        plVar8 = plVar8 + 1;
        FUN_1401aea30();
      }
    }
    FUN_1401aea30(0);
  }
  return plVar3;
}

