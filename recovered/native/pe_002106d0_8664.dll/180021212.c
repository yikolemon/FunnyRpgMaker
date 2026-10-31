/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180021212 */

byte * FUN_180021212(longlong param_1,byte *param_2,byte *param_3,longlong param_4,uint param_5)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  byte *local_58;
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0xc0);
  }
  local_50 = param_3;
  if (param_4 != 0 && param_2 != param_3) {
    do {
      uVar6 = *(int *)(param_4 + 8) - 1;
      if (0x13 < uVar6) break;
      switch(*(int *)(param_4 + 8)) {
      case 2:
        if ((*(byte *)(param_1 + 0xe1) & 0x10) == 0) goto LAB_180021527;
        cVar2 = FUN_18001af89(CONCAT71((int7)((ulonglong)
                                              ((longlong)&switchD_180021287::switchdataD_1802b6230 +
                                              (longlong)
                                              (int)(&switchD_180021287::switchdataD_1802b6230)
                                                   [uVar6]) >> 8),param_2[-1]));
        pbVar5 = local_50;
        if (cVar2 == '\0') {
          param_3 = (byte *)FUN_18002162c(param_2,local_50,&DAT_1802b199c,&DAT_1802b199e);
          param_3 = param_3 + (param_3 != pbVar5);
          goto LAB_180021527;
        }
        goto switchD_180021287_caseD_c;
      case 3:
        if ((*(byte *)(param_1 + 0xe1) & 0x10) == 0) goto LAB_180021527;
        pbVar5 = (byte *)FUN_18002162c(param_2,param_3,&DAT_1802b199c,&DAT_1802b199e);
        if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
          return pbVar5;
        }
        goto LAB_1800215cb;
      case 4:
        cVar2 = (&DAT_1802b1130)[param_2[-1]];
        goto LAB_1800214fb;
      case 5:
        if (param_5 < 0x32) {
          local_68 = CONCAT44(local_68._4_4_,param_5 + 1);
          lVar4 = FUN_180021212(param_1,param_2 + 1,param_3,*(undefined8 *)(param_4 + 0x10));
          param_3 = (byte *)(lVar4 + -1);
          goto LAB_180021527;
        }
        goto switchD_180021287_caseD_c;
      case 6:
        lVar4 = *(longlong *)(param_4 + 0x28);
        uVar6 = *(uint *)(param_4 + 0x24);
        local_58 = param_3;
        if ((1 < (ulonglong)uVar6) && (param_3 != *(byte **)(param_1 + 0xd8))) {
          FUN_1800215d9(&local_58,param_1 + 0xd8,uVar6 - 1);
        }
        local_60 = *(undefined4 *)(param_1 + 0xe0);
        local_68 = *(undefined8 *)(param_1 + 200);
        param_3 = (byte *)FUN_1800215f0(param_2,local_58,lVar4,(ulonglong)uVar6 + lVar4);
        if (local_58 == param_3) {
          param_3 = local_50;
        }
        goto LAB_180021527;
      case 7:
        param_3 = param_2;
        goto LAB_180021326;
      case 10:
        if (param_5 < 0x32) {
          iVar7 = param_5 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar7);
          param_3 = (byte *)FUN_180021212(param_1,param_2,param_3,*(undefined8 *)(param_4 + 0x20));
          goto LAB_1800214a7;
        }
      case 0xc:
      case 0xf:
      case 0x13:
        goto switchD_180021287_caseD_c;
      case 0x10:
        if (*(longlong *)(param_4 + 0x28) == 0) break;
        if (param_5 < 0x32) {
          param_3 = param_2;
          do {
            local_58 = param_3;
            FUN_180021611(&local_58,&local_50,0x200);
            pbVar5 = local_58;
            lVar4 = param_4;
            if (param_3 == local_58) {
              bVar8 = false;
              param_3 = local_58;
            }
            else {
              do {
                local_68 = CONCAT44(local_68._4_4_,param_5 + 1);
                pbVar5 = (byte *)FUN_180021212(param_1,param_3,pbVar5,*(undefined8 *)(lVar4 + 0x10))
                ;
                if (*(longlong *)(lVar4 + 0x28) == 0) break;
                lVar4 = *(longlong *)(lVar4 + 0x28);
              } while (param_3 != pbVar5);
              bVar8 = pbVar5 != local_58;
              param_3 = pbVar5;
            }
          } while ((!bVar8) && (param_3 != local_50));
          goto LAB_180021527;
        }
        goto switchD_180021287_caseD_c;
      case 0x12:
        if (*(int *)(param_4 + 0x20) < 1) {
          if (param_5 < 0x32) {
            param_3 = param_2;
            goto LAB_1800212c2;
          }
          goto switchD_180021287_caseD_c;
        }
      }
      param_4 = *(longlong *)(param_4 + 0x10);
    } while (param_4 != 0);
  }
switchD_180021287_caseD_c:
  param_3 = param_2;
LAB_180021527:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
    return param_3;
  }
LAB_1800215cb:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  while (param_3 != local_50) {
LAB_1800212c2:
    local_58 = param_3;
    FUN_180021611(&local_58,&local_50,0x200);
    local_68._0_4_ = param_5 + 1;
    uVar3 = FUN_180021212(param_1,param_3,local_58,*(undefined8 *)(param_4 + 0x10));
    local_68 = CONCAT44(local_68._4_4_,param_5 + 1);
    param_3 = (byte *)FUN_180021212(param_1,param_3,uVar3,
                                    *(undefined8 *)(*(longlong *)(param_4 + 0x28) + 0x10));
    if (param_3 != local_58) break;
  }
  goto LAB_180021527;
  while( true ) {
    local_68 = CONCAT44(local_68._4_4_,iVar7);
    param_3 = (byte *)FUN_180021212(param_1,pbVar5,local_50,*(undefined8 *)(param_4 + 0x20));
    if (pbVar5 == param_3) break;
LAB_1800214a7:
    local_68 = CONCAT44(local_68._4_4_,iVar7);
    pbVar5 = (byte *)FUN_180021212(param_1,param_3,local_50,*(undefined8 *)(param_4 + 0x10));
    if (pbVar5 == param_3) break;
  }
  goto LAB_180021527;
  while (param_3 = param_3 + 1, param_3 != local_50) {
LAB_180021326:
    pbVar5 = (byte *)FUN_18001b038(param_1,param_4,param_3);
    if (param_3 != pbVar5) break;
  }
  goto LAB_180021527;
  while (param_2 = param_2 + 1, cVar2 = (&DAT_1802b1130)[bVar1], param_2 != param_3) {
LAB_1800214fb:
    bVar1 = *param_2;
    if (((cVar2 != (&DAT_1802b1130)[bVar1] ^ (byte)*(undefined4 *)(param_4 + 0xc)) & 1) != 0)
    goto switchD_180021287_caseD_c;
  }
  goto LAB_180021527;
}

