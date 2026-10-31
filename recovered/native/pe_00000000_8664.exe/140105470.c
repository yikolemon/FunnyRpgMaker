/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140105470 */

void Unwind_140105470(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x20) != -0x18) {
    lVar2 = -*(longlong *)(param_2 + 0x20);
    do {
      if (*(longlong *)(lVar1 + 8) != 0) {
        FUN_140077b90();
      }
      lVar2 = lVar2 + -0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar2 != 0x18);
  }
  return;
}

