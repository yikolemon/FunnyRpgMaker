/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180187280 */

void Unwind_180187280(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 199);
  *(undefined1 *)(param_2 + 0xcf) = uVar1;
  *(undefined1 *)(param_2 + 0xce) = 0;
  FUN_180001e4c(param_2 + 0x98);
  *(undefined1 *)(param_2 + 0xcf) = uVar1;
  *(undefined1 *)(param_2 + 0xce) = 0;
  return;
}

