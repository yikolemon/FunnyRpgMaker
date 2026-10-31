/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006b5d8 */

void FUN_18006b5d8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_18006b658(param_1 + 3);
  lVar2 = *param_1;
  lVar1 = param_1[1];
  if (lVar2 != lVar1) {
    do {
      FUN_18006b8ac(lVar2);
      lVar2 = lVar2 + 0x78;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  return;
}

