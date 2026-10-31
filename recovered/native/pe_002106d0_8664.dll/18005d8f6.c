/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005d8f6 */

void Unwind_18005d8f6(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4d4);
  *(undefined1 *)(param_2 + 0x4de) = uVar1;
  *(undefined1 *)(param_2 + 0x4dd) = uVar1;
  if (*(char *)(param_2 + 0x4d3) == '\x01') {
    FUN_180001e4c(param_2 + 400);
  }
  *(undefined1 *)(param_2 + 0x4de) = uVar1;
  *(undefined1 *)(param_2 + 0x4dd) = uVar1;
  return;
}

