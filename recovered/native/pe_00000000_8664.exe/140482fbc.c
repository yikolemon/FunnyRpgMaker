/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140482fbc */

undefined4 FUN_140482fbc(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_1404a25a8();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined4 *)(local_res8[0] + 8);
}

