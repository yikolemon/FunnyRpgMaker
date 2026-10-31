/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089f8e */

void FUN_140089f8e(undefined1 *param_1)

{
  longlong local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0xffffffffffffffff;
  FUN_140089bf6(param_1,local_38);
  FUN_14008ac82(param_1,local_38);
  *param_1 = 1;
  DAT_1401cc8c6 = 1;
  FUN_140089cca(param_1 + 0x10,local_38);
  local_20 = CONCAT44(local_20._4_4_,0x8f);
  FUN_14008a9d2(param_1 + 0x10);
  DAT_1401c9930 = (uint)*(byte *)(local_38[0] + 0x14);
  FUN_140016e5c(local_38);
  return;
}

