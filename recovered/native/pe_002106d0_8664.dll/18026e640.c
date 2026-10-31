/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026e640 */

void FUN_18026e640(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_18028cfc0();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_18028cfc0();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_18028cfc0();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

