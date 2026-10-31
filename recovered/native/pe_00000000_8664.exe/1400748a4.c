/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400748a4 */

void Unwind_1400748a4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xc5);
  *(undefined1 *)(param_2 + 0xcc) = 0;
  *(undefined1 *)(param_2 + 0xcb) = uVar1;
  FUN_140001056(param_2 + 0x98);
  *(undefined1 *)(param_2 + 0xcc) = 0;
  *(undefined1 *)(param_2 + 0xcb) = uVar1;
  return;
}

