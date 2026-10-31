/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006ee74 */

void Unwind_18006ee74(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1eb);
  *(undefined1 *)(param_2 + 0x1ef) = uVar1;
  if (*(char *)(param_2 + 0x1ea) == '\x01') {
    FUN_180001e4c(param_2 + 0x120);
  }
  *(undefined1 *)(param_2 + 0x1ef) = uVar1;
  return;
}

