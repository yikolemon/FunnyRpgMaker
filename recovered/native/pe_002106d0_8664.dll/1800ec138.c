/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ec138 */

void Unwind_1800ec138(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x237);
  *(undefined1 *)(param_2 + 0x236) = uVar1;
  FUN_180001ef2(param_2 + 0x120);
  *(undefined1 *)(param_2 + 0x236) = uVar1;
  return;
}

