/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ec22e */

void Unwind_1800ec22e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x234);
  *(undefined1 *)(param_2 + 0x235) = uVar1;
  FUN_180001ef2(param_2 + 0x100);
  *(undefined1 *)(param_2 + 0x235) = uVar1;
  return;
}

