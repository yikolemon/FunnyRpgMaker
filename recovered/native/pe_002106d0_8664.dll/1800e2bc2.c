/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e2bc2 */

void Unwind_1800e2bc2(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x13f);
  *(undefined1 *)(param_2 + 0x13e) = 0;
  *(undefined1 *)(param_2 + 0x13d) = uVar1;
  FUN_180001e4c(param_2 + 0xc0);
  *(undefined1 *)(param_2 + 0x13e) = 0;
  *(undefined1 *)(param_2 + 0x13d) = uVar1;
  return;
}

