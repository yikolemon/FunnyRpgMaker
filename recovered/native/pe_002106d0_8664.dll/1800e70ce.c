/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e70ce */

void FUN_1800e70ce(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  undefined1 local_128 [16];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  undefined8 ***local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_90 = param_1;
  FUN_1800247f0(local_c8);
  FUN_18005acf6(local_118);
  puVar3 = (undefined8 *)FUN_1800b8fe8(&DAT_1804189d0,1);
  puVar1 = (undefined8 *)puVar3[1];
  for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 8) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 3;
    if ((ulonglong)puVar3[7] < 0x10) {
      puVar5 = puVar3 + 4;
    }
    else {
      puVar5 = (undefined8 *)puVar3[4];
    }
    FUN_1800639cf(&local_b8,puVar5,puVar3[6] + (longlong)puVar5,&local_88);
    local_b8 = (undefined8 ****)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 3;
    puVar5 = puVar3;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar5 = (undefined8 *)*puVar3;
    }
    FUN_1800639cf(&local_e8,puVar5,puVar3[2] + (longlong)puVar5,&local_b8);
    FUN_1800b9426(local_118,&local_b8,&local_88);
    FUN_180061ab8(&local_b8);
    FUN_180061ab8(&local_88);
  }
  FUN_1800b95e4(local_118);
  plVar4 = (longlong *)FUN_1800b8fe8(&DAT_1804188a0,0);
  lVar2 = plVar4[1];
  for (lVar8 = *plVar4; lVar8 != lVar2; lVar8 = lVar8 + 0x40) {
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = 3;
    if (*(ulonglong *)(lVar8 + 0x38) < 0x10) {
      lVar6 = lVar8 + 0x20;
    }
    else {
      lVar6 = *(longlong *)(lVar8 + 0x20);
    }
    FUN_1800639cf(&local_88,lVar6,*(longlong *)(lVar8 + 0x30) + lVar6,&local_e8);
    FUN_180062860(local_118,&local_b8,&local_e8);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    ppppuVar7 = &local_b8;
    if (3 < local_a0) {
      ppppuVar7 = (undefined8 ****)local_b8;
    }
    FUN_18006665b(local_128,ppppuVar7,(longlong)ppppuVar7 + local_a8 * 4,&local_88);
    FUN_1800ea354(local_c8,local_128,lVar8,&local_88);
    FUN_180001ef2(&local_88);
    FUN_180061ab8(&local_b8);
    FUN_180061ab8(&local_e8);
  }
  FUN_1800ea0d2(&DAT_1804188a0,*local_90);
  FUN_1800ea1b8(*local_90,local_c8);
  FUN_1800619f4(local_100);
  FUN_180061b6c(local_118);
  FUN_1800248c8(local_c8,local_c8,*(undefined8 *)(local_c8[0] + 8));
  thunk_FUN_1802464a0(local_c8[0],0x60);
  return;
}

