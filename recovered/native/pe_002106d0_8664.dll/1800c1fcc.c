/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c1fcc */

void Unwind_1800c1fcc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x108);
  if (param_2 + 0x50 != *(longlong *)(param_2 + 0x108) && (*(byte *)(param_2 + 0x13f) & 1) == 0) {
    do {
      lVar1 = lVar2 + -0x30;
      FUN_180001ef2(lVar2 + -0x20);
      lVar2 = lVar1;
    } while (lVar1 != param_2 + 0x50);
  }
  return;
}

