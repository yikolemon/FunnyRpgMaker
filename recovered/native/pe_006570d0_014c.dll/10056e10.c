/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10056e10 */

void __thiscall FUN_10056e10(undefined4 *param_1,undefined4 *param_2,byte param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_d0 [28];
  undefined1 local_b4 [28];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  uint local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 *local_44;
  uint local_40;
  uint local_3c;
  undefined4 *local_38;
  uint local_34;
  int local_30;
  byte local_29;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_d0;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005ad50;
  local_1c = ExceptionList;
  if (param_2[4] == 0) {
    return;
  }
  local_28 = (int)param_1 + 0x4e;
  local_24 = 0;
  uVar7 = 0;
  local_30 = 0;
  iVar5 = 0;
  bVar3 = 0;
  local_34 = 0;
  local_44 = param_2;
  ExceptionList = &local_1c;
  local_38 = param_1;
code_r0x10056e77:
  iVar4 = local_24;
  local_4c = param_2;
  if (0xf < (uint)param_2[5]) {
    local_4c = (undefined4 *)*param_2;
  }
  local_3c = param_2[4];
  local_48 = local_38[0x9a];
  local_50 = local_48 - 1;
  do {
    uVar8 = uVar7;
    local_29 = *(byte *)((int)local_4c + uVar8);
    uVar7 = (uint)local_29;
    if (bVar3 == 0) {
      local_34 = 0xffU >> ((&DAT_10293574)[uVar7] & 0x1f) & uVar7;
    }
    else {
      local_34 = local_34 << 6 | uVar7 & 0x3f;
    }
    bVar3 = (&DAT_10293674)[(uint)(byte)(&DAT_10293574)[uVar7] + (uint)bVar3 * 0x10];
    local_40 = uVar8;
    if (bVar3 != 1) {
      uVar7 = uVar8;
      if (bVar3 != 0) {
        if (param_3 == 0) {
          *(byte *)(local_28 + local_24) = local_29;
          local_24 = local_24 + 1;
        }
        local_30 = local_30 + 1;
        goto LAB_100570fc;
      }
      switch(local_34) {
      case 8:
        *(undefined2 *)(local_28 + local_24) = 0x625c;
        break;
      case 9:
        *(undefined2 *)(local_28 + local_24) = 0x745c;
        break;
      case 10:
        *(undefined2 *)(local_28 + local_24) = 0x6e5c;
        break;
      case 0xb:
switchD_10056f25_caseD_b:
        if ((0x1f < local_34 & (param_3 ^ 1 | local_34 < 0x7f)) == 0) {
          if (local_34 < 0x10000) {
            FUN_10054804(local_28 + local_24,7,"\\u%04x",local_34);
            iVar5 = iVar4 + 6;
          }
          else {
            FUN_10054804(local_28 + local_24,0xd,&DAT_10330a21,(local_34 >> 10) + 0xd7c0 & 0xffff,
                         local_34 & 0x3ff | 0xdc00);
            iVar5 = iVar4 + 0xc;
          }
        }
        else {
          *(byte *)(local_28 + local_24) = local_29;
          iVar5 = local_24 + 1;
        }
        goto LAB_100570b9;
      case 0xc:
        *(undefined2 *)(local_28 + local_24) = 0x665c;
        break;
      case 0xd:
        *(undefined2 *)(local_28 + local_24) = 0x725c;
        break;
      default:
        if (local_34 == 0x22) {
          *(undefined2 *)(local_28 + local_24) = 0x225c;
        }
        else {
          if (local_34 != 0x5c) goto switchD_10056f25_caseD_b;
          *(undefined2 *)(local_28 + local_24) = 0x5c5c;
        }
      }
      iVar5 = local_24 + 2;
LAB_100570b9:
      if (0xc < iVar5 - 500U) goto LAB_100570f2;
      local_14 = 0xffffffff;
      (**(code **)(*(int *)*local_38 + 4))(local_28,iVar5);
      goto LAB_100570e0;
    }
    if (local_50 < 2) break;
    if (local_48 == 0) {
      local_14 = 0xffffffff;
      FUN_100577de(local_80,uVar7);
      local_14 = 0;
      FUN_10051841(local_98,local_40);
      local_14 = 1;
      FUN_100545ad(local_68,"invalid UTF-8 byte at index ",local_98,": 0x",local_80);
      local_14 = 2;
      FUN_10017546(local_d0,0x13c,local_68,0);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_d0,&DAT_1036074c);
    }
    bVar3 = 1;
    uVar7 = uVar8 + 1;
    if (local_3c <= uVar8 + 1) goto code_r0x10057192;
  } while( true );
  uVar7 = (uVar8 - 1) + (uint)(local_30 == 0);
  if (local_48 == 1) {
    puVar1 = (undefined4 *)(local_28 + iVar5);
    if (param_3 == 0) {
      *(undefined2 *)puVar1 = 0xbfef;
      uVar2 = 0xbd;
      iVar6 = 2;
      iVar4 = 3;
    }
    else {
      *puVar1 = 0x6666755c;
      *(undefined1 *)(puVar1 + 1) = 0x66;
      uVar2 = 100;
      iVar6 = 5;
      iVar4 = 6;
    }
    *(undefined1 *)((int)puVar1 + iVar6) = uVar2;
    iVar6 = iVar5 + iVar4;
    bVar3 = 0;
    if ((iVar5 + iVar4) - 500U < 0xd) {
      local_14 = 0xffffffff;
      (**(code **)(*(int *)*local_38 + 4))(local_28,iVar6);
      uVar8 = uVar7;
LAB_100570e0:
      bVar3 = 0;
      local_30 = 0;
      local_24 = 0;
      iVar5 = 0;
      uVar7 = uVar8;
    }
    else {
      local_30 = 0;
      iVar5 = iVar6;
      local_24 = iVar6;
    }
  }
  else {
LAB_100570f2:
    bVar3 = 0;
    local_30 = 0;
    local_24 = iVar5;
  }
