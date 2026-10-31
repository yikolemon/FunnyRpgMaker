/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002af04 */

/* WARNING: Removing unreachable block (ram,0x1002afdd) */

int __thiscall FUN_1002af04(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_6c;
  uint local_68;
  code *local_64;
  int local_60;
  undefined1 local_5c [4];
  uint local_58;
  code *pcStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  code *pcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar8 = param_1[7];
  if ((int)uVar8 < 0) {
    if (param_1[6] <= (int)param_2) {
LAB_1002afcb:
      local_48 = CONCAT31(local_48._1_3_,1);
      FUN_10025774();
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(&local_38,&DAT_103607ac);
    }
    iVar1 = param_1[8];
    iVar6 = param_2 * 0x10;
    local_6c = *(uint *)(iVar1 + iVar6);
    local_64 = *(code **)(iVar1 + 4 + iVar6);
    uVar7 = *(uint *)(iVar1 + 8 + iVar6);
    if (uVar7 == 0) goto LAB_1002afcb;
  }
  else {
    if (0xe < param_2) goto LAB_1002afcb;
    bVar5 = (byte)(param_2 * 4);
    bVar2 = bVar5 & 0x1f;
    uVar7 = uVar8 >> (bVar5 & 0x1f);
    if ((param_2 * 4 & 0x20) == 0) {
      uVar7 = (uint)param_1[6] >> bVar2 | uVar8 << 0x20 - bVar2;
    }
    uVar7 = uVar7 & 0xf;
    if (uVar7 == 0) goto LAB_1002afcb;
    local_6c = *(uint *)(param_1[8] + param_2 * 8);
    local_64 = *(code **)(param_1[8] + 4 + param_2 * 8);
  }
  local_68 = local_6c >> 8;
  if (uVar7 == 0xf) {
    iVar1 = *param_1;
    *param_1 = param_3;
    param_1[1] = param_1[1] + (iVar1 - param_3);
    (*local_64)(local_6c & 0xff | local_68 << 8,param_1,param_1 + 4);
    local_60 = *param_1;
    goto switchD_1002b073_caseD_f;
  }
  local_1c = 0;
  local_24 = 0;
  local_38 = 0x8000;
  uStack_34 = 0x20;
  uStack_30 = 0;
  uStack_2c = 0xffffffff;
  local_28 = 0;
  local_60 = FUN_1002b710(param_3,param_4,&local_38,param_1,uVar7);
  if ((local_38 & 0x3c0) != 0) {
    FUN_1002bca8(local_38 >> 6 & 3,&uStack_30,&local_28,param_1 + 4);
    FUN_1002bca8(local_38 >> 8 & 3,&uStack_2c,(int)&local_24 + 4,param_1 + 4);
  }
  iVar1 = param_1[4];
  iVar6 = param_1[10];
  switch(uVar7) {
  case 1:
    uVar8 = local_6c & 0xff | local_68 << 8;
    if ((local_38 & 0x4000) != 0) {
      uStack_40 = 1;
      local_48 = uVar8;
      cVar3 = FUN_100259b2(iVar1,uVar8,pcStack_44,1,uStack_3c,&local_38,iVar6);
      if (cVar3 != '\0') break;
    }
    if ((int)(local_68 << 8) < 0) {
      uVar8 = -uVar8;
      uVar4 = 0x100002d;
    }
    else {
      uVar4 = *(undefined4 *)((int)&DAT_1028f244 + (local_38 >> 8 & 0xc));
    }
    goto LAB_1002b407;
  case 2:
    uVar8 = local_6c & 0xff | local_68 << 8;
    if ((local_38 >> 0xe & 1) != 0) {
      uStack_40 = 2;
      local_48 = uVar8;
      cVar3 = FUN_100259b2(iVar1,uVar8,pcStack_44,2,uStack_3c,&local_38,iVar6);
      if (cVar3 != '\0') break;
    }
    uVar4 = *(undefined4 *)((int)&DAT_1028f244 + (local_38 >> 8 & 0xc));
LAB_1002b407:
    FUN_10025b80(&local_58,iVar1,uVar8,uVar4,&local_38);
    break;
  case 3:
    uVar8 = local_6c & 0xff | local_68 << 8;
    if ((local_38 >> 0xe & 1) != 0) {
      pcStack_44 = local_64;
      uStack_40 = 3;
      local_48 = uVar8;
      cVar3 = FUN_100259b2(iVar1,uVar8,local_64,3,uStack_3c,&local_38,iVar6);
      if (cVar3 != '\0') break;
    }
    if ((int)local_64 < 0) {
      local_58 = -uVar8;
      pcStack_54 = (code *)(-(uint)(uVar8 != 0) - (int)local_64);
      uStack_50 = 0x100002d;
    }
    else {
      uStack_50 = *(undefined4 *)((int)&DAT_1028f244 + (local_38 >> 8 & 0xc));
      local_58 = uVar8;
      pcStack_54 = local_64;
    }
    goto LAB_1002b442;
  case 4:
    uVar8 = local_6c & 0xff | local_68 << 8;
    if ((local_38 >> 0xe & 1) != 0) {
      pcStack_44 = local_64;
      uStack_40 = 4;
      local_48 = uVar8;
      cVar3 = FUN_100259b2(iVar1,uVar8,local_64,4,uStack_3c,&local_38,iVar6);
      if (cVar3 != '\0') break;
    }
    uStack_50 = *(undefined4 *)((int)&DAT_1028f244 + (local_38 >> 8 & 0xc));
    pcStack_54 = local_64;
    local_58 = uVar8;
LAB_1002b442:
    FUN_1002c458(local_5c,iVar1,local_58,pcStack_54,uStack_50,uStack_4c,&local_38);
    break;
  default:
    FUN_10006af4(&local_48,iVar1,local_58 & 0xff,local_38,uStack_34,uStack_30,uStack_2c,iVar6);
    break;
  case 7:
    FUN_100258cd(&local_48,iVar1,local_6c & 0xff,&local_38,iVar6);
    break;
  case 8:
    FUN_1002c70c(&local_48,iVar1,(int)(char)local_6c,&local_38,iVar6);
    break;
  case 9:
    FUN_1002c830(&local_48,iVar1,local_6c & 0xff | local_68 << 8,local_38,uStack_34,uStack_30,
                 uStack_2c,iVar6);
    break;
  case 10:
    FUN_10030ec9(&local_48,iVar1,local_6c & 0xff | local_68 << 8,local_64,local_38,uStack_34,
                 uStack_30,uStack_2c,iVar6);
    break;
  case 0xb:
    FUN_100321a6(&local_48,iVar1,local_6c & 0xff | local_68 << 8,local_64,local_38,uStack_34,
                 uStack_30,uStack_2c,iVar6);
    break;
  case 0xc:
    FUN_10032542(&local_48,iVar1,local_6c & 0xff | local_68 << 8,&local_38,iVar6);
    break;
  case 0xd:
    FUN_100325e4(&local_48,iVar1,local_6c & 0xff | local_68 << 8,local_64,&local_38);
    break;
  case 0xe:
    thunk_FUN_1002aaaa(&local_48,iVar1,local_6c & 0xff | local_68 << 8,&local_38,iVar6);
    break;
  case 0xf:
    break;
  }
switchD_1002b073_caseD_f:
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_60;
}

