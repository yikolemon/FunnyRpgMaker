/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081cf4 */

void Unwind_180081cf4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_18008131e(uVar1);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  return;
}

