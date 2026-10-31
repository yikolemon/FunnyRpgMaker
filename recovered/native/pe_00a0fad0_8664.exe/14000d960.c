/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000d960 */

longlong FUN_14000d960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_22;
  undefined1 local_21;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  FUN_14000db0e(param_1,&local_22);
  FUN_1400069a2(local_20 + 0x40,&local_21,param_3,param_4,local_20 + 0x40);
  *(undefined8 *)(local_20 + 0x80) = 0;
  *(undefined8 *)(local_20 + 0x88) = 0;
  *(undefined8 *)(local_20 + 0x90) = 0;
  *(undefined8 *)(local_20 + 0x98) = 0xf;
  *(undefined4 *)(local_20 + 0xa0) = 0xffffffff;
  *(undefined2 *)(local_20 + 0xa4) = 1;
  return local_20;
}

