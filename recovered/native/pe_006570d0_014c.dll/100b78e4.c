/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b78e4 */

undefined4 __fastcall FUN_100b78e4(undefined4 param_1,int param_2)

{
  if (DAT_1039ca4c < 0x30257) {
    if (DAT_1039ca4c < 0x30000) {
      FUN_100b9222(**(undefined4 **)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    }
    else {
      FUN_100b8c52(**(undefined4 **)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    }
  }
  else {
    FUN_100b793d(**(undefined4 **)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  }
  return param_1;
}

