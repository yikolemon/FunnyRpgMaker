/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e2c10 */

void Unwind_1800e2c10(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x13d);
  uVar2 = *(undefined1 *)(param_2 + 0x13e);
  *(undefined1 *)(param_2 + 0x13b) = uVar2;
  *(undefined1 *)(param_2 + 0x13c) = uVar1;
  FUN_180001ef2(param_2 + 0xe0);
  *(undefined1 *)(param_2 + 0x13b) = uVar2;
  *(undefined1 *)(param_2 + 0x13c) = uVar1;
  return;
}

