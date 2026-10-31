/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400582e7 */

uint FUN_1400582e7(longlong param_1,byte *param_2,byte *param_3)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 auStackY_c8 [32];
  byte local_98;
  longlong *local_90;
  ulonglong local_88;
  byte local_80;
  uint local_74;
  byte *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  local_74 = 0;
  pbVar10 = param_2 + 1;
  pbVar9 = local_70;
  if (pbVar10 <= param_3) {
    bVar2 = *param_2;
    pbVar9 = pbVar10;
    if (-1 < (char)bVar2) {
      if ((bVar2 & 4) == 0) {
        uVar6 = 0;
        if ((bVar2 & 2) == 0) {
          uVar13 = 0;
          pbVar14 = pbVar10;
        }
        else {
          pbVar14 = param_2 + 2;
          if (param_3 < pbVar14) goto LAB_14005838f;
          uVar13 = (ulonglong)*pbVar10;
        }
        local_70 = pbVar14;
        if ((bVar2 & 1) != 0) {
          local_70 = pbVar14 + 1;
          pbVar9 = pbVar14;
          if (param_3 < local_70) goto LAB_14005838f;
          uVar6 = (uint)*pbVar14;
        }
      }
      else {
        local_70 = param_2 + 2;
        if (param_3 < local_70) goto LAB_14005838f;
        uVar13 = (ulonglong)(*pbVar10 & 0xf);
        uVar6 = (uint)(*pbVar10 >> 4);
      }
      pbVar10 = local_70;
      uVar3 = (uint)uVar13;
      uVar16 = uVar3 + uVar6;
      plVar1 = (longlong *)(param_1 + 8);
      if (*(uint *)(param_1 + 4) < uVar16) {
        uVar8 = uVar16 + 7 & 0xfffffff8;
        lVar4 = FUN_14001c617(**(longlong **)(param_1 + 0x28),4,*(uint *)(param_1 + 4),uVar8,*plVar1
                              ,(int *)&local_74);
        *plVar1 = lVar4;
        uVar11 = local_74;
        if (local_74 != 0) goto LAB_140058394;
        *(uint *)(param_1 + 4) = uVar8;
        *(ulonglong *)(param_1 + 0x10) = lVar4 + uVar13 * 4;
LAB_14005845f:
        uVar11 = 0;
        uVar5 = 0;
        uVar7 = 0;
        do {
          pbVar9 = local_70;
          if ((uVar5 & 7) == 0) {
            if (param_3 < pbVar10 + 1) goto LAB_14005838f;
            uVar7 = (ulonglong)*pbVar10;
            pbVar10 = pbVar10 + 1;
          }
          if ((uVar7 & 1) == 0) {
            pbVar14 = pbVar10 + 1;
            if (param_3 < pbVar14) goto LAB_14005838f;
            uVar11 = uVar11 + *pbVar10;
          }
          else {
            pbVar14 = pbVar10 + 2;
            if (param_3 < pbVar14) goto LAB_14005838f;
            uVar11 = (int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1];
          }
          *(uint *)(*plVar1 + uVar5 * 4) = uVar11;
          uVar7 = uVar7 >> 1;
          uVar5 = uVar5 + 1;
          pbVar10 = pbVar14;
        } while (uVar16 != uVar5);
      }
      else {
        *(ulonglong *)(param_1 + 0x10) = (ulonglong)(uVar3 * 4) + *(longlong *)(param_1 + 8);
        pbVar14 = local_70;
        if (uVar16 != 0) goto LAB_14005845f;
      }
      local_90 = (longlong *)(param_1 + 0x10);
      local_70 = pbVar14;
      if (((bVar2 & 8) == 0) ||
         (local_74 = FUN_140056bad((ulonglong *)&local_70,param_3), uVar11 = local_74, local_74 == 0
         )) {
        pbVar10 = local_70;
        FUN_140058807(param_1);
        uVar7 = 0;
        local_68 = 0;
        local_50 = 0;
        local_88 = 0;
LAB_14005852a:
        uVar16 = (uint)local_88;
        pbVar9 = pbVar10 + 1;
        uVar11 = 8;
        if (pbVar9 <= param_3) {
          uVar8 = *pbVar10 & 0xf;
          uVar5 = (ulonglong)uVar8;
          bVar2 = *pbVar10 >> 4;
          uVar12 = 1;
          local_70 = pbVar9;
          pbVar10 = pbVar9;
          switch(bVar2) {
          case 0:
            goto switchD_140058568_caseD_0;
          case 1:
          case 4:
          case 5:
            break;
          case 2:
            if (uVar8 < uVar3) {
              uVar15 = *(undefined4 *)(*plVar1 + uVar5 * 4);
              goto LAB_14005859e;
            }
            goto LAB_140058394;
          case 3:
            if (uVar8 < uVar6) {
              uVar15 = (undefined4)uVar7;
              uVar16 = *(uint *)(*local_90 + (ulonglong)uVar8 * 4);
LAB_14005859e:
              local_68 = CONCAT44(uVar16,uVar15);
              local_88 = (ulonglong)uVar16;
              uVar7 = local_68;
              goto LAB_1400587a2;
            }
            goto LAB_140058394;
          case 6:
            uVar5 = 0xb8e;
            goto LAB_1400585d7;
          case 7:
            uVar5 = 0xe2b;
LAB_1400585d7:
            uVar12 = 3;
            break;
          default:
            uVar12 = 4;
          }
          lVar4 = 0;
LAB_1400585e0:
          switch((uint)uVar5 & 3) {
          case 0:
            pbVar9 = pbVar10 + 1;
            if (param_3 < pbVar9) goto LAB_140058394;
            local_98 = (byte)uVar13;
            if (local_98 <= *pbVar10) goto LAB_140058394;
            *(undefined4 *)(&local_68 + lVar4) = *(undefined4 *)(*plVar1 + (ulonglong)*pbVar10 * 4);
            switch((uint)(uVar5 >> 2) & 3) {
            case 0:
              goto switchD_14005867b_caseD_0;
            case 1:
switchD_14005867b_caseD_1:
              pbVar10 = pbVar9 + 2;
              if (pbVar10 <= param_3) {
                uVar16 = (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
                break;
              }
              goto LAB_140058394;
            case 2:
switchD_14005867b_caseD_2:
              pbVar10 = pbVar9 + 1;
              if (param_3 < pbVar10) goto LAB_140058394;
              uVar16 = (int)(char)*pbVar9 + local_50._4_4_;
              break;
            case 3:
switchD_14005867b_caseD_3:
              pbVar10 = pbVar9;
              uVar16 = local_50._4_4_;
            }
            goto LAB_14005872c;
          case 1:
            pbVar9 = pbVar10 + 2;
            if (param_3 < pbVar9) goto LAB_140058394;
            *(uint *)(&local_68 + lVar4) = (int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1];
            switch((uint)(uVar5 >> 2) & 3) {
            case 1:
              goto switchD_14005867b_caseD_1;
            case 2:
              goto switchD_14005867b_caseD_2;
            case 3:
              goto switchD_14005867b_caseD_3;
            }
            break;
          case 2:
            pbVar9 = pbVar10 + 1;
            if (param_3 < pbVar9) goto LAB_140058394;
            *(int *)(&local_68 + lVar4) = (int)uVar7 + (int)(char)*pbVar10;
            switch((uint)(uVar5 >> 2) & 3) {
            case 1:
              goto switchD_14005867b_caseD_1;
            case 2:
              goto switchD_14005867b_caseD_2;
            case 3:
              goto switchD_14005867b_caseD_3;
            }
            break;
          case 3:
            *(int *)(&local_68 + lVar4) = (int)uVar7;
            pbVar9 = pbVar10;
            switch((uint)(uVar5 >> 2) & 3) {
            case 1:
              goto switchD_14005867b_caseD_1;
            case 2:
              goto switchD_14005867b_caseD_2;
            case 3:
              goto switchD_14005867b_caseD_3;
            }
          }
switchD_14005867b_caseD_0:
          pbVar10 = pbVar9 + 1;
          if (param_3 < pbVar10) goto LAB_140058394;
          local_80 = (byte)uVar6;
          if (local_80 <= *pbVar9) goto LAB_140058394;
          uVar16 = *(uint *)(*local_90 + (ulonglong)*pbVar9 * 4);
LAB_14005872c:
          *(uint *)((longlong)&local_68 + lVar4 * 8 + 4) = uVar16;
          if (uVar12 == 4 && (int)lVar4 == 0) {
            if (param_3 < pbVar10 + 1) goto LAB_140058394;
            uVar5 = (ulonglong)*pbVar10;
            uVar12 = 3;
            pbVar10 = pbVar10 + 1;
          }
          else {
            uVar5 = uVar5 >> 4;
          }
          uVar7 = (&local_68)[lVar4];
          local_50 = uVar7;
          lVar4 = lVar4 + 1;
          if (uVar12 <= (uint)lVar4) goto code_r0x000140058772;
          goto LAB_1400585e0;
        }
      }
      goto LAB_140058394;
    }
  }
LAB_14005838f:
  local_70 = pbVar9;
  uVar11 = 8;
LAB_140058394:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_c8);
  }
  return uVar11;
code_r0x000140058772:
  local_88 = uVar7 >> 0x20;
  if (bVar2 - 1 < 3) {
LAB_1400587a2:
    local_70 = pbVar10;
    local_50 = uVar7;
    uVar11 = FUN_140058827(param_1,&local_68);
  }
  else {
    local_70 = pbVar10;
    if (bVar2 - 4 < 2) {
      uVar11 = FUN_14005888b(param_1,&local_68);
    }
    else {
      if (bVar2 == 0) {
switchD_140058568_caseD_0:
        FUN_14005880c(param_1);
        uVar11 = local_74;
        goto LAB_140058394;
      }
      uVar11 = FUN_1400588f4(param_1,&local_68,&local_60,&local_58);
    }
  }
  local_74 = uVar11;
  if (uVar11 != 0) goto LAB_140058394;
  goto LAB_14005852a;
}

