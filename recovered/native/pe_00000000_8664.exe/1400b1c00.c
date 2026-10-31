/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b1c00 */

undefined4 FUN_1400b1c00(undefined8 param_1,float *param_2,uint param_3)

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
  
  lVar1 = DAT_140f2a910;
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_140081f3e(param_1,0);
  if (cVar2 == '\0') {
    *(undefined4 *)(lVar1 + 0x2030) = 0;
    uVar6 = 0;
    goto LAB_1400b1e21;
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
    local_70 = DAT_140211280;
    if ((*(uint *)(lVar1 + 0x2030) & 2) == 0) {
      local_58[0] = (ulonglong)(uint)(param_2[2] - *param_2);
LAB_1400b1cf0:
      uVar6 = FUN_1400b1e57(uVar4);
      local_70 = CONCAT44(uVar6,(undefined4)local_70);
    }
    else {
      if (*(float *)(lVar1 + 0x2054) <= 0.0) {
        local_58[0] = (ulonglong)(uint)(param_2[2] - *param_2);
      }
      if (*(float *)(lVar1 + 0x2058) <= 0.0) goto LAB_1400b1cf0;
    }
    FUN_14008fdd9(local_58,&local_70,0,0);
    param_3 = uVar5;
  }
  else {
    uVar6 = FUN_14007b71f(*(undefined4 *)(lVar1 + 0x2078));
    *(undefined4 *)(lVar1 + 0x2078) = uVar6;
  }
  FUN_140077d91(local_58,0x10,"##Combo_%02d",*(undefined4 *)(lVar1 + 0x27d8));
  lVar3 = FUN_14008ac08(local_58);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10a) == '\x01')) {
    FUN_14008ac21(local_60,lVar3);
    *(uint *)(lVar3 + 0x124) = (uint)((param_3 & 1) == 0) * 3;
    FUN_140094faa(&local_70,lVar3);
    local_80 = CONCAT44(param_2[3],*param_2);
    local_88 = 1;
    local_98 = &local_70;
    local_90 = param_2;
    FUN_140094c01(local_78,&local_80,local_60,lVar3 + 0x124);
    local_80 = 0;
    FUN_14008fda3(local_78,0,&local_80);
  }
  FUN_14007ac4d(2,*(undefined4 *)(lVar1 + 0xdf4));
  uVar6 = FUN_140085d7e(local_58,0,0x4000147);
  FUN_14007af87(1);
  if ((char)uVar6 == '\0') {
    FUN_1400946ab();
  }
  else {
    *(int *)(lVar1 + 0x27d8) = *(int *)(lVar1 + 0x27d8) + 1;
  }
LAB_1400b1e21:
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_b8)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_b8);
}

