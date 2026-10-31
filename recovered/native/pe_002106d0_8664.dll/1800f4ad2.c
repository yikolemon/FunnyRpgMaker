/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f4ad2 */

void Unwind_1800f4ad2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x60);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x58);
    do {
      FUN_1800f5398(lVar1 + -0x10 + lVar2);
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}

