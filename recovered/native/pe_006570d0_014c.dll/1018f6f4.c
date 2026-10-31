/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f6f4 */

void __thiscall FUN_1018f6f4(int param_1,undefined4 param_2)

{
  float in_XMM0_Da;
  
  if (*(int *)(param_1 + 0x2a8) != 0) {
    FUN_1018f72a();
    if (in_XMM0_Da < DAT_103013d0) {
      FUN_1018f85a();
      return;
    }
  }
  FUN_1018f75c(param_2);
  return;
}

