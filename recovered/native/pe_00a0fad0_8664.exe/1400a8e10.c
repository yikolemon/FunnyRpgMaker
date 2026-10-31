/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a8e10 */

void Unwind_1400a8e10(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x9e);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  FUN_1400080f6(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  return;
}

