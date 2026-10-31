/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140060fac */

undefined8 FUN_140060fac(ulonglong *param_1,undefined8 *param_2,longlong *param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  undefined1 auStack_3c8 [48];
  ulonglong local_398;
  ulonglong local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  uint local_34c;
  ulonglong local_348 [96];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_3c8;
  local_388 = *param_2;
  uStack_380 = param_2[1];
  uStack_370 = param_2[3];
  local_368 = param_2[4];
  uStack_360 = param_2[5];
  local_358 = param_2[6];
  local_378 = (undefined4)param_2[2];
  _local_378 = CONCAT44(2,local_378);
  if ((*(int *)((longlong)param_2 + 0x14) == 10) || (*(int *)((longlong)param_2 + 0x14) == 7)) {
    _local_378 = CONCAT44(3,local_378);
  }
  puVar8 = local_348;
  FUN_140060994(param_1,puVar8,0x20,(int *)&local_34c);
  if ((int)local_34c < 0) {
    uVar2 = 0xa2;
  }
  else {
    uVar1 = *(uint *)(param_2 + 5);
    if (local_34c < *(uint *)(param_2 + 5)) {
      uVar1 = local_34c;
    }
    uVar3 = *param_1;
    uVar5 = param_1[2];
    if ((*(int *)((longlong)param_2 + 0x14) != 7) &&
       ((ulonglong)*(uint *)((longlong)param_2 + 0x2c) != 0)) {
      *(char *)(*param_3 + (ulonglong)*(uint *)((longlong)param_2 + 0x2c)) = (char)uVar1;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar7 = (uint)local_368._4_1_;
      iVar6 = uVar1 + 1;
      iVar4 = (int)local_368;
      local_398 = uVar5;
      local_390 = uVar3;
      do {
        iVar4 = iVar4 + uVar7;
        *param_1 = *puVar8;
        param_1[2] = puVar8[1];
        uVar2 = FUN_140060aa5((longlong *)param_1,(longlong)&local_388,param_3,(ulonglong)param_4);
        uVar3 = local_390;
        uVar5 = local_398;
        if ((int)uVar2 != 0) goto LAB_1400610ee;
        local_368 = CONCAT44(local_368._4_4_,iVar4);
        puVar8 = puVar8 + 3;
        iVar6 = iVar6 + -1;
      } while (1 < iVar6);
      uVar2 = 0;
    }
LAB_1400610ee:
    *param_1 = uVar3;
    param_1[2] = uVar5;
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_3c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_3c8);
  }
  return uVar2;
}

