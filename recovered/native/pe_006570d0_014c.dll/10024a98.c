/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10024a98 */

void FUN_10024a98(code *param_1,int param_2,int param_3)

{
  code *pcVar1;
  code cVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  code *pcVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  char local_64;
  int local_5c;
  uint local_58;
  int local_54;
  undefined1 local_50;
  undefined1 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 local_34;
  uint local_33;
  undefined3 uStack_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pcVar1 = param_1 + param_2;
  pcVar13 = param_1;
  if (param_2 != 0) {
    do {
      pcVar9 = pcVar13 + 1;
      if (*pcVar13 == (code)0x7d) {
        if ((pcVar9 != pcVar1) && (*pcVar9 == (code)0x7d)) {
          iVar14 = *(int *)(param_3 + 0x10);
LAB_10024b81:
          FUN_100253ad(&local_38,param_1,pcVar9,iVar14);
          goto LAB_10024b93;
        }
        FUN_1002ad98("unmatched \'}\' in format string");
        goto LAB_1002506d;
      }
      if (*pcVar13 != (code)0x7b) goto LAB_10024b97;
      FUN_100253ad(&local_38,param_1,pcVar13,*(undefined4 *)(param_3 + 0x10));
      param_1 = pcVar1;
      if (pcVar9 == pcVar1) {
        pcVar8 = "invalid format string";
LAB_1002504e:
        FUN_1002ad98(pcVar8);
        break;
      }
      cVar2 = *pcVar9;
      if (cVar2 == (code)0x3a) {
        uVar7 = FUN_1002b4d4();
LAB_10024bca:
        pcVar9 = (code *)FUN_1002af04(uVar7,pcVar9 + 1,pcVar1);
        pcVar8 = "unknown format specifier";
        if ((pcVar9 != pcVar1) && (*pcVar9 == (code)0x7d)) goto LAB_10024bed;
        goto LAB_1002504e;
      }
      if (cVar2 == (code)0x7b) {
        FUN_100253ad(&local_38,pcVar9,pcVar13 + 2,*(undefined4 *)(param_3 + 0x10));
        goto LAB_10024b93;
      }
      if (cVar2 != (code)0x7d) {
        local_5c = param_3;
        local_58 = 0;
        pcVar9 = (code *)FUN_1002adf0(pcVar9,pcVar1,&local_5c);
        if (pcVar9 == pcVar1) {
LAB_10024c6d:
          FUN_1002ad98("missing \'}\' in format string");
          pcVar9 = pcVar1;
          goto LAB_10024b97;
        }
        uVar7 = local_58;
        if (*pcVar9 == (code)0x3a) goto LAB_10024bca;
        if (*pcVar9 != (code)0x7d) goto LAB_10024c6d;
        uVar7 = *(uint *)(param_3 + 0x1c);
        uVar4 = local_50;
        if (-1 < (int)uVar7) {
          if (local_58 < 0xf) {
            bVar11 = (byte)(local_58 * 4);
            bVar3 = bVar11 & 0x1f;
            uVar5 = uVar7 >> (bVar11 & 0x1f);
            if ((local_58 * 4 & 0x20) == 0) {
              uVar5 = *(uint *)(param_3 + 0x18) >> bVar3 | uVar7 << 0x20 - bVar3;
            }
            uVar5 = uVar5 & 0xf;
            if (uVar5 != 0) {
              puVar10 = (uint *)(local_58 * 8 + *(int *)(param_3 + 0x20));
              goto LAB_10024d00;
            }
          }
LAB_10024d33:
          local_54 = *(int *)(param_3 + 0x10);
          goto switchD_10024d18_default;
        }
        if ((int)*(uint *)(param_3 + 0x18) <= (int)local_58) goto LAB_10024d33;
        puVar10 = (uint *)(*(int *)(param_3 + 0x20) + local_58 * 0x10);
        uVar5 = *(uint *)(*(int *)(param_3 + 0x20) + 8 + local_58 * 0x10);
LAB_10024d00:
        uVar7 = *puVar10;
        pcVar13 = (code *)puVar10[1];
        local_54 = *(int *)(param_3 + 0x10);
        switch(uVar5) {
        case 1:
          FUN_1002522f(&local_38,local_54,uVar7);
          break;
        case 2:
          FUN_100253cd(&local_38,local_54,uVar7);
          break;
        case 3:
          FUN_10025448(&local_38,local_54,uVar7,pcVar13);
          break;
        case 4:
          FUN_10025681(&local_38,local_54,uVar7,pcVar13);
          break;
        case 5:
          uVar4 = local_48;
        default:
switchD_10024d18_default:
          FUN_10025108(uVar4);
          break;
        case 6:
          uVar4 = local_4c;
          goto switchD_10024d18_default;
        case 7:
          local_38 = 0x8000;
          local_34 = 0x20;
          uStack_2f = 0;
          local_33 = 0;
          local_2c = 0xffffffff;
          FUN_100258cd(&local_44,local_54,uVar7 & 1,&local_38,0);
          break;
        case 8:
          local_64 = (char)uVar7;
          FUN_1002821c(&local_38,local_54,(int)local_64);
          break;
        case 9:
          FUN_10028267(&local_38,local_54,uVar7);
          break;
        case 10:
          FUN_1002947c(&local_38,local_54,uVar7,pcVar13);
          break;
        case 0xb:
          FUN_1002947c(&local_38,local_54,uVar7,pcVar13);
          break;
        case 0xc:
          FUN_1002aa1d(&local_38,local_54,uVar7);
          break;
        case 0xd:
          FUN_100253ad(&local_38,uVar7,pcVar13 + uVar7,local_54);
          break;
        case 0xe:
          local_38 = 0x8000;
          local_34 = 0x20;
          uStack_2f = 0;
          local_33 = 0;
          local_2c = 0xffffffff;
          thunk_FUN_1002aaaa(&local_44,local_54,uVar7,&local_38,0);
          break;
        case 0xf:
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          local_2c = 0;
          local_33 = local_33 & 0xffffff;
          uStack_2f = 0;
          local_28 = 0;
          local_20 = 0;
          local_38 = local_54;
          (*pcVar13)(uVar7,&local_44,&local_38);
        }
LAB_10024bed:
        param_1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        goto LAB_10024b97;
      }
      uVar5 = FUN_1002b4d4();
      uVar7 = *(uint *)(param_3 + 0x1c);
      uVar4 = local_4c;
      if (-1 < (int)uVar7) {
        if (uVar5 < 0xf) {
          bVar11 = (byte)(uVar5 * 4);
          bVar3 = bVar11 & 0x1f;
          uVar12 = uVar7 >> (bVar11 & 0x1f);
          if ((uVar5 * 4 & 0x20) == 0) {
            uVar12 = *(uint *)(param_3 + 0x18) >> bVar3 | uVar7 << 0x20 - bVar3;
          }
          uVar12 = uVar12 & 0xf;
          if (uVar12 != 0) {
            puVar6 = (undefined4 *)(uVar5 * 8 + *(int *)(param_3 + 0x20));
            goto LAB_10024c9a;
          }
        }
LAB_10024cc8:
        local_5c = *(int *)(param_3 + 0x10);
        goto switchD_10024cb0_default;
      }
      if ((int)*(uint *)(param_3 + 0x18) <= (int)uVar5) goto LAB_10024cc8;
      puVar6 = (undefined4 *)(*(int *)(param_3 + 0x20) + uVar5 * 0x10);
      uVar12 = *(uint *)(*(int *)(param_3 + 0x20) + 8 + uVar5 * 0x10);
LAB_10024c9a:
      param_1 = (code *)*puVar6;
      pcVar9 = (code *)puVar6[1];
      iVar14 = *(int *)(param_3 + 0x10);
      local_5c = iVar14;
      switch(uVar12) {
      case 1:
        FUN_1002522f(&local_38,iVar14,param_1);
        break;
      case 2:
        FUN_100253cd(&local_38,iVar14,param_1);
        break;
      case 3:
        FUN_10025448(&local_38,iVar14,param_1,pcVar9);
        break;
      case 4:
        FUN_10025681(&local_38,iVar14,param_1,pcVar9);
        break;
      case 5:
        uVar4 = (undefined1)local_54;
      default:
switchD_10024cb0_default:
        FUN_10025108(uVar4);
        break;
      case 6:
        uVar4 = local_48;
        goto switchD_10024cb0_default;
      case 7:
        local_38 = 0x8000;
        local_34 = 0x20;
        uStack_2f = 0;
        local_33 = 0;
        local_2c = 0xffffffff;
        FUN_100258cd(&local_44,iVar14,(uint)param_1 & 1,&local_38,0);
        break;
      case 8:
        FUN_1002821c(&local_38,iVar14,(int)(char)param_1);
        break;
      case 9:
        FUN_10028267(&local_38,iVar14,param_1);
        break;
      case 10:
        FUN_1002947c(&local_38,iVar14,param_1,pcVar9);
        break;
      case 0xb:
        FUN_1002947c(&local_38,iVar14,param_1,pcVar9);
        break;
      case 0xc:
        FUN_1002aa1d(&local_38,iVar14,param_1);
        break;
      case 0xd:
        pcVar9 = pcVar9 + (int)param_1;
        goto LAB_10024b81;
      case 0xe:
        local_38 = 0x8000;
        local_34 = 0x20;
        uStack_2f = 0;
        local_33 = 0;
        local_2c = 0xffffffff;
        thunk_FUN_1002aaaa(&local_44,iVar14,param_1,&local_38,0);
        break;
      case 0xf:
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_2c = 0;
        local_33 = local_33 & 0xffffff;
        uStack_2f = 0;
        local_28 = 0;
        local_20 = 0;
        local_38 = iVar14;
        (*pcVar9)(param_1,&local_44,&local_38);
      }
LAB_10024b93:
      param_1 = pcVar13 + 2;
      pcVar9 = pcVar13 + 2;
LAB_10024b97:
      pcVar13 = pcVar9;
    } while (pcVar9 != pcVar1);
  }
  FUN_100253ad(&local_38,param_1,pcVar1,*(undefined4 *)(param_3 + 0x10));
LAB_1002506d:
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

