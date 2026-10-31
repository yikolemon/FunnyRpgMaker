/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001b20 */

void Unwind_140001b20(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x154);
  *(undefined1 *)(param_2 + 0x152) = uVar1;
  if (*(char *)(param_2 + 0x153) == '\x01') {
    FUN_140001056(param_2 + 0xa8);
  }
  *(undefined1 *)(param_2 + 0x152) = uVar1;
  return;
}

