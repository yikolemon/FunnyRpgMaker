/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180287560 */

undefined8 FUN_180287560(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_1802910d8();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined8 *)(local_res8[0] + 0xf8);
}

