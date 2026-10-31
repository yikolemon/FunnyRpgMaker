/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140003ac2 */

void Unwind_140003ac2(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8a0);
  *(undefined1 *)(param_2 + 0x89e) = uVar1;
  if (*(char *)(param_2 + 0x89f) == '\x01') {
    FUN_140005690(param_2 + 0x800);
  }
  *(undefined1 *)(param_2 + 0x89e) = uVar1;
  return;
}

