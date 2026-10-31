/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180213970 */

undefined8
FUN_180213970(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 auStack_3c8 [48];
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  int local_368;
  uint uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  uint local_34c;
  undefined8 local_348 [96];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_3c8;
  local_388 = *param_2;
  uStack_384 = param_2[1];
  uStack_380 = param_2[2];
  uStack_37c = param_2[3];
  local_378 = param_2[4];
  uStack_370 = param_2[6];
  uStack_36c = param_2[7];
  local_368 = param_2[8];
  uStack_364 = param_2[9];
  uStack_360 = param_2[10];
  uStack_35c = param_2[0xb];
  local_358 = *(undefined8 *)(param_2 + 0xc);
  uStack_374 = 2;
  if ((param_2[5] == 10) || (param_2[5] == 7)) {
    uStack_374 = 3;
  }
  puVar8 = local_348;
  FUN_180213358(param_1,puVar8,0x20,&local_34c);
  if ((int)local_34c < 0) {
    uVar2 = 0xa2;
  }
  else {
    uVar1 = param_2[10];
    if (local_34c < (uint)param_2[10]) {
      uVar1 = local_34c;
    }
    uVar3 = *param_1;
    uVar5 = param_1[2];
    if ((param_2[5] != 7) && ((ulonglong)(uint)param_2[0xb] != 0)) {
      *(char *)(*param_3 + (ulonglong)(uint)param_2[0xb]) = (char)uVar1;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar7 = uStack_364 & 0xff;
      iVar6 = uVar1 + 1;
      local_398 = uVar5;
      local_390 = uVar3;
      do {
        iVar4 = local_368 + uVar7;
        *param_1 = *puVar8;
        param_1[2] = puVar8[1];
        uVar2 = FUN_180213469(param_1,&local_388,param_3,param_4);
        uVar3 = local_390;
        uVar5 = local_398;
        if ((int)uVar2 != 0) goto LAB_180213ab2;
        puVar8 = puVar8 + 3;
        iVar6 = iVar6 + -1;
        local_368 = iVar4;
      } while (1 < iVar6);
      uVar2 = 0;
    }
LAB_180213ab2:
    *param_1 = uVar3;
    param_1[2] = uVar5;
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_3c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_3c8);
  }
  return uVar2;
}

