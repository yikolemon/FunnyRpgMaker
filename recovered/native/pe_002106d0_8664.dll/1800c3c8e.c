/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c3c8e */

void Unwind_1800c3c8e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2 + 0x80;
  *(undefined1 *)(param_2 + 0x13f) = 1;
  *(longlong *)(param_2 + 0x108) = lVar1;
  lVar2 = 0x40;
  do {
    FUN_180001ef2(lVar2 + lVar1 + -0x30);
    lVar2 = lVar2 + -0x30;
  } while (lVar2 != -0x20);
  *(undefined1 *)(param_2 + 0x13f) = 1;
  *(longlong *)(param_2 + 0x108) = lVar1;
  return;
}

