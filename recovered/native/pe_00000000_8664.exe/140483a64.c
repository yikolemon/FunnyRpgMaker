/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140483a64 */

undefined8 FUN_140483a64(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];
  
  lVar1 = FUN_1404a25a8();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *local_res8[0];
}

