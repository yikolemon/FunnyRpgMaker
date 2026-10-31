/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400058f6 */

void Unwind_1400058f6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1400022f6(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  return;
}

