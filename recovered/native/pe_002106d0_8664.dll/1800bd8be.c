/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bd8be */

void FUN_1800bd8be(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    if (lVar2 != lVar1) {
      do {
        FUN_1800bd84e(lVar2);
        lVar2 = lVar2 + 0x20;
      } while (lVar2 != lVar1);
      lVar2 = *param_1;
    }
    (*DAT_180417870)(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

