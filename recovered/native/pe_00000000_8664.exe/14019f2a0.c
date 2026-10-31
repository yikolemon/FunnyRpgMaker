/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019f2a0 */

longlong FUN_14019f2a0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_140f328a8;
  if ((DAT_140f328a8 == 0) &&
     ((DAT_140f328a0 == 0 ||
      ((iVar1 = FUN_14019f394(), lVar2 = DAT_140f328a8, iVar1 != 0 &&
       (iVar1 = FUN_14019f6b4(), lVar2 = DAT_140f328a8, iVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}

