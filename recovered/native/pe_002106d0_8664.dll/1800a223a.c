/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a223a */

longlong FUN_1800a223a(longlong param_1,undefined8 param_2)

{
  undefined1 local_50 [32];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  FUN_180001254(param_1,L"");
  local_30 = local_20 + 0x20;
  *(undefined8 *)(local_20 + 0x20) = 0;
  *(undefined8 *)(local_20 + 0x28) = 0;
  *(undefined8 *)(local_20 + 0x30) = 0;
  local_28 = local_20 + 0x38;
  *(undefined8 *)(local_20 + 0x38) = 0;
  *(undefined8 *)(local_20 + 0x40) = 0;
  *(undefined8 *)(local_20 + 0x48) = 0;
  *(undefined8 *)(local_20 + 0x50) = 0;
  FUN_18008b8a0(param_2,local_50);
  FUN_180012524(local_20,local_50);
  FUN_1800010ec(local_50);
  return local_20;
}

