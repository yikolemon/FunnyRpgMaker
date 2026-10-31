/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180187364 */

void Unwind_180187364(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xc5);
  *(undefined1 *)(param_2 + 0xcc) = 0;
  *(undefined1 *)(param_2 + 0xcb) = uVar1;
  FUN_180001e4c(param_2 + 0x98);
  *(undefined1 *)(param_2 + 0xcc) = 0;
  *(undefined1 *)(param_2 + 0xcb) = uVar1;
  return;
}

