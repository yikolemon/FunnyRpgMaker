/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025b80 */

undefined4 * FUN_10025b80(undefined4 *param_1,int *param_2,uint param_3,uint param_4,uint *param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  uint *local_3c;
  uint *local_38;
  undefined1 local_34 [31];
  byte local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  uVar2 = *param_5;
  puVar4 = &local_14;
  switch(uVar2 & 7) {
  case 4:
    pcVar1 = "0123456789ABCDEF";
    if ((uVar2 >> 0xc & 1) == 0) {
      pcVar1 = "0123456789abcdef";
    }
    do {
      *(char *)((int)puVar4 + -1) = pcVar1[param_3 & 0xf];
      puVar4 = (uint *)((int)puVar4 + -1);
      param_3 = param_3 >> 4;
    } while (param_3 != 0);
    if ((uVar2 >> 0xd & 1) != 0) {
      uVar2 = (uint)((uVar2 >> 0xc & 1) == 0) << 0xd | 0x5830;
LAB_10025c3a:
      uVar3 = uVar2 << 8;
      if (param_4 == 0) {
        uVar3 = uVar2;
      }
      param_4 = (uVar3 | param_4) + 0x2000000;
    }
    break;
  case 5:
    iVar5 = 0;
    uVar3 = param_3;
    do {
      *(byte *)((int)puVar4 + -1) = (byte)uVar3 & 7 | 0x30;
      puVar4 = (uint *)((int)puVar4 + -1);
      uVar3 = uVar3 >> 3;
      iVar5 = iVar5 + 1;
    } while (uVar3 != 0);
    if (((uVar2 >> 0xd & 1) != 0) && (param_3 != 0 && (int)param_5[3] <= iVar5)) {
      uVar2 = 0x3000;
      if (param_4 == 0) {
        uVar2 = 0x30;
      }
      param_4 = (uVar2 | param_4) + 0x1000000;
    }
    break;
  case 6:
    do {
      *(byte *)((int)puVar4 + -1) = (byte)param_3 & 1 | 0x30;
      puVar4 = (uint *)((int)puVar4 + -1);
      param_3 = param_3 >> 1;
    } while (param_3 != 0);
    if ((uVar2 >> 0xd & 1) != 0) {
      uVar2 = (uint)((uVar2 >> 0xc & 1) == 0) << 0xd | 0x4230;
      goto LAB_10025c3a;
    }
    break;
  case 7:
    local_44._0_2_ = CONCAT11((char)param_3,(uVar2 & 7) == 1);
    FUN_100274cd(param_1,param_2,param_5,1,1,&local_44);
    goto LAB_10025dbb;
  default:
    puVar4 = (uint *)FUN_1002472e(local_34,param_3,0x20);
  }
  iVar5 = (int)&local_14 - (int)puVar4;
  uVar3 = param_5[2];
  local_48 = param_5[3];
  uVar2 = iVar5 + (param_4 >> 0x18);
  if (local_48 == 0xffffffff && uVar3 == 0) {
    if ((uint)param_2[2] < uVar2 + param_2[1]) {
      (*(code *)param_2[3])(param_2,uVar2 + param_2[1]);
    }
    for (param_4 = param_4 & 0xffffff; param_4 != 0; param_4 = param_4 >> 8) {
      iVar5 = param_2[1];
      uVar2 = iVar5 + 1;
      if ((uint)param_2[2] < uVar2) {
        (*(code *)param_2[3])(param_2,uVar2);
        iVar5 = param_2[1];
        uVar2 = iVar5 + 1;
      }
      param_2[1] = uVar2;
      *(char *)(*param_2 + iVar5) = (char)param_4;
    }
    FUN_1001909c(puVar4,&local_14);
    *param_1 = param_2;
  }
  else {
    if ((*param_5 & 0x38) == 0x20) {
      local_40 = uVar3 - uVar2;
      bVar6 = local_40 != 0;
      if (uVar3 < uVar2) {
        local_40 = 0;
      }
      if (uVar3 >= uVar2 && bVar6) {
        uVar2 = uVar3;
      }
    }
    else {
      local_40 = 0;
      if (local_48 - iVar5 != 0 && iVar5 <= (int)local_48) {
        uVar2 = local_48 + (param_4 >> 0x18);
        local_40 = local_48 - iVar5;
      }
    }
    local_38 = &local_14;
    local_4c = param_4;
    local_44 = param_4;
    local_3c = puVar4;
    FUN_10028028(param_1,param_2,param_5,uVar2,uVar2,&local_44);
  }
LAB_10025dbb:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_4c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

