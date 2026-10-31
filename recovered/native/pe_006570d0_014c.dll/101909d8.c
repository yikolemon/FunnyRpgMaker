/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101909d8 */

void __fastcall FUN_101909d8(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    FUN_1018f4da(param_1[1],param_1,0);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = 0;
  return;
}

