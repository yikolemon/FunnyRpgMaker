/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008e82c */

undefined4 FUN_14008e82c(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_1400a1528();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined4 *)(local_res8[0] + 0xc);
}

