/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bdb2a */

void FUN_1800bdb2a(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  lVar3 = *param_1;
  lVar1 = param_1[2];
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar4 = lVar3;
    if (lVar3 != lVar2) {
      do {
        FUN_1800bd84e(lVar4);
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != lVar2);
      lVar4 = *param_1;
    }
    (*DAT_180417870)(lVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar6 = lVar1 - lVar3 >> 5;
  uVar5 = (uVar6 >> 1) + uVar6;
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (0x7ffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar5 = 0x7ffffffffffffff;
  }
  lVar3 = (*DAT_180417868)(uVar5 * 0x20,1);
  *param_1 = lVar3;
  param_1[1] = lVar3;
  param_1[2] = uVar5 * 0x20 + lVar3;
  return;
}

