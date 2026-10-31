/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002112c */

/* WARNING: Removing unreachable block (ram,0x000140021189) */

longlong FUN_14002112c(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  uint local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [8];
  longlong local_98;
  undefined4 local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  FUN_14001a560(param_1 + 4,&local_b8,param_2);
  if (local_a8 == 0) {
    local_58 = CONCAT71(local_58._1_7_,1);
    FUN_14001b296(&local_88,"argument not found");
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(&local_88,&DAT_140ee3c60);
  }
  plVar1 = param_1 + 3;
  if (local_a8 == 0xf) {
    lVar5 = *param_1;
    *param_1 = param_3;
    param_1[1] = param_1[1] + (lVar5 - param_3);
    (*(code *)CONCAT44(uStack_ac,uStack_b0))(CONCAT44(iStack_b4,local_b8),param_1,plVar1);
    lVar5 = *param_1;
    goto switchD_14002129f_caseD_f;
  }
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0x8000;
  uStack_84 = 0x20;
  uStack_80 = 0;
  uStack_7c = 0xffffffff;
  local_68 = 0;
  local_c8 = CONCAT44(local_c8._4_4_,local_a8);
  lVar5 = FUN_140021860(param_3,param_4,&local_88,param_1);
  if ((local_88 & 0x3c0) != 0) {
    FUN_140021cfa(local_88 >> 6 & 3,&uStack_80,&local_78,plVar1);
    FUN_140021cfa(local_88 >> 8 & 3,&uStack_7c,&local_68,plVar1);
  }
  lVar2 = param_1[3];
  lVar3 = param_1[6];
  switch(local_a8) {
  case 1:
    if ((local_88 & 0x4000) != 0) {
      local_58 = CONCAT44(local_58._4_4_,local_b8);
      local_48 = 1;
      cVar4 = FUN_14001b4bd(lVar2,&local_58,&local_88);
      if (cVar4 != '\0') break;
    }
    if ((int)local_b8 < 0) {
      local_b8 = -local_b8;
      uVar6 = 0x100002d00000000;
    }
    else {
      uVar6 = (ulonglong)*(uint *)((longlong)&DAT_1401c8050 + (ulonglong)(local_88 >> 8 & 0xc)) <<
              0x20;
    }
    uVar6 = local_b8 | uVar6;
    goto LAB_140021586;
  case 2:
    if ((local_88 >> 0xe & 1) != 0) {
      local_58 = CONCAT44(local_58._4_4_,local_b8);
      local_48 = 2;
      cVar4 = FUN_14001b4bd(lVar2,&local_58,&local_88);
      if (cVar4 != '\0') break;
    }
    uVar6 = CONCAT44(*(undefined4 *)((longlong)&DAT_1401c8050 + (ulonglong)(local_88 >> 8 & 0xc)),
                     local_b8);
LAB_140021586:
    FUN_14001b6a3(&local_98,lVar2,uVar6,&local_88);
    break;
  case 3:
    if ((local_88 >> 0xe & 1) != 0) {
      local_48 = 3;
      local_58 = CONCAT44(iStack_b4,local_b8);
      cVar4 = FUN_14001b4bd(lVar2,&local_58,&local_88);
      if (cVar4 != '\0') break;
    }
    if (-1 < iStack_b4) goto LAB_1400214ed;
    local_98 = -CONCAT44(iStack_b4,local_b8);
    local_90 = 0x100002d;
    goto LAB_1400214fd;
  case 4:
    if ((local_88 >> 0xe & 1) != 0) {
      local_48 = 4;
      local_58 = CONCAT44(iStack_b4,local_b8);
      cVar4 = FUN_14001b4bd(lVar2,&local_58,&local_88);
      if (cVar4 != '\0') break;
    }
LAB_1400214ed:
    local_98 = CONCAT44(iStack_b4,local_b8);
    local_90 = *(undefined4 *)((longlong)&DAT_1401c8050 + (ulonglong)(local_88 >> 8 & 0xc));
LAB_1400214fd:
    FUN_14002249a(local_a0,lVar2,&local_98,&local_88);
    break;
  default:
    local_58 = CONCAT44(uStack_84,local_88);
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    local_c8 = lVar3;
    FUN_14002274d(&local_98,lVar2);
    break;
  case 7:
    local_c8 = lVar3;
    FUN_14001b3c9(&local_58,lVar2,(undefined1)local_b8,&local_88);
    break;
  case 8:
    local_c8 = lVar3;
    FUN_140022754(&local_58,lVar2,(undefined1)local_b8,&local_88);
    break;
  case 9:
    local_58 = CONCAT44(uStack_84,local_88);
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    local_c8 = lVar3;
    FUN_14002289f(&local_98,lVar2,local_b8,&local_58);
    break;
  case 10:
    local_58 = CONCAT44(uStack_84,local_88);
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    local_c8 = lVar3;
    FUN_14002747f(&local_98,lVar2,CONCAT44(iStack_b4,local_b8),&local_58);
    break;
  case 0xb:
    local_58 = CONCAT44(uStack_84,local_88);
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    local_c8 = lVar3;
    FUN_1400289f7(&local_98,lVar2,CONCAT44(iStack_b4,local_b8),&local_58);
    break;
  case 0xc:
    local_c8 = lVar3;
    FUN_140028d81(&local_58,lVar2,CONCAT44(iStack_b4,local_b8),&local_88);
    break;
  case 0xd:
    local_58 = CONCAT44(iStack_b4,local_b8);
    uStack_50 = uStack_b0;
    uStack_4c = uStack_ac;
    FUN_140028e49(&local_98,lVar2,&local_58,&local_88);
    break;
  case 0xe:
    local_c8 = lVar3;
    thunk_FUN_140020bd9(&local_58,lVar2,CONCAT44(iStack_b4,local_b8),&local_88);
    break;
  case 0xf:
    break;
  }
switchD_14002129f_caseD_f:
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_e8);
  }
  return lVar5;
}

