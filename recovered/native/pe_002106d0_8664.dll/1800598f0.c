/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800598f0 */

void Unwind_1800598f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_180004cea(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  return;
}

