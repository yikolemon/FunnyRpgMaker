/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003bd20 */

void Unwind_14003bd20(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x224);
  *(undefined1 *)(param_2 + 0x222) = uVar1;
  if (*(char *)(param_2 + 0x223) == '\x01') {
    FUN_140001056(param_2 + 0x40);
  }
  *(undefined1 *)(param_2 + 0x222) = uVar1;
  return;
}

