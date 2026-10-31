/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180090c6c */

undefined2 *
FUN_180090c6c(longlong param_1,undefined2 *param_2,undefined2 *param_3,longlong param_4,uint param_5
             )

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0xc0);
  }
  local_50 = param_3;
  if (param_4 != 0 && param_2 != param_3) {
LAB_180090ccc:
    switch(*(undefined4 *)(param_4 + 8)) {
    case 1:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x14:
      goto switchD_180090ce1_caseD_1;
    case 2:
      if ((*(byte *)(param_1 + 0xe1) & 0x10) == 0) goto LAB_180090f8a;
      cVar3 = FUN_180091eea(param_2[-1]);
      puVar7 = local_50;
      if (cVar3 == '\0') {
        param_3 = (undefined2 *)FUN_180092d32(param_2,local_50,&DAT_1802b95ec,&DAT_1802b95f4);
        param_3 = param_3 + (param_3 != puVar7);
        goto LAB_180090f8a;
      }
      break;
    case 3:
      if ((*(byte *)(param_1 + 0xe1) & 0x10) == 0) goto LAB_180090f8a;
      puVar7 = (undefined2 *)FUN_180092d32(param_2,param_3,&DAT_1802b95ec,&DAT_1802b95f4);
      if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
        return puVar7;
      }
      goto LAB_18009102e;
    case 4:
      uVar2 = *(undefined4 *)(param_4 + 0xc);
      cVar3 = FUN_180092258(param_2[-1]);
      param_3 = param_2;
      if (param_2 != local_50) goto LAB_180090f5e;
      break;
    case 5:
      if (param_5 < 0x32) {
        local_68 = CONCAT44(local_68._4_4_,param_5 + 1);
        lVar6 = FUN_180090c6c(param_1,param_2 + 1,param_3,*(undefined8 *)(param_4 + 0x10));
        param_3 = (undefined2 *)(lVar6 + -2);
        goto LAB_180090f8a;
      }
      break;
    case 6:
      lVar6 = *(longlong *)(param_4 + 0x28);
      uVar1 = *(uint *)(param_4 + 0x24);
      local_58 = param_3;
      if ((1 < (ulonglong)uVar1) && (param_3 != *(undefined2 **)(param_1 + 0xd8))) {
        FUN_180092cd3(&local_58,param_1 + 0xd8,uVar1 - 1);
      }
      local_60 = *(undefined4 *)(param_1 + 0xe0);
      local_68 = *(undefined8 *)(param_1 + 200);
      param_3 = (undefined2 *)FUN_180092cee(param_2,local_58,lVar6,lVar6 + (ulonglong)uVar1 * 2);
      if (local_58 == param_3) {
        param_3 = local_50;
      }
      goto LAB_180090f8a;
    case 7:
      goto LAB_180090d80;
    case 10:
      if (param_5 < 0x32) {
        iVar8 = param_5 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar8);
        param_3 = (undefined2 *)
                  FUN_180090c6c(param_1,param_2,param_3,*(undefined8 *)(param_4 + 0x20));
        goto LAB_180090f03;
      }
    default:
      break;
    case 0x10:
      if (*(longlong *)(param_4 + 0x28) == 0) goto switchD_180090ce1_caseD_1;
      if (param_5 < 0x32) {
        do {
          local_58 = param_2;
          FUN_180092d13(&local_58,&local_50,0x200);
          param_3 = local_58;
          lVar6 = param_4;
          if (param_2 == local_58) {
            bVar9 = false;
          }
          else {
            do {
              local_68 = CONCAT44(local_68._4_4_,param_5 + 1);
              param_3 = (undefined2 *)
                        FUN_180090c6c(param_1,param_2,param_3,*(undefined8 *)(lVar6 + 0x10));
              if (*(longlong *)(lVar6 + 0x28) == 0) break;
              lVar6 = *(longlong *)(lVar6 + 0x28);
            } while (param_2 != param_3);
            bVar9 = param_3 != local_58;
          }
        } while ((!bVar9) && (param_2 = param_3, param_3 != local_50));
        goto LAB_180090f8a;
      }
      break;
    case 0x12:
      goto switchD_180090ce1_caseD_12;
    }
  }
switchD_180090ce1_caseD_c:
  param_3 = param_2;
  goto LAB_180090f8a;
switchD_180090ce1_caseD_12:
  if (*(int *)(param_4 + 0x20) < 1) {
    if (param_5 < 0x32) {
      goto LAB_180090d1c;
    }
    goto switchD_180090ce1_caseD_c;
  }
switchD_180090ce1_caseD_1:
  param_4 = *(longlong *)(param_4 + 0x10);
  if (param_4 == 0) goto switchD_180090ce1_caseD_c;
  goto LAB_180090ccc;
  while (param_2 = param_3, param_3 != local_50) {
LAB_180090d1c:
    local_58 = param_2;
    FUN_180092d13(&local_58,&local_50,0x200);
    local_68._0_4_ = param_5 + 1;
    uVar5 = FUN_180090c6c(param_1,param_2,local_58,*(undefined8 *)(param_4 + 0x10));
    local_68 = CONCAT44(local_68._4_4_,param_5 + 1);
    param_3 = (undefined2 *)
              FUN_180090c6c(param_1,param_2,uVar5,
                            *(undefined8 *)(*(longlong *)(param_4 + 0x28) + 0x10));
    if (param_3 != local_58) break;
  }
  goto LAB_180090f8a;
  while( true ) {
    local_68 = CONCAT44(local_68._4_4_,iVar8);
    param_3 = (undefined2 *)FUN_180090c6c(param_1,puVar7,local_50,*(undefined8 *)(param_4 + 0x20));
    if (puVar7 == param_3) break;
LAB_180090f03:
    local_68 = CONCAT44(local_68._4_4_,iVar8);
    puVar7 = (undefined2 *)FUN_180090c6c(param_1,param_3,local_50,*(undefined8 *)(param_4 + 0x10));
    if (puVar7 == param_3) break;
  }
  goto LAB_180090f8a;
  while (param_3 = param_3 + 1, param_2 = param_3, param_3 != local_50) {
LAB_180090d80:
    param_3 = param_2;
    puVar7 = (undefined2 *)FUN_180091fba(param_1,param_4,param_3);
    if (param_3 != puVar7) break;
  }
  goto LAB_180090f8a;
  while (param_3 = param_3 + 1, cVar3 = cVar4, param_3 != local_50) {
LAB_180090f5e:
    cVar4 = FUN_180092258(*param_3);
    if (((cVar3 != cVar4 ^ (byte)uVar2) & 1) != 0) break;
  }
LAB_180090f8a:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
    return param_3;
  }
LAB_18009102e:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
}

