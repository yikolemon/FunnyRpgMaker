/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a7634 */

longlong FUN_1400a7634(longlong param_1,undefined8 param_2)

{
  undefined1 local_50 [32];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  FUN_14000f628(param_1,&DAT_140174404);
  local_30 = local_20 + 0x20;
  *(undefined8 *)(local_20 + 0x20) = 0;
  *(undefined8 *)(local_20 + 0x28) = 0;
  *(undefined8 *)(local_20 + 0x30) = 0;
  local_28 = local_20 + 0x38;
  *(undefined8 *)(local_20 + 0x38) = 0;
  *(undefined8 *)(local_20 + 0x40) = 0;
  *(undefined8 *)(local_20 + 0x48) = 0;
  *(undefined8 *)(local_20 + 0x50) = 0;
  FUN_14009aeee(param_2,local_50);
  FUN_14000ff1e(local_20,local_50);
  FUN_140005242(local_50);
  return local_20;
}

