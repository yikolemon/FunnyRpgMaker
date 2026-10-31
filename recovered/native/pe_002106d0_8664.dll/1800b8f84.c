/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b8f84 */

void FUN_1800b8f84(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  if (lVar2 != lVar1) {
    do {
      FUN_1800616f0(lVar2);
      lVar2 = lVar2 + 0x60;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  lVar2 = param_1[3];
  lVar1 = param_1[4];
  if (lVar2 != lVar1) {
    do {
      FUN_180061a6b(lVar2);
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != lVar1);
    param_1[4] = param_1[3];
  }
  FUN_1800605b0(param_1);
  return;
}

