/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801873da */

void Unwind_1801873da(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xca);
  *(undefined1 *)(param_2 + 0xc4) = uVar1;
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_180001e4c(param_2 + 0x40);
  }
  *(undefined1 *)(param_2 + 0xc4) = uVar1;
  return;
}

