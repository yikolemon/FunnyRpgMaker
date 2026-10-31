/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401174fc */

undefined8 FUN_1401174fc(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_140121578();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined8 *)(local_res8[0] + 0xf8);
}

