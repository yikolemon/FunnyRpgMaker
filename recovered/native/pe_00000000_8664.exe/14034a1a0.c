/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14034a1a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14034a1a0(undefined8 param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  float *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_60 [8];
  ulonglong local_58 [3];
  ulonglong local_40;
  
  lVar1 = DAT_14062a630;
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_14031a0f6(param_1,0);
  if (cVar2 == '\0') {
    *(undefined4 *)(lVar1 + 0x2030) = 0;
    uVar6 = 0;
    goto LAB_14034a3c1;
  }
  if ((*(uint *)(lVar1 + 0x2030) & 0x10) == 0) {
    uVar5 = param_3 | 4;
    if ((param_3 & 0x1e) != 0) {
      uVar5 = param_3;
    }
    uVar4 = 8;
    if (((uVar5 & 4) == 0) && (uVar4 = 4, (uVar5 & 2) == 0)) {
      uVar4 = -(uint)((uVar5 & 8) == 0) | 0x14;
    }
    local_58[0] = 0;
    local_70 = DAT_1404ef9d0;
    if ((*(uint *)(lVar1 + 0x2030) & 2) == 0) {
      local_58[0] = (ulonglong)(uint)(param_2[2] - *param_2);
LAB_14034a290:
      uVar6 = FUN_14034a3f7(uVar4);
      local_70 = CONCAT44(uVar6,(undefined4)local_70);
    }
    else {
      if (*(float *)(lVar1 + 0x2054) <= 0.0) {
        local_58[0] = (ulonglong)(uint)(param_2[2] - *param_2);
      }
      if (*(float *)(lVar1 + 0x2058) <= 0.0) goto LAB_14034a290;
    }
    FUN_140327f91(local_58,&local_70,0,0);
    param_3 = uVar5;
  }
  else {
    uVar6 = FUN_140313933(*(undefined4 *)(lVar1 + 0x2078));
    *(undefined4 *)(lVar1 + 0x2078) = uVar6;
  }
  FUN_14030ffa5(local_58,0x10,
                "_items,weapons:$gameParty._weapons,armors:$gameParty._armors,switches:$gameSwitches._data,variables:$gameVariables._data"
                ,*(undefined4 *)(lVar1 + 0x27d8));
  lVar3 = FUN_140322dc0(local_58);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10a) == '\x01')) {
    FUN_140322dd9(local_60,lVar3);
    *(uint *)(lVar3 + 0x124) = (uint)((param_3 & 1) == 0) * 3;
    FUN_14032d1be(&local_70,lVar3);
    local_80 = CONCAT44(param_2[3],*param_2);
    local_88 = 1;
    local_98 = &local_70;
    local_90 = param_2;
    FUN_14032ce15(local_78,&local_80,local_60,lVar3 + 0x124);
    local_80 = 0;
    FUN_140327f5b(local_78,0,&local_80);
  }
  FUN_140312e61(2,*(undefined4 *)(lVar1 + 0xdf4));
  uVar6 = FUN_14031df36(local_58,0,0x4000147);
  FUN_14031319b(1);
  if ((char)uVar6 == '\0') {
    FUN_14032c8bf();
  }
  else {
    *(int *)(lVar1 + 0x27d8) = *(int *)(lVar1 + 0x27d8) + 1;
  }
LAB_14034a3c1:
  if (ram0x000140613b10 == (local_40 ^ (ulonglong)auStack_b8)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_40 ^ (ulonglong)auStack_b8);
}

