/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006fd6b */

ulonglong FUN_14006fd6b(longlong *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_b8 [40];
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 *local_78;
  uint local_6c;
  longlong local_68;
  uint local_5c;
  undefined8 *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_b8;
  plVar9 = *(longlong **)(param_2 + 0x24);
  lVar10 = plVar9[1];
  puVar7 = *(undefined8 **)(param_2 + 0xb4);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_14001f8b9(lVar10,"sfnt");
    if (puVar7 == (undefined8 *)0x0) {
      uVar11 = 0xb;
      goto LAB_140070043;
    }
    *(undefined8 **)(param_2 + 0xb4) = puVar7;
    *(undefined8 *)(param_2 + 0xa8) = *puVar7;
    plVar9 = *(longlong **)(param_2 + 0x24);
  }
  lVar8 = FUN_14001f8d7(plVar9,"postscript-cmaps",'\x01');
  *(longlong *)(param_2 + 0xb6) = lVar8;
  if (*(longlong *)(param_2 + 0xb8) == 0) {
    plVar9 = FUN_14001d3fa(lVar10,"truetype");
    lVar8 = FUN_14001f8d7(plVar9,"multi-masters",'\0');
    *(longlong *)(param_2 + 0xb8) = lVar8;
  }
  if (*(longlong *)(param_2 + 0xba) == 0) {
    plVar9 = FUN_14001d3fa(lVar10,"truetype");
    lVar10 = FUN_14001f8d7(plVar9,"metrics-variations",'\0');
    *(longlong *)(param_2 + 0xba) = lVar10;
  }
  if (*(longlong *)(param_2 + 0xbc) == 0) {
    lVar10 = FUN_14001f8d7(*(longlong **)(param_2 + 0x24),"metrics-variations",'\0');
    *(longlong *)(param_2 + 0xbc) = lVar10;
  }
  uVar11 = FUN_1400748ab(param_1,(longlong)param_2);
  local_4c = (uint)uVar11;
  if (local_4c != 0) goto LAB_140070043;
  plVar9 = *(longlong **)(param_2 + 0x28);
  uVar1 = -param_3;
  if ((int)-param_3 < 0) {
    uVar1 = param_3;
  }
  uVar5 = (uVar1 & 0xffff) - (uint)((uVar1 & 0xffff) != 0 && (int)param_3 < 0);
  if ((int)param_2[0x38] <= (int)uVar5) {
    uVar11 = 6;
    if (-1 < (int)param_3) goto LAB_140070043;
    uVar5 = 0;
  }
  uVar11 = FUN_140020a41((longlong)plVar9,
                         *(uint *)(*(longlong *)(param_2 + 0x3a) + (ulonglong)uVar5 * 4));
  if ((int)uVar11 != 0) goto LAB_140070043;
  uVar11 = (*(code *)puVar7[0x18])(param_2,plVar9);
  local_4c = (uint)uVar11;
  if (local_4c != 0) goto LAB_140070043;
  local_68 = *(longlong *)(param_2 + 0x26);
  iVar6 = (**(code **)(param_2 + 0xa8))(param_2,0x66766172,plVar9);
  if ((((iVar6 == 0) && (0x13 < local_50)) &&
      (uVar5 = FUN_140020e0f(plVar9,&local_4c), local_4c == 0)) &&
     (uVar2 = FUN_140020aa5(plVar9,&local_4c), local_4c == 0)) {
    uVar12 = FUN_140020a93((longlong)plVar9,2);
    local_4c = (uint)uVar12;
    if ((local_4c != 0) || (uVar3 = FUN_140020aa5(plVar9,&local_4c), local_4c != 0))
    goto LAB_14006fff1;
    uVar4 = FUN_140020aa5(plVar9,&local_4c);
    uVar17 = (uint)CONCAT62(extraout_var,uVar4);
    if (local_4c != 0) goto LAB_14006fff1;
    uVar4 = FUN_140020aa5(plVar9,&local_4c);
    local_90 = (uint)CONCAT62(extraout_var_00,uVar4);
    if (local_4c != 0) goto LAB_14006fff1;
    uVar4 = FUN_140020aa5(plVar9,&local_4c);
    if (local_4c != 0) goto LAB_14006fff1;
    uVar11 = (ulonglong)uVar2;
    uVar15 = (uint)CONCAT62(extraout_var_01,uVar4);
    uVar16 = local_90;
  }
  else {
LAB_14006fff1:
    uVar5 = 0;
    uVar11 = 0;
    uVar3 = 0;
    uVar17 = 0;
    uVar15 = 0;
    uVar16 = 0;
  }
  lVar10 = local_68;
  if ((ushort)(uVar3 + 0xc001) < 0xc002 || ((short)uVar17 != 0x14 || uVar5 != 0x10000)) {
    uVar16 = 0;
  }
  else {
    uVar5 = uVar15 & 0xffff;
    uVar14 = uVar16 & 0xffff;
    if ((uint)uVar3 * 4 + 4 == uVar5) {
      if (uVar14 < 0x7f00) {
LAB_1400700ae:
        if (uVar5 * uVar14 + (int)uVar11 + (uint)uVar3 * 0x14 <= local_50) {
          *(byte *)(param_2 + 0x104) = *(byte *)(param_2 + 0x104) | 1;
          goto LAB_1400700cd;
        }
      }
    }
    else if (uVar14 < 0x7f00 && (uint)uVar3 * 4 + 6 == uVar5) goto LAB_1400700ae;
    uVar16 = 0;
  }
