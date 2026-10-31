/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020acab */

ulonglong FUN_18020acab(longlong param_1,byte *param_2,byte *param_3)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  uint *local_a0;
  ulonglong local_98;
  longlong *local_90;
  ulonglong local_88;
  ulonglong local_80;
  uint local_74;
  byte *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_c8;
  local_74 = 0;
  pbVar9 = param_2 + 1;
  pbVar8 = local_70;
  if (pbVar9 <= param_3) {
    bVar2 = *param_2;
    pbVar8 = pbVar9;
    if (-1 < (char)bVar2) {
      if ((bVar2 & 4) == 0) {
        uVar6 = 0;
        if ((bVar2 & 2) == 0) {
          uVar3 = 0;
          param_2 = pbVar9;
        }
        else {
          param_2 = param_2 + 2;
          if (param_3 < param_2) goto LAB_18020ad53;
          uVar3 = (ulonglong)*pbVar9;
        }
        local_70 = param_2;
        if ((bVar2 & 1) != 0) {
          local_70 = param_2 + 1;
          pbVar8 = param_2;
          if (param_3 < local_70) goto LAB_18020ad53;
          uVar6 = (ulonglong)*param_2;
        }
      }
      else {
        local_70 = param_2 + 2;
        if (param_3 < local_70) goto LAB_18020ad53;
        uVar3 = (ulonglong)(*pbVar9 & 0xf);
        uVar6 = (ulonglong)(*pbVar9 >> 4);
      }
      pbVar9 = local_70;
      uVar13 = (int)uVar3 + (int)uVar6;
      plVar1 = (longlong *)(param_1 + 8);
      local_80 = uVar6;
      if (*(uint *)(param_1 + 4) < uVar13) {
        uVar7 = uVar13 + 7 & 0xfffffff8;
        local_a8 = *plVar1;
        local_a0 = &local_74;
        local_98 = uVar3;
        lVar4 = FUN_1801c9c3f(**(undefined8 **)(param_1 + 0x28),4,*(uint *)(param_1 + 4),uVar7);
        *plVar1 = lVar4;
        uVar3 = (ulonglong)local_74;
        if (local_74 != 0) goto LAB_18020ad58;
        *(uint *)(param_1 + 4) = uVar7;
        *(ulonglong *)(param_1 + 0x10) = lVar4 + (local_98 & 0xffffffff) * 4;
        uVar3 = local_98;
LAB_18020ae23:
        local_90 = (longlong *)(param_1 + 0x10);
        uVar7 = 0;
        uVar5 = 0;
        uVar6 = 0;
        do {
          pbVar8 = local_70;
          if ((uVar5 & 7) == 0) {
            if (param_3 < pbVar9 + 1) goto LAB_18020ad53;
            uVar6 = (ulonglong)*pbVar9;
            pbVar9 = pbVar9 + 1;
          }
          if ((uVar6 & 1) == 0) {
            pbVar11 = pbVar9 + 1;
            if (param_3 < pbVar11) goto LAB_18020ad53;
            uVar7 = uVar7 + *pbVar9;
          }
          else {
            pbVar11 = pbVar9 + 2;
            if (param_3 < pbVar11) goto LAB_18020ad53;
            uVar7 = (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
          }
          *(uint *)(*plVar1 + uVar5 * 4) = uVar7;
          uVar6 = uVar6 >> 1;
          uVar5 = uVar5 + 1;
          pbVar9 = pbVar11;
        } while (uVar13 != uVar5);
      }
      else {
        *(ulonglong *)(param_1 + 0x10) =
             (ulonglong)(uint)((int)uVar3 * 4) + *(longlong *)(param_1 + 8);
        pbVar11 = local_70;
        if (uVar13 != 0) goto LAB_18020ae23;
      }
      local_90 = (longlong *)(param_1 + 0x10);
      local_98 = uVar3;
      local_70 = pbVar11;
      if ((bVar2 & 8) == 0) {
LAB_18020aec5:
        pbVar9 = local_70;
        FUN_18020b1cb(param_1);
        uVar6 = 0;
        local_68 = 0;
        local_50 = 0;
        uVar5 = 0;
LAB_18020aeee:
        uVar13 = (uint)uVar5;
        pbVar8 = pbVar9 + 1;
        uVar3 = 8;
        if (pbVar8 <= param_3) {
          uVar7 = *pbVar9 & 0xf;
          uVar5 = (ulonglong)uVar7;
          bVar2 = *pbVar9 >> 4;
          uVar10 = 1;
          local_70 = pbVar8;
          pbVar9 = pbVar8;
          switch(bVar2) {
          case 0:
            goto switchD_18020af2c_caseD_0;
          case 1:
          case 4:
          case 5:
            break;
          case 2:
            if (uVar7 < (uint)local_98) {
              uVar12 = *(undefined4 *)(*plVar1 + uVar5 * 4);
              goto LAB_18020af62;
            }
            goto LAB_18020ad58;
          case 3:
            if (uVar7 < (uint)local_80) {
              uVar12 = (undefined4)uVar6;
              uVar13 = *(uint *)(*local_90 + (ulonglong)uVar7 * 4);
LAB_18020af62:
              local_68 = CONCAT44(uVar13,uVar12);
              local_88 = (ulonglong)uVar13;
              uVar6 = local_68;
              goto LAB_18020b166;
            }
            goto LAB_18020ad58;
          case 6:
            uVar5 = 0xb8e;
            goto LAB_18020af9b;
          case 7:
            uVar5 = 0xe2b;
LAB_18020af9b:
            uVar10 = 3;
            break;
          default:
            uVar10 = 4;
          }
          lVar4 = 0;
LAB_18020afa4:
          switch((uint)uVar5 & 3) {
          case 0:
            pbVar8 = pbVar9 + 1;
            if (param_3 < pbVar8) goto LAB_18020ad58;
            if ((byte)local_98 <= *pbVar9) goto LAB_18020ad58;
            *(undefined4 *)(local_60 + lVar4 * 8 + -8) =
                 *(undefined4 *)(*plVar1 + (ulonglong)*pbVar9 * 4);
            switch((uint)(uVar5 >> 2) & 3) {
            case 0:
              goto switchD_18020b03f_caseD_0;
            case 1:
switchD_18020b03f_caseD_1:
              pbVar9 = pbVar8 + 2;
              if (pbVar9 <= param_3) {
                uVar13 = (int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1];
                break;
              }
              goto LAB_18020ad58;
            case 2:
switchD_18020b03f_caseD_2:
              pbVar9 = pbVar8 + 1;
              if (param_3 < pbVar9) goto LAB_18020ad58;
              uVar13 = (int)(char)*pbVar8 + local_50._4_4_;
              break;
            case 3:
switchD_18020b03f_caseD_3:
              pbVar9 = pbVar8;
              uVar13 = local_50._4_4_;
            }
            goto LAB_18020b0f0;
          case 1:
            pbVar8 = pbVar9 + 2;
            if (param_3 < pbVar8) goto LAB_18020ad58;
            *(uint *)(local_60 + lVar4 * 8 + -8) =
                 (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
            switch((uint)(uVar5 >> 2) & 3) {
            case 1:
              goto switchD_18020b03f_caseD_1;
            case 2:
              goto switchD_18020b03f_caseD_2;
            case 3:
              goto switchD_18020b03f_caseD_3;
            }
            break;
          case 2:
            pbVar8 = pbVar9 + 1;
            if (param_3 < pbVar8) goto LAB_18020ad58;
            *(int *)(local_60 + lVar4 * 8 + -8) = (int)uVar6 + (int)(char)*pbVar9;
            switch((uint)(uVar5 >> 2) & 3) {
            case 1:
              goto switchD_18020b03f_caseD_1;
            case 2:
              goto switchD_18020b03f_caseD_2;
            case 3:
              goto switchD_18020b03f_caseD_3;
            }
            break;
          case 3:
            *(int *)(local_60 + lVar4 * 8 + -8) = (int)uVar6;
            pbVar8 = pbVar9;
            switch((uint)(uVar5 >> 2) & 3) {
            case 1:
              goto switchD_18020b03f_caseD_1;
            case 2:
              goto switchD_18020b03f_caseD_2;
            case 3:
              goto switchD_18020b03f_caseD_3;
            }
          }
switchD_18020b03f_caseD_0:
          pbVar9 = pbVar8 + 1;
          if (param_3 < pbVar9) goto LAB_18020ad58;
          if ((byte)local_80 <= *pbVar8) goto LAB_18020ad58;
          uVar13 = *(uint *)(*local_90 + (ulonglong)*pbVar8 * 4);
LAB_18020b0f0:
          *(uint *)(local_60 + lVar4 * 8 + -4) = uVar13;
          if (uVar10 == 4 && (int)lVar4 == 0) {
            if (param_3 < pbVar9 + 1) goto LAB_18020ad58;
            uVar5 = (ulonglong)*pbVar9;
            uVar10 = 3;
            pbVar9 = pbVar9 + 1;
          }
          else {
            uVar5 = uVar5 >> 4;
          }
          uVar6 = *(ulonglong *)(local_60 + lVar4 * 8 + -8);
          local_50 = uVar6;
          lVar4 = lVar4 + 1;
          if (uVar10 <= (uint)lVar4) goto code_r0x00018020b136;
          goto LAB_18020afa4;
        }
        goto LAB_18020ad58;
      }
      uVar3 = FUN_180209571(&local_70,param_3);
      local_74 = (uint)uVar3;
      if (local_74 == 0) goto LAB_18020aec5;
      goto LAB_18020ad58;
    }
  }
LAB_18020ad53:
  local_70 = pbVar8;
  uVar3 = 8;
LAB_18020ad58:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_c8);
  }
  return uVar3;
code_r0x00018020b136:
  local_88 = uVar6 >> 0x20;
  if (bVar2 - 1 < 3) {
LAB_18020b166:
    local_70 = pbVar9;
    local_50 = uVar6;
    uVar3 = FUN_18020b1eb(param_1,&local_68);
  }
  else {
    local_70 = pbVar9;
    if (bVar2 - 4 < 2) {
      uVar3 = FUN_18020b24f(param_1,&local_68);
    }
    else {
      if (bVar2 == 0) {
switchD_18020af2c_caseD_0:
        FUN_18020b1d0(param_1);
        uVar3 = (ulonglong)local_74;
        goto LAB_18020ad58;
      }
      uVar3 = FUN_18020b2b8(param_1,&local_68,local_60);
    }
  }
  local_74 = (uint)uVar3;
  uVar5 = local_88;
  if (local_74 != 0) goto LAB_18020ad58;
  goto LAB_18020aeee;
}

