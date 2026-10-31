/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180034711 */

undefined8 *
FUN_180034711(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = FUN_180239630(0xd8);
  FUN_1800350ba(local_c0,param_5);
  FUN_180003216(local_80,param_4);
  uVar1 = *param_3;
  FUN_180003216(local_60,param_2);
  FUN_180035102(local_40,local_60,uVar1,local_80,local_c0);
  *param_1 = local_40;
  return param_1;
}

