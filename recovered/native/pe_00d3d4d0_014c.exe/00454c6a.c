/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00454c6a */

int __fastcall FUN_00454c6a(int param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint local_54;
  int local_50;
  int *local_4c;
  int *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  byte *local_38;
  uint local_34 [2];
  undefined8 local_2c;
  undefined8 local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_54;
  local_3c = 0;
  pbVar6 = param_2 + 1;
  pbVar9 = local_38;
  if (pbVar6 <= param_3) {
    bVar2 = *param_2;
    uVar8 = (uint)bVar2;
    pbVar9 = pbVar6;
    if (-1 < (char)bVar2) {
      if ((bVar2 & 4) == 0) {
        uVar11 = 0;
        if ((bVar2 & 2) == 0) {
          uVar12 = 0;
          local_38 = pbVar6;
        }
        else {
          local_38 = param_2 + 2;
          if (param_3 < local_38) goto LAB_00454cf0;
          uVar12 = (uint)*pbVar6;
        }
        if ((bVar2 & 1) != 0) {
          pbVar9 = local_38;
          if (param_3 < local_38 + 1) goto LAB_00454cf0;
          uVar11 = (uint)*local_38;
          local_38 = local_38 + 1;
        }
      }
      else {
        local_38 = param_2 + 2;
        if (param_3 < local_38) goto LAB_00454cf0;
        uVar12 = *pbVar6 & 0xf;
        uVar11 = (uint)(*pbVar6 >> 4);
      }
      pbVar6 = local_38;
      uVar7 = uVar12 + uVar11;
      piVar1 = (int *)(param_1 + 8);
      local_54 = uVar8;
      local_50 = param_1;
      local_44 = uVar12;
      local_40 = uVar11;
      if (*(uint *)(param_1 + 4) < uVar7) {
        uVar8 = uVar7 + 7 & 0xfffffff8;
        iVar3 = FUN_0041c6b3(**(int **)(param_1 + 0x1c),4,*(uint *)(param_1 + 4),uVar8,*piVar1,
                             &local_3c);
        *piVar1 = iVar3;
        iVar4 = local_3c;
        if (local_3c != 0) goto LAB_00454cf5;
        *(uint *)(local_50 + 4) = uVar8;
        local_48 = (int *)(local_50 + 0xc);
        *(uint *)(local_50 + 0xc) = iVar3 + local_44 * 4;
LAB_00454d99:
        uVar12 = 0;
        uVar11 = 0;
        uVar8 = 0;
        do {
          pbVar13 = pbVar6;
          pbVar9 = local_38;
          if ((uVar8 & 7) == 0) {
            local_4c = piVar1;
            if (param_3 < pbVar6 + 1) goto LAB_00454cf0;
            uVar11 = (uint)*pbVar6;
            pbVar13 = pbVar6 + 1;
          }
          if ((uVar11 & 1) == 0) {
            pbVar6 = pbVar13 + 1;
            local_4c = piVar1;
            if (param_3 < pbVar6) goto LAB_00454cf0;
            uVar12 = uVar12 + *pbVar13;
          }
          else {
            pbVar6 = pbVar13 + 2;
            local_4c = piVar1;
            if (param_3 < pbVar6) goto LAB_00454cf0;
            uVar12 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
          }
          *(uint *)(*piVar1 + uVar8 * 4) = uVar12;
          uVar11 = uVar11 >> 1;
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
      else {
        local_48 = (int *)(param_1 + 0xc);
        *(uint *)(param_1 + 0xc) = uVar12 * 4 + *(int *)(param_1 + 8);
        if (uVar7 != 0) goto LAB_00454d99;
      }
      local_4c = piVar1;
      local_38 = pbVar6;
      if (((local_54 & 8) == 0) ||
         (local_3c = FUN_004536af((uint *)&local_38,param_3), iVar4 = local_3c, local_3c == 0)) {
        pbVar9 = local_38;
        FUN_004550ba(local_50);
        uVar11 = 0;
        local_34[1] = 0;
        local_34[0] = 0;
        local_18 = 0;
        local_1c = 0;
        uVar8 = 0;
LAB_00454e45:
        pbVar6 = pbVar9 + 1;
        iVar4 = 8;
        if (pbVar6 <= param_3) {
          uVar7 = *pbVar9 & 0xf;
          uVar12 = (uint)(*pbVar9 >> 4);
          local_38 = pbVar6;
          switch(uVar12) {
          case 0:
            goto switchD_00454e6c_caseD_0;
          case 1:
          case 4:
          case 5:
            uVar10 = 1;
            break;
          case 2:
            if (uVar7 < local_44) {
              uVar8 = *(uint *)(*local_4c + uVar7 * 4);
              local_34[0] = uVar8;
              local_34[1] = uVar11;
              goto LAB_0045505d;
            }
            goto LAB_00454cf5;
          case 3:
            if (uVar7 < local_40) {
              uVar11 = *(uint *)(*local_48 + uVar7 * 4);
              local_34[0] = uVar8;
              local_34[1] = uVar11;
              goto LAB_0045505d;
            }
            goto LAB_00454cf5;
          case 6:
            uVar7 = 0xb8e;
            goto LAB_00454ee0;
          case 7:
            uVar7 = 0xe2b;
LAB_00454ee0:
            uVar10 = 3;
            break;
          default:
            uVar10 = 4;
          }
          uVar5 = 0;
          pbVar9 = pbVar6;
LAB_00454ee7:
          local_54 = uVar12;
          switch(uVar7 & 3) {
          case 0:
            pbVar6 = pbVar9 + 1;
            if ((param_3 < pbVar6) || (local_44 <= *pbVar9)) goto LAB_00454cf5;
            local_34[uVar5 * 2] = *(uint *)(*local_4c + (uint)*pbVar9 * 4);
            switch(uVar7 >> 2 & 3) {
            case 0:
              goto switchD_00454f5e_caseD_0;
            case 1:
switchD_00454f5e_caseD_1:
              pbVar9 = pbVar6 + 2;
              if (pbVar9 <= param_3) {
                uVar8 = (int)(short)((ushort)*pbVar6 << 8) | (uint)pbVar6[1];
                break;
              }
              goto LAB_00454cf5;
            case 2:
switchD_00454f5e_caseD_2:
              pbVar9 = pbVar6 + 1;
              if (param_3 < pbVar9) goto LAB_00454cf5;
              uVar8 = (int)(char)*pbVar6 + local_18;
              break;
            case 3:
switchD_00454f5e_caseD_3:
              pbVar9 = pbVar6;
              uVar8 = local_18;
            }
            goto LAB_00454ff5;
          case 1:
            pbVar6 = pbVar9 + 2;
            if (param_3 < pbVar6) goto LAB_00454cf5;
            local_34[uVar5 * 2] = (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
            switch(uVar7 >> 2 & 3) {
            case 1:
              goto switchD_00454f5e_caseD_1;
            case 2:
              goto switchD_00454f5e_caseD_2;
            case 3:
              goto switchD_00454f5e_caseD_3;
            }
            break;
          case 2:
            pbVar6 = pbVar9 + 1;
            if (param_3 < pbVar6) goto LAB_00454cf5;
            local_34[uVar5 * 2] = uVar8 + (int)(char)*pbVar9;
            switch(uVar7 >> 2 & 3) {
            case 1:
              goto switchD_00454f5e_caseD_1;
            case 2:
              goto switchD_00454f5e_caseD_2;
            case 3:
              goto switchD_00454f5e_caseD_3;
            }
            break;
          case 3:
            local_34[uVar5 * 2] = uVar8;
            pbVar6 = pbVar9;
            switch(uVar7 >> 2 & 3) {
            case 1:
              goto switchD_00454f5e_caseD_1;
            case 2:
              goto switchD_00454f5e_caseD_2;
            case 3:
              goto switchD_00454f5e_caseD_3;
            }
          }
switchD_00454f5e_caseD_0:
          pbVar9 = pbVar6 + 1;
          if ((param_3 < pbVar9) || (local_40 <= *pbVar6)) goto LAB_00454cf5;
          uVar8 = *(uint *)(*local_48 + (uint)*pbVar6 * 4);
LAB_00454ff5:
          local_34[uVar5 * 2 + 1] = uVar8;
          if (uVar10 == 4 && uVar5 == 0) {
            if (param_3 < pbVar9 + 1) goto LAB_00454cf5;
            uVar7 = (uint)*pbVar9;
            uVar10 = 3;
            pbVar9 = pbVar9 + 1;
          }
          else {
            uVar7 = uVar7 >> 4;
          }
          uVar8 = local_34[uVar5 * 2];
          uVar11 = local_34[uVar5 * 2 + 1];
          local_18 = uVar11;
          local_1c = uVar8;
          uVar5 = uVar5 + 1;
          if (uVar10 <= uVar5) goto code_r0x00455037;
          goto LAB_00454ee7;
        }
      }
      goto LAB_00454cf5;
    }
  }
LAB_00454cf0:
  local_38 = pbVar9;
  iVar4 = 8;
LAB_00454cf5:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_54)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_54);
  }
  return iVar4;
code_r0x00455037:
  pbVar6 = pbVar9;
  if (uVar12 - 1 < 3) {
LAB_0045505d:
    local_38 = pbVar6;
    local_1c = uVar8;
    local_18 = uVar11;
    iVar4 = FUN_004550d4(local_50,(undefined8 *)local_34);
    pbVar9 = pbVar6;
  }
  else {
    local_38 = pbVar9;
    if (uVar12 - 4 < 2) {
      iVar4 = FUN_00455127(local_50,(undefined8 *)local_34);
    }
    else {
      if (uVar12 == 0) {
switchD_00454e6c_caseD_0:
        FUN_004550bf(local_50);
        iVar4 = local_3c;
        goto LAB_00454cf5;
      }
      iVar4 = FUN_0045517a(local_50,(undefined8 *)local_34,&local_2c,&local_24);
    }
  }
  local_3c = iVar4;
  if (iVar4 != 0) goto LAB_00454cf5;
  goto LAB_00454e45;
}

