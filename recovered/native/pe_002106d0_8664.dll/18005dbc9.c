/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005dbc9 */

void Unwind_18005dbc9(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x408);
  *(undefined1 *)(param_2 + 0x4df) = 1;
  if (param_2 + 0xc0 != lVar1 && (*(byte *)(param_2 + 0x4dc) & 1) == 0) {
    do {
      lVar1 = lVar1 + -0x20;
      FUN_1800010ec(lVar1);
    } while (lVar1 != param_2 + 0xc0);
  }
  *(undefined1 *)(param_2 + 0x4df) = 1;
  return;
}

