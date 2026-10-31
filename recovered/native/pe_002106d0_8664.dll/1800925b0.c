/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800925b0 */

void Unwind_1800925b0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x9e);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  if (*(char *)(param_2 + 0x9d) == '\x01') {
    FUN_1800010ec(param_2 + 0x48);
  }
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  return;
}

