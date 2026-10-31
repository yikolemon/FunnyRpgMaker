/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a8e54 */

undefined8 FUN_1400a8e54(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  short *psVar2;
  LPVOID pvVar3;
  longlong lVar4;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar5;
  
  uVar7 = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(short *)(param_1 + lVar4 * 2) != 0);
  uVar6 = lVar5 + 2;
  if (~param_3 < uVar6) {
    return 0xc;
  }
  uVar8 = param_3 + 1 + uVar6;
  psVar2 = _calloc_base(uVar8,2);
  if (((param_3 != 0) && (iVar1 = FUN_1400a6f60(psVar2,uVar8,param_2,param_3), iVar1 != 0)) ||
     (iVar1 = FUN_1400a6f60(psVar2 + param_3,uVar8 - param_3,param_1,uVar6), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_1400a1290((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_1400a8fac;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_1400a1290((LPVOID)0x0);
          goto LAB_1400a8fac;
        }
        FUN_1400a1290((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_1400a1290(psVar2);
  }
  else {
LAB_1400a8fac:
    *(short **)param_4[1] = psVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_1400a1290((LPVOID)0x0);
  return uVar7;
}