LAB_100570fc:
  uVar7 = uVar7 + 1;
  local_3c = param_2[4];
  if (local_3c <= uVar7) {
    if (bVar3 == 0) {
      if (local_24 == 0) {
        ExceptionList = local_1c;
        return;
      }
      local_14 = 0xffffffff;
      (**(code **)(*(int *)*local_38 + 4))(local_28,local_24);
      ExceptionList = local_1c;
      return;
    }
code_r0x10057192:
    puVar1 = local_38;
    iVar4 = local_38[0x9a];
    if (iVar4 == 1) {
      local_14 = 0xffffffff;
      (**(code **)(*(int *)*local_38 + 4))(local_28,iVar5);
      if (param_3 == 0) {
        (**(code **)(*(int *)*puVar1 + 4))(&DAT_1032ef29,3);
        ExceptionList = local_1c;
        return;
      }
      (**(code **)(*(int *)*puVar1 + 4))("\\ufffd",6);
      ExceptionList = local_1c;
      return;
    }
    if (iVar4 != 2) {
      if (iVar4 != 0) {
        ExceptionList = local_1c;
        return;
      }
      if (0xf < (uint)param_2[5]) {
        local_44 = (undefined4 *)*param_2;
      }
      local_14 = 0xffffffff;
      FUN_100577de(local_80,*(undefined1 *)((int)local_44 + (local_3c - 1)));
      local_14 = 3;
      FUN_10051427(local_68,"incomplete UTF-8 string; last byte: 0x",local_80);
      local_14 = 4;
      FUN_10017546(local_b4,0x13c,local_68,0);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_b4,&DAT_1036074c);
    }
    local_14 = 0xffffffff;
    (**(code **)(*(int *)*local_38 + 4))(local_28,iVar5);
    ExceptionList = local_1c;
    return;
  }
  goto code_r0x10056e77;
}

