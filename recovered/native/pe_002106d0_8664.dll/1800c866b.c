/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c866b */

void Unwind_1800c866b(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x350);
  if ((param_2 + 0x20 != lVar1 & *(byte *)(param_2 + 0x39a)) == 1) {
    do {
      lVar1 = lVar1 + -0x40;
      FUN_18005a55a(lVar1);
    } while (lVar1 != param_2 + 0x20);
  }
  return;
}

