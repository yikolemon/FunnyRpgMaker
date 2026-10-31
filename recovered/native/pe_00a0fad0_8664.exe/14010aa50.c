/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010aa50 */

undefined4 FUN_14010aa50(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_140121578();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined4 *)(local_res8[0] + 8);
}

