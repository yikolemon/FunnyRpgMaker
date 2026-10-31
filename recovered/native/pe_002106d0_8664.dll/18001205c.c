/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001205c */

undefined8 FUN_18001205c(undefined8 param_1,undefined8 *param_2,ulonglong param_3,int *param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  byte **local_d0;
  byte local_c5;
  int local_c4;
  byte **local_c0;
  undefined4 local_b8;
  undefined1 local_a9;
  undefined8 *local_a8;
  byte local_9a [2];
  byte *local_98 [4];
  int *local_78;
  int *local_70;
  byte **local_68;
  byte ***local_60;
  char cStack_49;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_f8;
  lVar7 = 0;
  do {
    lVar4 = lVar7;
    (&cStack_49)[lVar4] = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)param_3 & 0xf];
    param_3 = param_3 >> 4;
    lVar7 = lVar4 + -1;
  } while (param_3 != 0);
  lVar8 = -lVar7;
  if (lVar7 == -0x10 || lVar8 < 0x10) {
    thunk_FUN_180006ba5(&cStack_49 + lVar4,lVar8,local_98);
    local_c0 = (byte **)((longlong)local_98 - lVar7);
    local_b8 = 0;
  }
  else {
    local_c0 = local_98 + 2;
    local_b8 = 0x84;
  }
  local_c4 = ((int)local_c0 - (int)local_98) + 2;
  local_9a[0] = 0x30;
  local_9a[1] = 0x78;
  if (((char)param_4[2] == 'P') && (local_9a[0] = 0x30, local_9a[1] = 0x58, local_98 != local_c0)) {
    lVar7 = 0x10;
    if (lVar8 < 0x10) {
      lVar7 = lVar8;
    }
    lVar4 = 0;
    do {
      if ((byte)(*(char *)((longlong)local_98 + lVar4) + 0x9fU) < 0x1a) {
        *(char *)((longlong)local_98 + lVar4) = *(char *)((longlong)local_98 + lVar4) + -0x20;
      }
      lVar4 = lVar4 + 1;
    } while (lVar7 != lVar4);
  }
  local_c5 = *(char *)((longlong)param_4 + 9) == '\0' & *(byte *)((longlong)param_4 + 0xd);
  local_98[2] = local_9a;
  local_98[3] = &local_c5;
  local_78 = &local_c4;
  local_70 = param_4;
  local_68 = local_98;
  local_60 = &local_c0;
  if (local_c5 == 1) {
    bVar6 = false;
    pbVar3 = local_9a;
    do {
      bVar1 = *pbVar3;
      lVar7 = param_2[2];
      uVar5 = lVar7 + 1;
      if ((ulonglong)param_2[3] < uVar5) {
        (**(code **)*param_2)(param_2);
        lVar7 = param_2[2];
        uVar5 = lVar7 + 1;
      }
      param_2[2] = uVar5;
      *(byte *)(param_2[1] + lVar7) = bVar1;
      bVar2 = !bVar6;
      bVar6 = true;
      pbVar3 = local_9a + 1;
    } while (bVar2);
    if ((local_c5 == 1) && (local_c4 < *param_4)) {
      local_a9 = 0x30;
      FUN_18000c300(&local_a8,param_2);
      param_2 = local_a8;
    }
    FUN_18000692b(param_1,local_98,local_c0,param_2);
  }
  else {
    local_d0 = local_98 + 2;
    local_d8 = 2;
    FUN_18001227c(param_1,param_2,local_c4,param_4);
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_f8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_f8);
}

