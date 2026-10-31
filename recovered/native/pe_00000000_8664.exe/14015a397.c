/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015a397 */

ulonglong FUN_14015a397(longlong param_1,byte *param_2,byte *param_3)

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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
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
          if (param_3 < param_2) goto LAB_14015a43f;
          uVar3 = (ulonglong)*pbVar9;
        }
        local_70 = param_2;
        if ((bVar2 & 1) != 0) {
          local_70 = param_2 + 1;
          pbVar8 = param_2;
          if (param_3 < local_70) goto LAB_14015a43f;
          uVar6 = (ulonglong)*param_2;
        }
      }
      else {
        local_70 = param_2 + 2;
        if (param_3 < local_70) goto LAB_14015a43f;
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
        lVar4 = FUN_140128c13(**(undefined8 **)(param_1 + 0x28),4,*(uint *)(param_1 + 4),uVar7);
        *plVar1 = lVar4;
        uVar3 = (ulonglong)local_74;
        if (local_74 != 0) goto LAB_14015a444;
        *(uint *)(param_1 + 4) = uVar7;
        *(ulonglong *)(param_1 + 0x10) = lVar4 + (local_98 & 0xffffffff) * 4;
        uVar3 = local_98;
LAB_14015a50f:
        local_90 = (longlong *)(param_1 + 0x10);
        uVar7 = 0;
        uVar5 = 0;
        uVar6 = 0;
        do {
          pbVar8 = local_70;
          if ((uVar5 & 7) == 0) {
            if (param_3 < pbVar9 + 1) goto LAB_14015a43f;
            uVar6 = (ulonglong)*pbVar9;
            pbVar9 = pbVar9 + 1;
          }
          if ((uVar6 & 1) == 0) {
            pbVar11 = pbVar9 + 1;
            if (param_3 < pbVar11) goto LAB_14015a43f;
            uVar7 = uVar7 + *pbVar9;
          }
          else {
            pbVar11 = pbVar9 + 2;
            if (param_3 < pbVar11) goto LAB_14015a43f;
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
        if (uVar13 != 0) goto LAB_14015a50f;
      }
      local_90 = (longlong *)(param_1 + 0x10);
      local_98 = uVar3;
      local_70 = pbVar11;
      if ((bVar2 & 8) == 0) {
LAB_14015a5b1:
        pbVar9 = local_70;
        FUN_14015a8b7(param_1);
        uVar6 = 0;
        local_68 = 0;
        local_50 = 0;
        uVar5 = 0;
LAB_14015a5da:
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
            goto switchD_14015a618_caseD_0;
          case 1:
          case 4:
          case 5:
            break;
          case 2:
            if (uVar7 < (uint)local_98) {
              uVar12 = *(undefined4 *)(*plVar1 + uVar5 * 4);
              goto LAB_14015a64e;
            }
            goto LAB_14015a444;
          case 3:
            if (uVar7 < (uint)local_80) {
              uVar12 = (undefined4)uVar6;
              uVar13 = *(uint *)(*local_90 + (ulonglong)uVar7 * 4);
LAB_14015a64e:
              local_68 = CONCAT44(uVar13,uVar12);
              local_88 = (ulonglong)uVar13;
              uVar6 = local_68;
              goto LAB_14015a852;
            }
            goto LAB_14015a444;
          case 6:
            uVar5 = 0xb8e;
            goto LAB_14015a687;
          case 7:
            uVar5 = 0xe2b;
LAB_14015a687:
            uVar10 = 3;
            break;
          default:
            uVar10 = 4;
          }
          lVar4 = 0;
LAB_14015a690:
          switch((uint)uVar5 & 3) {
          case 0:
            pbVar8 = pbVar9 + 1;
            if (param_3 < pbVar8) goto LAB_14015a444;
            if ((byte)local_98 <= *pbVar9) goto LAB_14015a444;
            *(undefined4 *)(local_60 + lVar4 * 8 + -8) =
                 *(undefined4 *)(*plVar1 + (ulonglong)*pbVar9 * 4);
            switch((uint)(uVar5 >> 2) & 3) {
            case 0:
              goto switchD_14015a72b_caseD_0;
            case 1:
switchD_14015a72b_caseD_1:
              pbVar9 = pbVar8 + 2;
              if (pbVar9 <= param_3) {
                uVar13 = (int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1];
                break;
              }
              goto LAB_14015a444;
            case 2:
switchD_14015a72b_caseD_2:
              pbVar9 = pbVar8 + 1;
              if (param_3 < pbVar9) goto LAB_14015a444;
              uVar13 = (int)(char)*pbVar8 + local_50._4_4_;
              break;
            case 3:
switchD_14015a72b_caseD_3:
              pbVar9 = pbVar8;
              uVar13 = local_50._4_4_;
            }
            goto LAB_14015a7dc;
          case 1:
            pbVar8 = pbVar9 + 2;
            if (param_3 < pbVar8) goto LAB_14015a444;
            *(uint *)(local_60 + lVar4 * 8 + -8) =
                 (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
            switch((uint)(uVar5 >> 2) & 3) {
            case 1:
              goto switchD_14015a72b_caseD_1;
            case 2:
              goto switchD_14015a72b_caseD_2;
            case 3:
              goto switchD_14015a72b_caseD_3;
            }
            break;
          case 2:
            pbVar8 = pbVar9 + 1;
            if (param_3 < pbVar8) goto LAB_14015a444;
            *(int *)(local_60 + lVar4 * 8 + -8) = (int)uVar6 + (int)(char)*pbVar9;
            switch((uint)(uVar5 >> 2) & 3) {
            case 1:
              goto switchD_14015a72b_caseD_1;
            case 2:
              goto switchD_14015a72b_caseD_2;
            case 3:
              goto switchD_14015a72b_caseD_3;
            }
            break;
          case 3:
            *(int *)(local_60 + lVar4 * 8 + -8) = (int)uVar6;
            pbVar8 = pbVar9;
            switch((uint)(uVar5 >> 2) & 3) {
            case 1:
              goto switchD_14015a72b_caseD_1;
            case 2:
              goto switchD_14015a72b_caseD_2;
            case 3:
              goto switchD_14015a72b_caseD_3;
            }
          }
switchD_14015a72b_caseD_0:
          pbVar9 = pbVar8 + 1;
          if (param_3 < pbVar9) goto LAB_14015a444;
          if ((byte)local_80 <= *pbVar8) goto LAB_14015a444;
          uVar13 = *(uint *)(*local_90 + (ulonglong)*pbVar8 * 4);
LAB_14015a7dc:
          *(uint *)(local_60 + lVar4 * 8 + -4) = uVar13;
          if (uVar10 == 4 && (int)lVar4 == 0) {
            if (param_3 < pbVar9 + 1) goto LAB_14015a444;
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
          if (uVar10 <= (uint)lVar4) goto code_r0x00014015a822;
          goto LAB_14015a690;
        }
        goto LAB_14015a444;
      }
      uVar3 = FUN_140158c5d(&local_70,param_3);
      local_74 = (uint)uVar3;
      if (local_74 == 0) goto LAB_14015a5b1;
      goto LAB_14015a444;
    }
  }
LAB_14015a43f:
  local_70 = pbVar8;
  uVar3 = 8;
LAB_14015a444:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_c8);
  }
  return uVar3;
code_r0x00014015a822:
  local_88 = uVar6 >> 0x20;
  if (bVar2 - 1 < 3) {
LAB_14015a852:
    local_70 = pbVar9;
    local_50 = uVar6;
    uVar3 = FUN_14015a8d7(param_1,&local_68);
  }
  else {
    local_70 = pbVar9;
    if (bVar2 - 4 < 2) {
      uVar3 = FUN_14015a93b(param_1,&local_68);
    }
    else {
      if (bVar2 == 0) {
switchD_14015a618_caseD_0:
        FUN_14015a8bc(param_1);
        uVar3 = (ulonglong)local_74;
        goto LAB_14015a444;
      }
      uVar3 = FUN_14015a9a4(param_1,&local_68,local_60);
    }
  }
  local_74 = (uint)uVar3;
  uVar5 = local_88;
  if (local_74 != 0) goto LAB_14015a444;
  goto LAB_14015a5da;
}

