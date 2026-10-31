/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a2608 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1404a2608(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (DAT_140632710 == '\0') {
    uVar1 = (*_DAT_14059df60)();
    lVar2 = lVar3;
    if (s___AV__time_get__WV__istreambuf_i_140627320._64_4_ != -1) {
      lVar2 = FUN_1404a2f0c();
    }
    if ((lVar2 != -1) && (lVar3 = lVar2, lVar2 == 0)) {
      lVar3 = FUN_1404a2994();
    }
    (*(code *)s_IsProcessorFeaturePresent_14059e1c0._8_8_)(uVar1);
  }
  else {
    lVar2 = lVar3;
    if (s___AV__time_get__WV__istreambuf_i_140627320._64_4_ != -1) {
      lVar2 = FUN_1404a2f1c();
    }
    if ((lVar2 != -1) && (lVar3 = lVar2, lVar2 == 0)) {
      lVar3 = FUN_1404a2994();
    }
  }
  return lVar3;
}

