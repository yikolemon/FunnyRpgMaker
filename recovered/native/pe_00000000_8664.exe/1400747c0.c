/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400747c0 */

void Unwind_1400747c0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 199);
  *(undefined1 *)(param_2 + 0xcf) = uVar1;
  *(undefined1 *)(param_2 + 0xce) = 0;
  FUN_140001056(param_2 + 0x98);
  *(undefined1 *)(param_2 + 0xcf) = uVar1;
  *(undefined1 *)(param_2 + 0xce) = 0;
  return;
}

