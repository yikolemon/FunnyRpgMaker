/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400964a8 */

undefined8 * FUN_1400964a8(short *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  short *psVar4;
  undefined8 uVar5;
  short sVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  sVar6 = *param_1;
  lVar7 = 0;
  psVar4 = param_1;
  while (sVar6 != 0) {
    lVar1 = lVar7 + 1;
    if (sVar6 == 0x3d) {
      lVar1 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar2 = lVar7;
      lVar7 = lVar2 + 1;
    } while (psVar4[lVar7] != 0);
    psVar4 = psVar4 + lVar2 + 2;
    lVar7 = lVar1;
    sVar6 = *psVar4;
  }
  puVar3 = _calloc_base(lVar7 + 1,8);
  puVar9 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
LAB_140096513:
    FUN_1400a1290((LPVOID)0x0);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    for (; *param_1 != 0; param_1 = param_1 + uVar8) {
      lVar7 = -1;
      do {
        lVar1 = lVar7;
        lVar7 = lVar1 + 1;
      } while (param_1[lVar7] != 0);
      uVar8 = lVar1 + 2;
      if (*param_1 != 0x3d) {
        psVar4 = _calloc_base(uVar8,2);
        if (psVar4 == (short *)0x0) {
          free_environment<>(puVar3);
          FUN_1400a1290((LPVOID)0x0);
          goto LAB_140096513;
        }
        uVar5 = FUN_1400a1b80(psVar4,uVar8,(longlong)param_1);
        if ((int)uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *puVar9 = psVar4;
        puVar9 = puVar9 + 1;
        FUN_1400a1290((LPVOID)0x0);
      }
    }
    FUN_1400a1290((LPVOID)0x0);
  }
  return puVar3;
}

