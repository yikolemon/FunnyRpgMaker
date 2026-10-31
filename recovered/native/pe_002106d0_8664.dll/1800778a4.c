/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800778a4 */

void FUN_1800778a4(undefined1 *param_1)

{
  longlong local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0xffffffffffffffff;
  FUN_18007750c(param_1,local_38);
  FUN_180078818(param_1,local_38);
  *param_1 = 1;
  DAT_180417cb8 = 1;
  FUN_1800775e0(param_1 + 0x10,local_38);
  local_20 = CONCAT44(local_20._4_4_,0x8f);
  FUN_180078568(param_1 + 0x10);
  DAT_180401868 = (uint)*(byte *)(local_38[0] + 0x14);
  FUN_180004cea(local_38);
  return;
}

