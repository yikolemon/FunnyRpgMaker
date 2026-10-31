/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d8814 */

void FUN_1400d8814(longlong param_1)

{
  undefined8 *puVar1;
  LONG LVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  LVar2 = GetWindowLongW((HWND)*puVar1,-0x10);
  *(LONG *)((longlong)puVar1 + 0x14) = LVar2;
  LVar2 = GetWindowLongW((HWND)*puVar1,-0x14);
  *(LONG *)(puVar1 + 3) = LVar2;
  return;
}

