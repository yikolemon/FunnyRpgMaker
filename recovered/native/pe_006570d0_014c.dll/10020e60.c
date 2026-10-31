/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10020e60 */

byte * __thiscall FUN_10020e60(int param_1,byte *param_2,byte *param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  int local_20;
  int local_1c;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar5 = param_4;
  if (param_4 == 0) {
    iVar5 = *(int *)(param_1 + 100);
  }
  if (iVar5 != 0 && param_2 != param_3) {
LAB_10020ea0:
    switch(*(undefined4 *)(iVar5 + 4)) {
    case 1:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x14:
      goto switchD_10020ead_caseD_1;
    case 2:
      pbVar7 = param_3;
      if (((*(byte *)(param_1 + 0x75) & 0x10) != 0) &&
         (cVar3 = FUN_1001b19b((int)(char)param_2[-1]), pbVar7 = param_2, cVar3 == '\0')) {
        pbVar7 = (byte *)FUN_1002126d(param_2,param_3,&DAT_1029011c,&DAT_1029011e,
                                      (uint)local_18 & 0xff);
        pbVar7 = pbVar7 + (pbVar7 != param_3);
      }
      goto LAB_100210fd;
    case 3:
      pbVar7 = param_3;
      if ((*(byte *)(param_1 + 0x75) & 0x10) == 0) goto LAB_100210fd;
      pbVar7 = (byte *)FUN_1002126d(param_2,param_3,&DAT_1029011c,&DAT_1029011e,
                                    (uint)local_18 & 0xff);
      if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
        return pbVar7;
      }
      goto LAB_1002118a;
    case 4:
      cVar3 = (&DAT_1028f9d4)[param_2[-1]];
      goto LAB_100210d4;
    case 5:
      if (param_5 < 0x32) {
        iVar5 = FUN_10020e60(param_2 + 1,param_3,*(undefined4 *)(iVar5 + 0xc),param_5 + 1);
        pbVar7 = (byte *)(iVar5 + -1);
        goto LAB_100210fd;
      }
      break;
    case 6:
      uVar2 = *(uint *)(iVar5 + 0x18);
      iVar5 = *(int *)(iVar5 + 0x1c);
      local_18 = param_3;
      if ((1 < uVar2) && (param_3 != *(byte **)(param_1 + 0x70))) {
        FUN_100211e8(&local_18,param_1 + 0x70,uVar2 - 1,0);
      }
      pbVar7 = (byte *)FUN_10021215(param_2,local_18,iVar5,uVar2 + iVar5,
                                    *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74))
      ;
      if (local_18 == pbVar7) {
        pbVar7 = param_3;
      }
      goto LAB_100210fd;
    case 7:
      goto LAB_10020f38;
    case 10:
      if (param_5 < 0x32) {
        local_20 = param_5 + 1;
        pbVar7 = (byte *)FUN_10020e60(param_2,param_3,*(undefined4 *)(iVar5 + 0x14),local_20);
        goto LAB_10021095;
      }
    default:
      break;
    case 0x10:
      if (*(int *)(iVar5 + 0x18) == 0) goto switchD_10020ead_caseD_1;
      if (param_5 < 0x32) {
        local_20 = param_5 + 1;
        local_1c = param_1;
        do {
          local_18 = param_2;
          FUN_1002124e(&local_18,&param_3,0x200);
          pbVar7 = local_18;
          iVar8 = iVar5;
          if (param_2 == local_18) {
            bVar9 = false;
            param_2 = local_18;
          }
          else {
            do {
              pbVar7 = (byte *)FUN_10020e60(param_2,pbVar7,*(undefined4 *)(iVar8 + 0xc),local_20);
              if (*(int *)(iVar8 + 0x18) == 0) break;
              iVar8 = *(int *)(iVar8 + 0x18);
            } while (param_2 != pbVar7);
            bVar9 = pbVar7 != local_18;
            param_2 = pbVar7;
          }
          pbVar7 = param_2;
        } while ((!bVar9) && (param_2 != param_3));
        goto LAB_100210fd;
      }
      break;
    case 0x12:
      goto switchD_10020ead_caseD_12;
    }
  }
switchD_10020ead_caseD_c:
  pbVar7 = param_2;
  goto LAB_100210fd;
switchD_10020ead_caseD_12:
  if (*(int *)(iVar5 + 0x14) < 1) {
    if (param_5 < 0x32) {
      local_20 = param_5 + 1;
      goto LAB_10020ee1;
    }
    goto switchD_10020ead_caseD_c;
  }
switchD_10020ead_caseD_1:
  iVar5 = *(int *)(iVar5 + 0xc);
  if (iVar5 == 0) goto switchD_10020ead_caseD_c;
  goto LAB_10020ea0;
  while (param_2 != param_3) {
LAB_10020ee1:
    local_18 = param_2;
    FUN_1002124e(&local_18,&param_3,0x200);
    iVar8 = local_20;
    uVar4 = FUN_10020e60(param_2,local_18,*(undefined4 *)(iVar5 + 0xc),local_20);
    param_2 = (byte *)FUN_10020e60(param_2,uVar4,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 0xc),iVar8
                                  );
    pbVar7 = param_2;
    if (param_2 != local_18) break;
  }
  goto LAB_100210fd;
  while (pbVar7 = (byte *)FUN_10020e60(pbVar6,param_3,*(undefined4 *)(iVar5 + 0x14),local_20),
        pbVar6 != pbVar7) {
LAB_10021095:
    pbVar6 = (byte *)FUN_10020e60(pbVar7,param_3,*(undefined4 *)(iVar5 + 0xc),local_20);
    if (pbVar6 == pbVar7) break;
  }
  goto LAB_100210fd;
  while (param_2 = param_2 + 1, pbVar7 = param_2, param_2 != param_3) {
LAB_10020f38:
    pbVar6 = (byte *)FUN_1001b28c(iVar5,param_2);
    pbVar7 = param_2;
    if (param_2 != pbVar6) break;
  }
  goto LAB_100210fd;
  while (param_2 = param_2 + 1, pbVar7 = param_3, cVar3 = (&DAT_1028f9d4)[bVar1], param_2 != param_3
        ) {
LAB_100210d4:
    bVar1 = *param_2;
    pbVar7 = param_2;
    if (((cVar3 != (&DAT_1028f9d4)[bVar1] ^ (byte)*(undefined4 *)(iVar5 + 8)) & 1) != 0) break;
  }
LAB_100210fd:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return pbVar7;
  }
LAB_1002118a:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

