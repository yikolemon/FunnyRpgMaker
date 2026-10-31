/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10028267 */

undefined4 * FUN_10028267(undefined4 *param_1,int *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  int *piStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined3 uStack_1b;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_54;
  iVar1 = FUN_10268ff0((double)param_3);
  if ((uint)ABS(param_3) < 0x7f800000) {
    local_54 = (uint)(iVar1 != 0);
    uVar13 = FUN_100286cd();
    uVar5 = (uint)uVar13;
    iVar9 = 0x1f;
    if ((uVar5 | 1) != 0) {
      for (; (uVar5 | 1) >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar10 = *(int *)(&DAT_102902d4 + iVar9 * 8) +
             (uint)CARRY4(uVar5,*(uint *)(&DAT_102902d0 + iVar9 * 8));
    iVar9 = (int)((ulonglong)uVar13 >> 0x20) + *(int *)(&DAT_102902d4 + iVar9 * 8) +
            (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar9 * 8),uVar5);
    local_3c = uVar13;
    if (iVar9 + 3U < 0xb) {
      local_24 = 0x8000;
      local_20 = 0x20;
      local_1f = 0;
      uStack_1b = 0;
      local_18 = 0xffffffff;
      FUN_10028a37(param_1,param_2,&local_3c,iVar10,0x2e,&local_24,local_54,0);
    }
    else {
      local_44 = iVar9 - 1;
      local_4c = 1 - iVar9;
      if (0 < iVar9) {
        local_4c = local_44;
      }
      uVar7 = (uint)(iVar10 != 1);
      iVar2 = uVar7 + local_54 + iVar10;
      local_50 = (uint)(99 < (int)local_4c) + iVar2 + 4;
      iVar4 = param_2[1];
      uVar12 = param_2[2];
      uVar3 = iVar2 + (uint)(99 < (int)local_4c) + iVar4 + 4;
      local_54 = uVar7;
      local_48 = iVar10;
      if (uVar12 < uVar3) {
        (*(code *)param_2[3])(param_2,uVar3);
        iVar4 = param_2[1];
        uVar12 = param_2[2];
        uVar3 = local_50 + iVar4;
        if (uVar3 <= uVar12) goto LAB_1002841b;
LAB_10028467:
        (*(code *)param_2[3])(param_2,uVar3);
      }
      else {
LAB_1002841b:
        iVar10 = local_48;
        param_2[1] = uVar3;
        if (*param_2 != 0) {
          pcVar11 = (char *)(*param_2 + iVar4);
          if (iVar1 != 0) {
            *pcVar11 = '-';
            pcVar11 = pcVar11 + 1;
          }
          if ((char)local_54 == '\0') {
            cVar8 = (char)uVar13 + '0';
            pcVar6 = pcVar11;
          }
          else {
            FUN_1002472e(pcVar11,uVar5,local_48 + 1);
            cVar8 = pcVar11[1];
            pcVar11[1] = '.';
            pcVar6 = pcVar11 + iVar10;
          }
          *pcVar11 = cVar8;
          *(ushort *)(pcVar6 + 1) = (ushort)(iVar9 < 1) * 0x200 + 0x2b65;
          if ((int)local_4c < 100) {
            pcVar6 = pcVar6 + 3;
            uVar5 = local_4c;
          }
          else {
            pcVar6[3] = (char)(local_4c / 100) + '0';
            pcVar6 = pcVar6 + 4;
            uVar5 = local_4c % 100;
          }
          *(undefined2 *)pcVar6 = *(undefined2 *)(&DAT_102903d0 + uVar5 * 2);
          FUN_10024a28(param_1,pcVar6 + 2,param_2);
          if (DAT_10388d00 == (local_14 ^ (uint)&local_54)) {
            return param_1;
          }
          goto LAB_10028616;
        }
        uVar3 = uVar3 + local_50;
        if (uVar12 < uVar3) goto LAB_10028467;
      }
      iVar9 = local_48;
      if (iVar1 != 0) {
        iVar1 = param_2[1];
        uVar12 = iVar1 + 1;
        if ((uint)param_2[2] < uVar12) {
          (*(code *)param_2[3])(param_2,uVar12);
          iVar1 = param_2[1];
          uVar12 = iVar1 + 1;
        }
        param_2[1] = uVar12;
        *(undefined1 *)(*param_2 + iVar1) = 0x2d;
      }
      if ((char)local_54 == '\0') {
        FUN_1002472e(&local_24,uVar5,iVar9);
        uVar5 = (int)&local_24 + iVar9;
      }
      else {
        local_54 = (int)&local_24 + iVar9 + 1;
        local_50 = iVar9 - 1;
        uVar12 = local_54;
        if (2 < iVar9) {
          uVar3 = (local_50 >> 1) + 1;
          uVar7 = uVar5;
          do {
            uVar5 = uVar7 / 100;
            *(undefined2 *)(uVar12 - 2) = *(undefined2 *)(&DAT_102903d0 + (uVar7 % 100) * 2);
            uVar12 = uVar12 - 2;
            uVar3 = uVar3 - 1;
            uVar7 = uVar5;
          } while (1 < uVar3);
        }
        uVar7 = uVar5;
        if ((local_50 & 1) != 0) {
          uVar7 = uVar5 / 10;
          *(byte *)(uVar12 - 1) = (char)uVar5 + (char)uVar7 * -10 | 0x30;
          uVar12 = uVar12 - 1;
        }
        *(undefined1 *)(uVar12 - 1) = 0x2e;
        FUN_1002472e(uVar12 - 2,uVar7,1);
        uVar5 = local_54;
      }
      FUN_100253ad(&piStack_40,&local_24,uVar5,param_2);
      iVar1 = piStack_40[1];
      uVar5 = iVar1 + 1;
      if ((uint)piStack_40[2] < uVar5) {
        (*(code *)piStack_40[3])(piStack_40,uVar5);
        iVar1 = piStack_40[1];
        uVar5 = iVar1 + 1;
      }
      piStack_40[1] = uVar5;
      *(undefined1 *)(*piStack_40 + iVar1) = 0x65;
      FUN_10028c00(&local_24,local_44,piStack_40);
      *param_1 = local_24;
    }
  }
  else {
    local_34 = 0x8000;
    uStack_30 = 0x20;
    uStack_2c = 0;
    uStack_28 = 0xffffffff;
    FUN_10028621(param_1,param_2,NAN(param_3),0x8000,0x20,0,0xffffffff,(uint)(iVar1 != 0));
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_54)) {
    return param_1;
  }
LAB_10028616:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

