/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045c6d8 */

int __cdecl FUN_0045c6d8(int *param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *local_6c;
  uint *local_68;
  uint local_64;
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
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_6c;
  FUN_0045c4aa(param_1,&local_30);
  if (local_28 == 0) {
switchD_0045c802_default:
    iVar8 = 3;
  }
  else {
    local_34 = local_30;
    iVar9 = *(int *)(param_2 + 0xc);
    local_50 = local_28;
    if (iVar9 == 7) {
      iVar9 = *param_1;
      iVar8 = param_1[2];
      *param_1 = (int)(local_30 + 1);
      local_6c = local_2c;
      param_1[2] = (int)(local_2c + -1);
      FUN_0045c4aa(param_1,&local_24);
      *param_1 = iVar9;
      param_1[2] = iVar8;
      if (local_1c == 3) {
        if (param_4 == 0) goto switchD_0045c802_default;
        iVar9 = 8;
        uVar5 = 1;
        local_2c = local_6c;
LAB_0045c789:
        local_34 = local_30 + 1;
        local_6c = local_2c + -1;
        iVar8 = 1;
      }
      else {
        iVar8 = 0;
        uVar5 = 1;
        iVar9 = 7;
      }
    }
    else {
      if (local_28 == 3) {
        uVar5 = param_4;
        if (param_4 != 0) goto LAB_0045c789;
        goto switchD_0045c802_default;
      }
      local_6c = local_2c;
      iVar8 = 0;
      uVar5 = 1;
    }
    local_64 = param_4 * 4;
    local_54 = param_4 * 8;
    local_58 = param_4 * 0xc;
    iVar9 = iVar9 + -1;
    local_5c = iVar9;
    do {
      iVar2 = *(int *)(param_3 + iVar8 * 4);
      iVar3 = *(int *)(param_2 + 0x14);
      local_40 = iVar8;
      local_3c = uVar5;
      FUN_0045ee80(&local_34,local_6c);
      pbVar4 = local_34;
      switch(iVar9) {
      case 0:
        uVar5 = FUN_0045f0f7((int *)&local_34,(char *)local_6c);
        goto LAB_0045c9a1;
      case 1:
        uVar5 = FUN_0045e4ee(&local_34,local_6c);
        goto LAB_0045c9a1;
      case 2:
        iVar8 = 0;
        goto LAB_0045c97d;
      case 3:
        iVar8 = 3;
LAB_0045c97d:
        uVar5 = FUN_0045e1f6((uint *)&local_34,local_6c,iVar8);
LAB_0045c9a1:
        cVar1 = *(char *)(param_2 + 0x18);
        if (cVar1 == '\x04') {
LAB_0045c9b9:
          *(uint *)(iVar2 + iVar3) = uVar5;
        }
        else if (cVar1 == '\x02') {
          *(short *)(iVar2 + iVar3) = (short)uVar5;
        }
        else {
          if (cVar1 != '\x01') goto LAB_0045c9b9;
          *(char *)(iVar2 + iVar3) = (char)uVar5;
        }
        break;
      case 4:
      case 5:
        iVar8 = (int)local_6c - (int)local_34;
        if (local_34 <= local_6c && iVar8 != 0) {
          iVar9 = param_1[4];
          if (local_50 == 2) {
            uVar5 = iVar8 - 2;
          }
          else {
            if (local_50 != 4) goto switchD_0045c802_default;
            uVar5 = iVar8 - 1;
          }
          local_34 = local_34 + 1;
          local_68 = (uint *)(pbVar4 + 1);
          if (*(int *)(iVar2 + iVar3) != 0) {
            FUN_0041c607(iVar9,*(int *)(iVar2 + iVar3));
            *(undefined4 *)(iVar2 + iVar3) = 0;
          }
          puVar6 = (uint *)FUN_0041e773(iVar9,uVar5 + 1,&local_38);
          iVar8 = local_38;
          if (local_38 != 0) goto LAB_0045cad4;
          FUN_004878c0(puVar6,local_68,uVar5);
          *(undefined1 *)((int)puVar6 + uVar5) = 0;
          *(uint **)(iVar2 + iVar3) = puVar6;
          iVar9 = local_5c;
        }
        break;
      case 6:
        iVar8 = FUN_0045f150(&local_34,local_6c,4,(int)&local_24,0);
        if (iVar8 < 4) goto switchD_0045c802_default;
        uVar5 = FUN_00421311(local_24);
        *(uint *)(iVar2 + iVar3) = uVar5;
        uVar5 = FUN_00421311(local_20);
        *(uint *)(iVar2 + 4 + iVar3) = uVar5;
        uVar5 = FUN_00421311(local_1c);
        *(uint *)(iVar2 + 8 + iVar3) = uVar5;
        uVar5 = FUN_00421311(local_18);
        *(uint *)(iVar2 + 0xc + iVar3) = uVar5;
        break;
      case 7:
        iVar9 = param_1[4];
        puVar6 = (uint *)FUN_0041efcd(iVar9,4,0,local_64,0,&local_38);
        pbVar4 = local_6c;
        iVar8 = local_38;
        if (local_38 != 0) goto LAB_0045cad4;
        iVar8 = 4;
        local_68 = puVar6;
        local_60 = iVar9;
        do {
          uVar5 = FUN_0045f150(&local_34,pbVar4,param_4,(int)puVar6,0);
          if (((int)uVar5 < 0) || (uVar5 < param_4)) {
            local_38 = 3;
            FUN_0041c607(local_60,(int)local_68);
            iVar8 = local_38;
            goto LAB_0045cad4;
          }
          FUN_0045ee80(&local_34,pbVar4);
          puVar6 = (uint *)((int)puVar6 + local_64);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        if (param_4 != 0) {
          local_44 = local_58 + (int)local_68;
          local_48 = local_54 + (int)local_68;
          local_4c = (int)local_68 + local_64;
          uVar5 = 0;
          do {
            puVar6 = *(uint **)(param_3 + uVar5 * 4);
            uVar7 = FUN_00421311(local_68[uVar5]);
            *puVar6 = uVar7;
            uVar7 = FUN_00421311(*(int *)(local_4c + uVar5 * 4));
            puVar6[1] = uVar7;
            uVar7 = FUN_00421311(*(int *)(local_48 + uVar5 * 4));
            puVar6[2] = uVar7;
            uVar7 = FUN_00421311(*(int *)(local_44 + uVar5 * 4));
            puVar6[3] = uVar7;
            uVar5 = uVar5 + 1;
          } while (param_4 != uVar5);
        }
        FUN_0041c607(local_60,(int)local_68);
        iVar9 = local_5c;
        break;
      default:
        goto switchD_0045c802_default;
      }
      iVar8 = local_40 + 1;
      uVar5 = local_3c - 1;
    } while (uVar5 != 0);
    iVar8 = 0;
  }
LAB_0045cad4:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_6c);
  }
  return iVar8;
}

