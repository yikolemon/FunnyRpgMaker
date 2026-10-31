/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007491a */

void Unwind_14007491a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xca);
  *(undefined1 *)(param_2 + 0xc4) = uVar1;
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_140001056(param_2 + 0x40);
  }
  *(undefined1 *)(param_2 + 0xc4) = uVar1;
  return;
}

