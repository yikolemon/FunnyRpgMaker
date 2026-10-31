/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400962ec */

void FUN_1400962ec(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_140142ea0;
  if (((DAT_140142ea0 == 0) && (lVar1 = DAT_140142e98, DAT_140142e98 == 0)) &&
     ((DAT_140142e90 == 0 ||
      ((uVar2 = FUN_1400963bc(), lVar1 = DAT_140142e98, (int)uVar2 != 0 &&
       (uVar2 = FUN_1400965c8(), lVar1 = DAT_140142e98, (int)uVar2 != 0)))))) {
    lVar1 = 0;
  }
  DAT_140142ea0 = lVar1;
  return;
}

