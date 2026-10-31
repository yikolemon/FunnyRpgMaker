/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140020e61 */

void Unwind_140020e61(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_1400017de(lVar2);
  }
  return;
}

