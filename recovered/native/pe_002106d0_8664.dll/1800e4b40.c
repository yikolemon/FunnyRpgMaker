/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e4b40 */

void Unwind_1800e4b40(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x6251);
  *(undefined1 *)(param_2 + 0x6257) = uVar1;
  *(undefined1 *)(param_2 + 0x6256) = uVar1;
  if (*(char *)(param_2 + 0x6250) == '\x01') {
    FUN_180001ef2(param_2 + 0x6200);
  }
  *(undefined1 *)(param_2 + 0x6257) = uVar1;
  *(undefined1 *)(param_2 + 0x6256) = uVar1;
  return;
}

