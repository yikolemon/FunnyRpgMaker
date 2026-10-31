/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005d745 */

void Unwind_18005d745(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4d7);
  *(undefined1 *)(param_2 + 0x4d5) = uVar1;
  if (*(char *)(param_2 + 0x4d6) == '\x01') {
    FUN_180001e4c(param_2 + 0x150);
  }
  *(undefined1 *)(param_2 + 0x4d5) = uVar1;
  return;
}

