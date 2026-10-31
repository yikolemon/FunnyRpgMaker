/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14049e650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14049e650(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (s___AV__time_get__WV__istreambuf_i_140627320._48_4_ == -1) {
    return 0;
  }
  uVar1 = (*_DAT_14059df60)();
  lVar2 = (*(code *)s_GetFileAttributesW_14059de40._8_8_)
                    (s___AV__time_get__WV__istreambuf_i_140627320._48_4_);
  (*(code *)s_IsProcessorFeaturePresent_14059e1c0._8_8_)(uVar1);
  if (lVar2 == -1) {
    lVar2 = 0;
  }
  return lVar2;
}

