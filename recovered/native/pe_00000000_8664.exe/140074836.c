/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140074836 */

void Unwind_140074836(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xcd);
  *(undefined1 *)(param_2 + 0xc6) = uVar1;
  if (*(char *)(param_2 + 0xc9) == '\x01') {
    FUN_140001056(param_2 + 0x20);
  }
  *(undefined1 *)(param_2 + 0xc6) = uVar1;
  return;
}

