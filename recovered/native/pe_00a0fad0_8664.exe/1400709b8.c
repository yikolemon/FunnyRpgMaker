/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400709b8 */

longlong * FUN_1400709b8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = param_1;
  local_28 = param_1;
  lVar1 = FUN_1400d3680(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  FUN_140070a4a(param_1,param_2);
  local_28 = (longlong *)0x0;
  FUN_140070aba(&local_30);
  return param_1;
}

