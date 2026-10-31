/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801872f6 */

void Unwind_1801872f6(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xcd);
  *(undefined1 *)(param_2 + 0xc6) = uVar1;
  if (*(char *)(param_2 + 0xc9) == '\x01') {
    FUN_180001e4c(param_2 + 0x20);
  }
  *(undefined1 *)(param_2 + 0xc6) = uVar1;
  return;
}

