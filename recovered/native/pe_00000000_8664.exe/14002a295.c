/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002a295 */

undefined8 *
FUN_14002a295(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = FUN_1401887b0(0xd8);
  FUN_14002ac3e(local_c0,param_5);
  FUN_14000372c(local_80,param_4);
  uVar1 = *param_3;
  FUN_14000372c(local_60,param_2);
  FUN_14002ac86(local_40,local_60,uVar1,local_80,local_c0);
  *param_1 = local_40;
  return param_1;
}

