/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180204fb5 */

void FUN_180204fb5(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    if (param_1[5] != 0) {
      FUN_1801ced57(lVar1,param_1 + 5);
    }
    FUN_1801c9b65(uVar2,param_1[4]);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

