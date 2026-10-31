/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f3f34 */

undefined8 *
FUN_1800f3f34(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined8 local_48 [2];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1800f6574(local_48,param_3);
  FUN_1800f6886(param_1,local_38,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff);
  uVar1 = local_48[0];
  local_48[0] = 0;
  *param_2 = uVar1;
  *(undefined1 *)(param_2 + 1) = 1;
  local_30 = param_2;
  FUN_1800f4e94(local_38);
  FUN_1800f408a(local_48);
  return param_2;
}

