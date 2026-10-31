/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e69f4 */

void Unwind_1800e69f4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x22f);
  *(undefined1 *)(param_2 + 0x22e) = uVar1;
  FUN_180001ef2(param_2 + 0x78);
  *(undefined1 *)(param_2 + 0x22e) = uVar1;
  return;
}

