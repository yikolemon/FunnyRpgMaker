/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008ec04 */

undefined8 FUN_14008ec04(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];
  
  lVar1 = FUN_1400a1528();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,(longlong *)local_res8);
  return *local_res8[0];
}

