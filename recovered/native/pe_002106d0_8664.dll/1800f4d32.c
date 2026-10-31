/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f4d32 */

void FUN_1800f4d32(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8) * 0x18;
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar3 = lVar2;
      do {
        FUN_1800f5398(lVar1 + -0x18 + lVar3);
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
    thunk_FUN_1802464a0(lVar1 + -8,lVar2 + 8);
    return;
  }
  return;
}

