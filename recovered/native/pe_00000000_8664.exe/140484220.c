/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140484220 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140484220(longlong *param_1)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = (*_DAT_14059df60)();
    if ((char)param_1[2] == '\0') {
      lVar1 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar1 = param_1[1];
    }
    lVar1 = FUN_1404a26e8(local_res8,lVar1);
    *param_1 = lVar1;
    (*(code *)s_IsProcessorFeaturePresent_14059e1c0._8_8_)(local_res8[0]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return *param_1;
}

