/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f9074 */

void FUN_1800f9074(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_40 [16];
  char local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18005b3d5(&local_68,*(undefined4 *)param_1[1],*(undefined8 *)param_1[2],
                *(undefined8 *)param_1[3],*(undefined8 *)param_1[4]);
  puVar1 = (undefined4 *)*param_1;
  puVar1[8] = local_48;
  puVar1[4] = local_58;
  puVar1[5] = uStack_54;
  puVar1[6] = uStack_50;
  puVar1[7] = uStack_4c;
  *puVar1 = local_68;
  puVar1[1] = uStack_64;
  puVar1[2] = uStack_60;
  puVar1[3] = uStack_5c;
  if (local_30 == '\x01') {
    FUN_1800682b6(puVar1 + 10,local_40);
  }
  else {
    FUN_1800f9160(puVar1 + 10);
  }
  puVar1[0x10] = local_28;
  FUN_180068060(local_40);
  *(undefined1 *)param_1[5] = 1;
  return;
}

