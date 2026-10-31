/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140051b11 */

void Unwind_140051b11(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x85);
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  if (*(char *)(param_2 + 0x86) == '\x01') {
    FUN_14000109c(param_2 + 0x60);
  }
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  return;
}

