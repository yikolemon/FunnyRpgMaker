/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006ef12 */

void Unwind_18006ef12(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1ee);
  *(undefined1 *)(param_2 + 0x1ec) = uVar1;
  if (*(char *)(param_2 + 0x1ed) == '\x01') {
    FUN_180001e4c(param_2 + 0x140);
  }
  *(undefined1 *)(param_2 + 0x1ec) = uVar1;
  return;
}

