/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116d7a */

undefined1 FUN_180116d7a(int param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  
  uVar1 = 1;
  if (*(int *)(DAT_180419160 + 0x2208) != param_1) {
    if ((longlong)*(int *)(DAT_180419160 + 0x2228) == 0) {
      return 0;
    }
    lVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(DAT_180419160 + 0x2230) + lVar2) == param_1) {
        return 1;
      }
      bVar3 = (longlong)*(int *)(DAT_180419160 + 0x2228) * 8 + -8 != lVar2;
      lVar2 = lVar2 + 8;
      uVar1 = 0;
    } while (bVar3);
  }
  return uVar1;
}

