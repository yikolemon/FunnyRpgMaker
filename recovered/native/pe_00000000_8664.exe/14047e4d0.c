/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14047e4d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14047e4d0(void)

{
  wchar_t **ppwVar1;
  uint local_res8 [8];
  
  ppwVar1 = ___lc_locale_name_func();
  if (ppwVar1[5] != (wchar_t *)0x0) {
    local_res8[0] = 0;
    (*ram0x00014059df70)(ppwVar1[5],0x22,local_res8,2);
    local_res8[0] = local_res8[0] & 0xffff;
    if (local_res8[0] != 0x30) {
      if (local_res8[0] == 0x31) {
        return 1;
      }
      if (local_res8[0] != 0x32) {
        return 0;
      }
      return 3;
    }
  }
  return 2;
}

