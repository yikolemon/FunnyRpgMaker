/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10204f60 */

int FUN_10204f60(int *param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_6c;
  FUN_10204d32(param_1,&local_30);
  if (local_28 == 0) {
switchD_1020508a_default:
    iVar7 = 3;
  }
  else {
    local_34 = local_30;
    iVar9 = *(int *)(param_2 + 0xc);
    local_50 = local_28;
    if (iVar9 == 7) {
      iVar9 = *param_1;
      iVar7 = param_1[2];
      *param_1 = local_30 + 1;
      local_6c = local_2c;
      param_1[2] = local_2c - 1;
      FUN_10204d32(param_1,&local_24);
      *param_1 = iVar9;
      param_1[2] = iVar7;
      if (local_1c == 3) {
        if (param_4 == 0) goto switchD_1020508a_default;
        iVar9 = 8;
        uVar4 = 1;
        local_2c = local_6c;
LAB_10205011:
        local_34 = local_30 + 1;
        local_6c = local_2c - 1;
        iVar7 = 1;
      }
      else {
        iVar7 = 0;
        uVar4 = 1;
        iVar9 = 7;
      }
    }
    else {
      if (local_28 == 3) {
        uVar4 = param_4;
        if (param_4 != 0) goto LAB_10205011;
        goto switchD_1020508a_default;
      }
      local_6c = local_2c;
      iVar7 = 0;
      uVar4 = 1;
    }
    local_64 = param_4 * 4;
    local_54 = param_4 * 8;
    local_58 = param_4 * 0xc;
    iVar9 = iVar9 + -1;
    local_5c = iVar9;
    do {
      iVar5 = *(int *)(param_3 + iVar7 * 4);
      iVar2 = *(int *)(param_2 + 0x14);
      local_40 = iVar7;
      local_3c = uVar4;
      FUN_10207708();
      uVar4 = local_34;
      switch(iVar9) {
      case 0:
        uVar6 = FUN_1020797f();
        goto LAB_10205229;
      case 1:
        uVar6 = FUN_10206d76();
        goto LAB_10205229;
      case 2:
        uVar6 = 0;
        goto LAB_10205205;
      case 3:
        uVar6 = 3;
LAB_10205205:
        uVar6 = FUN_10206a7e(uVar6);
LAB_10205229:
        cVar1 = *(char *)(param_2 + 0x18);
        if (cVar1 == '\x04') {
LAB_10205241:
          *(undefined4 *)(iVar5 + iVar2) = uVar6;
        }
        else if (cVar1 == '\x02') {
          *(short *)(iVar5 + iVar2) = (short)uVar6;
        }
        else {
          if (cVar1 != '\x01') goto LAB_10205241;
          *(char *)(iVar5 + iVar2) = (char)uVar6;
        }
        break;
      case 4:
      case 5:
        iVar8 = local_6c - local_34;
        if (local_34 <= local_6c && iVar8 != 0) {
          iVar9 = param_1[4];
          if (local_50 == 2) {
            iVar8 = iVar8 + -2;
          }
          else {
            if (local_50 != 4) goto switchD_1020508a_default;
            iVar8 = iVar8 + -1;
          }
          local_34 = local_34 + 1;
          local_68 = uVar4 + 1;
          if (*(int *)(iVar5 + iVar2) != 0) {
            FUN_101c0017(iVar9,*(int *)(iVar5 + iVar2));
            *(undefined4 *)(iVar5 + iVar2) = 0;
          }
          iVar9 = FUN_101c21f6(iVar9,iVar8 + 1,&local_38);
          iVar7 = local_38;
          if (local_38 != 0) goto LAB_1020535c;
          FUN_1025b2d0(iVar9,local_68,iVar8);
          *(undefined1 *)(iVar9 + iVar8) = 0;
          *(int *)(iVar5 + iVar2) = iVar9;
          iVar9 = local_5c;
        }
        break;
      case 6:
        iVar7 = FUN_102079d8(4,&local_24,0);
        if (iVar7 < 4) goto switchD_1020508a_default;
        uVar6 = FUN_101c5299(local_24);
        *(undefined4 *)(iVar5 + iVar2) = uVar6;
        uVar6 = FUN_101c5299(local_20);
        *(undefined4 *)(iVar5 + 4 + iVar2) = uVar6;
        uVar6 = FUN_101c5299(local_1c);
        *(undefined4 *)(iVar5 + 8 + iVar2) = uVar6;
        uVar6 = FUN_101c5299(local_18);
        *(undefined4 *)(iVar5 + 0xc + iVar2) = uVar6;
        break;
      case 7:
        iVar9 = param_1[4];
        iVar5 = FUN_101c2a50(iVar9,4,0,local_64,0,&local_38);
        iVar7 = local_38;
        if (local_38 != 0) goto LAB_1020535c;
        iVar7 = 4;
        local_68 = iVar5;
        local_60 = iVar9;
        do {
          uVar4 = FUN_102079d8(param_4,iVar5,0);
          if (((int)uVar4 < 0) || (uVar4 < param_4)) {
            local_38 = 3;
            FUN_101c0017(local_60,local_68);
            iVar7 = local_38;
            goto LAB_1020535c;
          }
          FUN_10207708();
          iVar5 = iVar5 + local_64;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (param_4 != 0) {
          local_44 = local_58 + local_68;
          local_48 = local_54 + local_68;
          local_4c = local_68 + local_64;
          uVar4 = 0;
          do {
            puVar3 = *(undefined4 **)(param_3 + uVar4 * 4);
            uVar6 = FUN_101c5299(*(undefined4 *)(local_68 + uVar4 * 4));
            *puVar3 = uVar6;
            uVar6 = FUN_101c5299(*(undefined4 *)(local_4c + uVar4 * 4));
            puVar3[1] = uVar6;
            uVar6 = FUN_101c5299(*(undefined4 *)(local_48 + uVar4 * 4));
            puVar3[2] = uVar6;
            uVar6 = FUN_101c5299(*(undefined4 *)(local_44 + uVar4 * 4));
            puVar3[3] = uVar6;
            uVar4 = uVar4 + 1;
          } while (param_4 != uVar4);
        }
        FUN_101c0017(local_60,local_68);
        iVar9 = local_5c;
        break;
      default:
        goto switchD_1020508a_default;
      }
      iVar7 = local_40 + 1;
      uVar4 = local_3c - 1;
    } while (uVar4 != 0);
    iVar7 = 0;
  }
LAB_1020535c:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar7;
}

