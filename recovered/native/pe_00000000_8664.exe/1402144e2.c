/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402144e2 */

undefined8 * FUN_1402144e2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1402146e6(local_78,param_3);
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_1402145e8(local_58,&local_38,local_78);
  FUN_14021473e(param_1,local_58);
  local_28 = param_1;
  FUN_1402133c2(local_58);
  *local_28 = &DAT_1404bd998;
  uVar1 = param_2[1];
  local_28[3] = *param_2;
  local_28[4] = uVar1;
  return local_28;
}

