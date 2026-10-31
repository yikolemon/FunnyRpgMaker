/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a74d4 */

longlong FUN_1400a74d4(longlong param_1,undefined8 param_2)

{
  undefined1 local_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  FUN_14000f628(param_1,&DAT_140174404);
  *(undefined1 *)(local_20 + 0x20) = 0;
  local_38 = local_20 + 0x28;
  FUN_14000f628(local_38,&DAT_140174404);
  local_30 = local_20 + 0x48;
  *(undefined8 *)(local_20 + 0x48) = 0;
  *(undefined8 *)(local_20 + 0x50) = 0;
  *(undefined8 *)(local_20 + 0x58) = 0;
  local_28 = local_20 + 0x60;
  *(undefined8 *)(local_20 + 0x60) = 0;
  *(undefined8 *)(local_20 + 0x68) = 0;
  *(undefined8 *)(local_20 + 0x70) = 0;
  *(undefined8 *)(local_20 + 0x78) = 0;
  FUN_14009aeee(param_2,local_58);
  FUN_14000ff1e(local_20,local_58);
  FUN_140005242(local_58);
  return local_20;
}

