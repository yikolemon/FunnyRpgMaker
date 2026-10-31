/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf45a */

void FUN_1800bf45a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar2 != lVar1) {
      do {
        FUN_1800bf3e8(lVar2);
        lVar2 = lVar2 + 0x28;
      } while (lVar2 != lVar1);
      lVar2 = *(longlong *)(param_1 + 8);
    }
    (*DAT_180417870)(lVar2);
    *(longlong *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

