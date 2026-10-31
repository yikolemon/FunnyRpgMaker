/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009633c */

longlong FUN_14009633c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_140142e98;
  if ((DAT_140142e98 == 0) &&
     ((DAT_140142e90 == 0 ||
      ((uVar1 = FUN_1400963bc(), lVar2 = DAT_140142e98, (int)uVar1 != 0 &&
       (uVar1 = FUN_1400965c8(), lVar2 = DAT_140142e98, (int)uVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}

