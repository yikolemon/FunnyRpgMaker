/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011790a */

longlong FUN_18011790a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x68);
  if ((*(longlong *)(lVar1 + 0x2b0) == 0) || (*(int *)(lVar1 + 0x68) == 0)) {
    FUN_1801962d0(lVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x70);
  if (lVar2 == 0) {
    lVar2 = **(longlong **)(lVar1 + 0x70);
  }
  return lVar2;
}

