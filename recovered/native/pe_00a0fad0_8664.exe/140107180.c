/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107180 */

void FUN_140107180(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_14011d6e0();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_14011d6e0();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_14011d6e0();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140115938();
}

