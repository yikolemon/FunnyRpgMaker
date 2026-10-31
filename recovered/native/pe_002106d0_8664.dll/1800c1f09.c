/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c1f09 */

void Unwind_1800c1f09(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 0x13f) = 1;
  *(longlong *)(param_2 + 0x108) = param_2 + 0x80;
  lVar1 = *(longlong *)(param_2 + 0xe8);
  if (lVar1 != -0x30) {
    do {
      FUN_180001ef2(param_2 + 0x60 + lVar1);
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != -0x30);
  }
  *(undefined1 *)(param_2 + 0x13f) = 1;
  *(longlong *)(param_2 + 0x108) = param_2 + 0x80;
  return;
}

