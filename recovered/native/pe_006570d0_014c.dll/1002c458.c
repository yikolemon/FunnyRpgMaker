/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002c458 */

undefined4 *
FUN_1002c458(undefined4 *param_1,int *param_2,uint param_3,uint param_4,uint param_5,
            undefined4 param_6,uint *param_7)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  uint *local_5c;
  uint *local_58;
  undefined1 local_54 [63];
  byte local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_6c;
  local_68 = *param_7;
  local_6c = param_5;
  puVar2 = &local_14;
  switch(local_68 & 7) {
  case 4:
    pcVar1 = "0123456789ABCDEF";
    if ((local_68 >> 0xc & 1) == 0) {
      pcVar1 = "0123456789abcdef";
    }
    do {
      uVar4 = param_4 << 0x1c | param_3 >> 4;
      *(char *)((int)puVar2 + -1) = pcVar1[param_3 & 0xf];
      puVar2 = (uint *)((int)puVar2 + -1);
      param_4 = param_4 >> 4;
      param_3 = uVar4;
    } while (uVar4 != 0 || param_4 != 0);
    if ((local_68 >> 0xd & 1) != 0) {
      uVar4 = (uint)((local_68 >> 0xc & 1) == 0) << 0xd | 0x5830;
LAB_1002c52b:
      uVar3 = uVar4 << 8;
      if (param_5 == 0) {
        uVar3 = uVar4;
      }
      local_6c = (uVar3 | param_5) + 0x2000000;
    }
    break;
  case 5:
    iVar5 = 0;
    uVar4 = param_3;
    uVar3 = param_4;
    do {
      *(byte *)((int)puVar2 + -1) = (byte)uVar4 & 7 | 0x30;
      puVar2 = (uint *)((int)puVar2 + -1);
      uVar4 = uVar4 >> 3 | uVar3 << 0x1d;
      uVar3 = uVar3 >> 3;
      iVar5 = iVar5 + 1;
    } while (uVar4 != 0 || uVar3 != 0);
    if (((local_68 >> 0xd & 1) != 0) && ((param_3 != 0 || param_4 != 0) && (int)param_7[3] <= iVar5)
       ) {
      uVar4 = 0x3000;
      if (param_5 == 0) {
        uVar4 = 0x30;
      }
      local_6c = (uVar4 | param_5) + 0x1000000;
    }
    break;
  case 6:
    do {
      *(byte *)((int)puVar2 + -1) = (byte)param_3 & 1 | 0x30;
      param_3 = param_3 >> 1 | param_4 << 0x1f;
      puVar2 = (uint *)((int)puVar2 + -1);
      param_4 = param_4 >> 1;
    } while (param_3 != 0 || param_4 != 0);
    if ((local_68 >> 0xd & 1) != 0) {
      uVar4 = (uint)((local_68 >> 0xc & 1) == 0) << 0xd | 0x4230;
      goto LAB_1002c52b;
    }
    break;
  case 7:
    local_64._0_2_ = CONCAT11((char)param_3,(local_68 & 7) == 1);
    FUN_100274cd(param_1,param_2,param_7,1,1,&local_64);
    goto LAB_1002c6d6;
  default:
    puVar2 = (uint *)FUN_100255fd(local_54,param_3,param_4,0x40);
  }
  iVar5 = (int)&local_14 - (int)puVar2;
  uVar3 = param_7[2];
  local_68 = param_7[3];
  uVar4 = iVar5 + (local_6c >> 0x18);
  if (local_68 == 0xffffffff && uVar3 == 0) {
    if ((uint)param_2[2] < uVar4 + param_2[1]) {
      (*(code *)param_2[3])(param_2,uVar4 + param_2[1]);
    }
    for (uVar4 = local_6c & 0xffffff; uVar4 != 0; uVar4 = uVar4 >> 8) {
      iVar5 = param_2[1];
      uVar3 = iVar5 + 1;
      if ((uint)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2,uVar3);
        iVar5 = param_2[1];
        uVar3 = iVar5 + 1;
      }
      param_2[1] = uVar3;
      *(char *)(*param_2 + iVar5) = (char)uVar4;
    }
    FUN_1001909c(puVar2,&local_14);
    *param_1 = param_2;
  }
  else {
    if ((*param_7 & 0x38) == 0x20) {
      bVar6 = uVar3 < uVar4;
      local_60 = uVar3 - uVar4;
      if (!bVar6 && local_60 != 0) {
        uVar4 = uVar3;
      }
      if (bVar6) {
        local_60 = 0;
      }
    }
    else {
      local_60 = 0;
      if (local_68 - iVar5 != 0 && iVar5 <= (int)local_68) {
        uVar4 = local_68 + (local_6c >> 0x18);
        local_60 = local_68 - iVar5;
      }
    }
    local_58 = &local_14;
    local_64 = local_6c;
    local_5c = puVar2;
    FUN_10028028(param_1,param_2,param_7,uVar4,uVar4,&local_64);
  }
LAB_1002c6d6:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_6c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

