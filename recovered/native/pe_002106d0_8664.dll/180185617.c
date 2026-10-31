/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185617 */

void Unwind_180185617(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  FUN_1800e50b8(uVar1);
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x40);
  return;
}

