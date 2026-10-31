/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258080 */

undefined4 FUN_10258080(void)

{
  wchar_t **ppwVar1;
  uint local_8;
  
  ppwVar1 = ____lc_locale_name_func();
  if (ppwVar1[5] != (LPCWSTR)0x0) {
    local_8 = 0;
    GetLocaleInfoEx(ppwVar1[5],0x22,(LPWSTR)&local_8,2);
    local_8 = local_8 & 0xffff;
    if (local_8 != 0x30) {
      if (local_8 == 0x31) {
        return 1;
      }
      if (local_8 != 0x32) {
        return 0;
      }
      return 3;
    }
  }
  return 2;
}

