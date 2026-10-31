/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140069d46 */

void Unwind_140069d46(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x85);
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  if (*(char *)(param_2 + 0x86) == '\x01') {
    FUN_140001e90(param_2 + 0x60);
  }
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  return;
}

