/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010b500 */

undefined8 FUN_14010b500(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];
  
  lVar1 = FUN_140121578();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *local_res8[0];
}

