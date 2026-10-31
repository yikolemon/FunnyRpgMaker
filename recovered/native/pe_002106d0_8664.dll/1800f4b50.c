/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f4b50 */

void Unwind_1800f4b50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x60);
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (lVar2 != 0x18) {
    do {
      FUN_1800f5398(lVar1 + -0x30 + lVar2);
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0x18);
  }
  return;
}

