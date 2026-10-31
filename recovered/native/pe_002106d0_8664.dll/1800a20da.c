/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a20da */

longlong FUN_1800a20da(longlong param_1,undefined8 param_2)

{
  undefined1 local_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  FUN_180001254(param_1,L"");
  *(undefined1 *)(local_20 + 0x20) = 0;
  local_38 = local_20 + 0x28;
  FUN_180001254(local_38,L"");
  local_30 = local_20 + 0x48;
  *(undefined8 *)(local_20 + 0x48) = 0;
  *(undefined8 *)(local_20 + 0x50) = 0;
  *(undefined8 *)(local_20 + 0x58) = 0;
  local_28 = local_20 + 0x60;
  *(undefined8 *)(local_20 + 0x60) = 0;
  *(undefined8 *)(local_20 + 0x68) = 0;
  *(undefined8 *)(local_20 + 0x70) = 0;
  *(undefined8 *)(local_20 + 0x78) = 0;
  FUN_18008b8a0(param_2,local_58);
  FUN_180012524(local_20,local_58);
  FUN_1800010ec(local_58);
  return local_20;
}

