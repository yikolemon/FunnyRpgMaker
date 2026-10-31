/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001a86 */

void Unwind_140001a86(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x157);
  *(undefined1 *)(param_2 + 0x156) = 0;
  *(undefined1 *)(param_2 + 0x155) = uVar1;
  FUN_140001056(param_2 + 0x130);
  *(undefined1 *)(param_2 + 0x156) = 0;
  *(undefined1 *)(param_2 + 0x155) = uVar1;
  return;
}

