/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140105830 */

undefined8 FUN_140105830(void)

{
  wchar_t **ppwVar1;
  uint local_res8 [8];
  
  ppwVar1 = ___lc_locale_name_func();
  if (ppwVar1[5] != (LPCWSTR)0x0) {
    local_res8[0] = 0;
    GetLocaleInfoEx(ppwVar1[5],0x22,(LPWSTR)local_res8,2);
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

