/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d4f0 */

longlong FUN_18011d4f0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = DAT_180419160;
  iVar1 = FUN_1800fed39(param_1,0,0);
  lVar2 = (longlong)*(int *)(lVar3 + 0x2988);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x2990);
    lVar2 = lVar2 * 0x48;
    do {
      if (*(int *)(lVar3 + 8) == iVar1) {
        return lVar3;
      }
      lVar3 = lVar3 + 0x48;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  return 0;
}

