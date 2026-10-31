/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b224 */

undefined8 FUN_18005b224(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = param_3;
  local_30 = param_2;
  local_24 = param_1;
  FUN_18005b2ca(local_48);
  uVar1 = FUN_18005b335();
  FUN_1800603f0(local_48,local_48,*(undefined8 *)(local_48[0] + 8));
  thunk_FUN_1802464a0(local_48[0],0x30);
  return uVar1;
}

