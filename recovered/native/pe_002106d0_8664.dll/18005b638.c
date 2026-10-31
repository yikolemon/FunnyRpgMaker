/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b638 */

void FUN_18005b638(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (0x30256 < DAT_180417a10) {
    uVar1 = FUN_180061eb4(*(undefined4 *)*param_1);
    FUN_18006a12d(uVar1);
    return;
  }
  if (0x2ffff < DAT_180417a10) {
    uVar1 = FUN_180061eb4(*(undefined4 *)*param_1);
    FUN_18006a173(uVar1);
    return;
  }
  uVar1 = FUN_180061eb4(*(undefined4 *)*param_1);
  FUN_18006a1b9(uVar1);
  return;
}

