/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005d95a */

void Unwind_18005d95a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4de);
  *(undefined1 *)(param_2 + 0x4d2) = uVar1;
  if (*(char *)(param_2 + 0x4dd) == '\x01') {
    FUN_180001e4c(param_2 + 0x40);
  }
  *(undefined1 *)(param_2 + 0x4d2) = uVar1;
  return;
}

