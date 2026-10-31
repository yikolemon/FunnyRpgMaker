/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140288d74 */

void FUN_140288d74(undefined1 *param_1)

{
  longlong local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0xffffffffffffffff;
  FUN_1402889dc(param_1,local_38);
  FUN_140289ce8(param_1,local_38);
  *param_1 = 1;
  DAT_140629188 = 1;
  FUN_140288ab0(param_1 + 0x10,local_38);
  local_20 = CONCAT44(local_20._4_4_,0x8f);
  FUN_140289a38(param_1 + 0x10);
  s___AVEngineUI___140612d30._8_4_ = ZEXT14(*(byte *)(local_38[0] + 0x14));
  FUN_1402161ba(local_38);
  return;
}