LAB_1400700cd:
  if ((*(byte *)(param_2 + 0x104) & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (uint)uVar3 * 4;
    local_8c = uVar17;
    local_88 = uVar11;
    local_80 = (ulonglong)uVar3;
    local_5c = uVar15;
    local_78 = (undefined8 *)FUN_14001e961(local_68,uVar5,(int *)&local_4c);
    if (local_4c == 0) {
      local_90 = uVar16;
      puVar13 = (undefined8 *)FUN_14001e961(lVar10,uVar5,(int *)&local_4c);
      uVar17 = local_8c;
      puVar7 = local_78;
      uVar16 = local_90;
      if (local_4c == 0) {
        local_6c = uVar5;
        local_58 = puVar13;
        iVar6 = FUN_140020f72((longlong)plVar9);
        iVar6 = iVar6 + (int)local_88;
        local_88 = (ulonglong)(iVar6 - 0x10);
        if ((int)local_80 != 0) {
          uVar5 = iVar6 - 8;
          uVar11 = local_80 & 0xffffffff;
          puVar7 = local_78;
          do {
            uVar12 = FUN_140020f76(plVar9,uVar5,puVar7,4);
            local_4c = (uint)uVar12;
            uVar5 = uVar5 + (uVar17 & 0xffff);
            puVar7 = (undefined8 *)((longlong)puVar7 + 4);
            uVar16 = (int)uVar11 - 1;
            uVar11 = (ulonglong)uVar16;
          } while (uVar16 != 0);
        }
        puVar13 = local_58;
        puVar7 = local_78;
        local_8c = local_90 & 0xffff;
        if ((short)local_90 == 0) {
          uVar5 = 0;
        }
        else {
          uVar17 = (uVar17 & 0xffff) * (int)local_80 + (int)local_88 + 4;
          local_80 = (ulonglong)local_6c;
          local_88 = CONCAT44(local_88._4_4_,local_5c) & 0xffffffff0000ffff;
          uVar16 = 0;
          do {
            uVar12 = FUN_140020f76(plVar9,uVar17,puVar13,local_6c);
            local_4c = (uint)uVar12;
            iVar6 = memcmp(puVar7,puVar13,local_80);
            uVar5 = uVar16;
            if (iVar6 == 0) break;
            uVar17 = uVar17 + (int)local_88;
            uVar16 = uVar16 + 1;
            uVar5 = local_8c;
          } while (local_8c != uVar16);
        }
        param_2[0x109] = uVar5 + 1;
        puVar13 = local_58;
        lVar10 = local_68;
        uVar16 = local_90 + (uVar5 == local_8c);
      }
    }
    else {
      puVar13 = (undefined8 *)0x0;
      puVar7 = local_78;
    }
  }
  FUN_14001c53d(lVar10,(longlong)puVar7);
  FUN_14001c53d(lVar10,(longlong)puVar13);
  iVar6 = (**(code **)(param_2 + 0xa8))(param_2,0x676c7966,plVar9,0);
  if (((iVar6 != 0) &&
      (iVar6 = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,plVar9,0), iVar6 != 0)) &&
     ((iVar6 = (**(code **)(param_2 + 0xa8))(param_2,0x6876676c,plVar9,0), iVar6 != 0 &&
      (iVar6 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,plVar9,0), iVar6 == 0)))) {
    uVar16 = 0;
  }
  if ((uVar16 & 0xffff) < uVar1 >> 0x10) {
    if (-1 < (int)param_3) {
      uVar11 = 6;
      goto LAB_140070043;
    }
    uVar16 = 0;
  }
  param_2[3] = uVar16 << 0x10;
  *param_2 = param_2[0x38];
  param_2[1] = param_3;
  uVar11 = (ulonglong)local_4c;
LAB_140070043:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_b8);
  }
  return uVar11;
}

