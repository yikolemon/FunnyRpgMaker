/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006361c */

void Unwind_14006361c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_140063912(uVar1);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  return;
}

