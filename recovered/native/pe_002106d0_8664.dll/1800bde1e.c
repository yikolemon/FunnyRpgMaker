/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bde1e */

longlong * FUN_1800bde1e(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (-1 < (longlong)param_2) {
    uVar1 = param_1[3];
    uVar3 = (uVar1 >> 1) + uVar1;
    if (uVar3 < (param_2 | 0xf)) {
      uVar3 = param_2 | 0xf;
    }
    if ((uVar1 >> 1 ^ 0x7fffffffffffffff) < uVar1) {
      uVar3 = 0x7fffffffffffffff;
    }
    lVar2 = (*DAT_180417868)(uVar3 + 1,1);
    param_1[2] = param_2;
    param_1[3] = uVar3;
    FUN_1802a82f0(lVar2,param_4,param_2);
    *(undefined1 *)(lVar2 + param_2) = 0;
    if (0xf < uVar1) {
      (*DAT_180417870)(*param_1);
    }
    *param_1 = lVar2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800013a5();
}

