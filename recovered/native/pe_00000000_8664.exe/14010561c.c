/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010561c */

void Unwind_14010561c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30) + 0x30;
  if (lVar1 != 0) {
    lVar1 = -lVar1;
    lVar2 = *(longlong *)(param_2 + 0x28) + *(longlong *)(param_2 + 0x30) + 0x40;
    do {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_140077b90();
      }
      lVar2 = lVar2 + -0x30;
      lVar1 = lVar1 + 0x30;
    } while (lVar1 != 0);
  }
  return;
}

