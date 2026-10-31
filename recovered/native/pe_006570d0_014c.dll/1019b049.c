/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019b049 */

void __fastcall FUN_1019b049(int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  LVar2 = GetWindowLongW((HWND)*puVar1,-0x10);
  puVar1[3] = LVar2;
  LVar2 = GetWindowLongW((HWND)*puVar1,-0x14);
  puVar1[4] = LVar2;
  return;
}

