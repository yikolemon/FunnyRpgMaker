/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b6af5 */

undefined4 __fastcall FUN_100b6af5(undefined4 param_1,int param_2)

{
  if (DAT_1039ca4c < 0x30257) {
    if (DAT_1039ca4c < 0x30000) {
      FUN_100b74fa(**(undefined4 **)(param_2 + 4));
    }
    else {
      FUN_100b734c(**(undefined4 **)(param_2 + 4));
    }
  }
  else {
    FUN_100b6b44(**(undefined4 **)(param_2 + 4));
  }
  return param_1;
}

