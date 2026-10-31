/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a5458 */

undefined8 FUN_1401a5458(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_1401aecc8();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined8 *)(local_res8[0] + 0xf8);
}

