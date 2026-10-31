/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6574 */

undefined8 * FUN_1800f6574(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [32];
  undefined1 local_50 [24];
  longlong *local_38;
  longlong local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  local_38 = param_1 + 2;
  param_1[2] = 0;
  local_28 = param_1;
  FUN_1800f6976(local_50);
  FUN_1800f6a36(local_50,&local_a8);
  FUN_1800f7592(local_28,&local_a8);
  FUN_1800f408a(&local_a8);
  local_98 = param_2[2];
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_90 = *(undefined4 *)(param_2 + 3);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_88 = *(undefined4 *)(param_2 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_80 = *(undefined4 *)(param_2 + 5);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_78 = *(undefined4 *)(param_2 + 6);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[5] = 0;
  param_2[6] = 0xf;
  *(undefined1 *)(param_2 + 3) = 0;
  FUN_1800f6a96(local_70,local_50);
  FUN_1800f6d28(&local_30,&local_a8);
  lVar2 = local_30;
  local_30 = 0;
  puVar1 = (undefined8 *)*local_38;
  *local_38 = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1800f4e94(&local_30);
  FUN_1800f6b14(local_70);
  FUN_180001ef2(&local_90);
  FUN_1800f6b14(local_50);
  return local_28;
}

