/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018ffb0 */

void FUN_14018ffb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_1401aae30();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_1401aae30();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_1401aae30();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

