/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c86c0 */

void Unwind_1800c86c0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x398);
  *(undefined1 *)(param_2 + 0x399) = uVar1;
  FUN_180001ef2(param_2 + 0x2e8);
  *(undefined1 *)(param_2 + 0x399) = uVar1;
  return;
}

