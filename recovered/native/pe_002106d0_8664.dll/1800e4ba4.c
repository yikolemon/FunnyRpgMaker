/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e4ba4 */

void Unwind_1800e4ba4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x6256);
  *(undefined1 *)(param_2 + 0x6252) = uVar1;
  if (*(char *)(param_2 + 0x6257) == '\x01') {
    FUN_180001e4c(param_2 + 0x6228);
  }
  *(undefined1 *)(param_2 + 0x6252) = uVar1;
  return;
}

