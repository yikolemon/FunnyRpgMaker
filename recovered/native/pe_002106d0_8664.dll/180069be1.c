/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180069be1 */

undefined8 FUN_180069be1(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_38 [2];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_18005b2ca(local_38);
  uVar1 = FUN_180061eb4(param_2);
  FUN_180069c76(param_1,uVar1,param_3,local_38);
  FUN_1800603f0(local_38,local_38,*(undefined8 *)(local_38[0] + 8));
  thunk_FUN_1802464a0(local_38[0],0x30);
  return param_1;
}

