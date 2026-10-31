/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b80e */

void Unwind_18001b80e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8c);
  *(undefined1 *)(param_2 + 0x8f) = uVar1;
  if (*(char *)(param_2 + 0x8b) == '\x01') {
    FUN_180001ef2(param_2 + 0x40);
  }
  *(undefined1 *)(param_2 + 0x8f) = uVar1;
  return;
}

