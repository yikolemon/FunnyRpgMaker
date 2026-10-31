/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400802a2 */

ulonglong FUN_1400802a2(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  bool bVar8;
  undefined8 local_b8;
  int local_b0;
  undefined8 **local_a8 [3];
  ulonglong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_60 [2];
  undefined8 local_58;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  puVar1 = (undefined4 *)(param_1 + 0x60);
  FUN_14000ffc0(puVar1,&DAT_140174404,0);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  FUN_140080d3a(param_1,local_60);
  FUN_14000ff1e(param_1 + 0x40,local_60);
  FUN_140005242(local_60);
  FUN_140055cae(local_60,param_1 + 0x40,&DAT_140173c42);
  puVar6 = DAT_1401cc6d0;
  if (DAT_1401cc6e8 < 8) {
    puVar6 = &DAT_1401cc6d0;
  }
  puVar5 = (undefined4 *)FUN_140008bae(local_60,puVar6,DAT_1401cc6e0);
  local_88 = *puVar5;
  uStack_84 = puVar5[1];
  uStack_80 = puVar5[2];
  uStack_7c = puVar5[3];
  local_78 = puVar5[4];
  uStack_74 = puVar5[5];
  uStack_70 = puVar5[6];
  uStack_6c = puVar5[7];
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 7;
  *(undefined2 *)puVar5 = 0;
  FUN_140005242(local_60);
  puVar5 = &local_88;
  FUN_14000550c(local_a8,puVar5,0);
  FUN_140007025();
  local_b8 = 0xffff00000000;
  pppuVar7 = local_a8;
  if (7 < local_90) {
    pppuVar7 = (undefined8 ***)local_a8[0];
  }
  local_b0 = FUN_1400dcbb0(pppuVar7,local_60,3,0xffffffff);
  FUN_140007276(&local_b8,local_b0,local_60);
  iVar4 = local_b0;
  local_58 = FUN_140007025();
  local_60[0] = iVar4;
  iVar3 = (int)local_b8;
  if ((int)local_b8 == 0) {
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",local_60,local_a8);
    }
    bVar8 = false;
  }
  else {
    FUN_140007025();
    bVar8 = iVar3 != 1;
  }
  FUN_140005690(local_a8);
  if (bVar8) {
    if (puVar1 != puVar5) {
      if (7 < CONCAT44(uStack_6c,uStack_70)) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      FUN_14000ffc0(puVar1,puVar5,CONCAT44(uStack_74,local_78));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  FUN_140005242(&local_88);
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),lVar2 != 0) & 0xffffffff;
}

