/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180041d44 */

undefined8 FUN_180041d44(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_58 = &local_48;
  local_50 = local_38;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = param_2[4];
  uStack_64 = param_2[5];
  uStack_60 = param_2[6];
  uStack_5c = param_2[7];
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0xf;
  *(undefined1 *)param_2 = 0;
  local_28 = param_3;
  local_20 = param_2;
  FUN_180041eda(local_78,&local_78,&local_58);
  local_30 = param_1;
  FUN_18004363a(&local_48);
  uVar1 = local_30;
  FUN_180001ef2(local_20);
  FUN_18004363a(local_28);
  return uVar1;
}

