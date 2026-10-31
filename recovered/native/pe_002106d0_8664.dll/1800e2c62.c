/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e2c62 */

void Unwind_1800e2c62(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x13c);
  *(undefined1 *)(param_2 + 0x139) = uVar1;
  if (*(char *)(param_2 + 0x13b) == '\x01') {
    FUN_180001e4c(param_2 + 0xa0);
  }
  *(undefined1 *)(param_2 + 0x139) = uVar1;
  return;
}

