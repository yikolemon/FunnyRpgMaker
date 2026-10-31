/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140171e17 */

ulonglong FUN_140171e17(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  void *pvVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  void *pvVar17;
  uint uVar18;
  undefined1 auStack_b8 [40];
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  ulonglong local_80;
  void *local_78;
  uint local_6c;
  undefined8 local_68;
  uint local_5c;
  void *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  lVar14 = *(longlong *)(param_2 + 0x24);
  uVar10 = *(undefined8 *)(lVar14 + 8);
  puVar8 = *(undefined8 **)(param_2 + 0xb4);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_14012c249(uVar10,&DAT_140ec386a);
    if (puVar8 == (undefined8 *)0x0) {
      uVar11 = 0xb;
      goto LAB_1401720ef;
    }
    *(undefined8 **)(param_2 + 0xb4) = puVar8;
    *(undefined8 *)(param_2 + 0xa8) = *puVar8;
    lVar14 = *(longlong *)(param_2 + 0x24);
  }
  uVar9 = FUN_14012c267(lVar14,"postscript-cmaps",1);
  *(undefined8 *)(param_2 + 0xb6) = uVar9;
  if (*(longlong *)(param_2 + 0xb8) == 0) {
    uVar9 = FUN_1401299f6(uVar10,"truetype");
    uVar9 = FUN_14012c267(uVar9,"multi-masters",0);
    *(undefined8 *)(param_2 + 0xb8) = uVar9;
  }
  if (*(longlong *)(param_2 + 0xba) == 0) {
    uVar10 = FUN_1401299f6(uVar10,"truetype");
    uVar10 = FUN_14012c267(uVar10,"metrics-variations",0);
    *(undefined8 *)(param_2 + 0xba) = uVar10;
  }
  if (*(longlong *)(param_2 + 0xbc) == 0) {
    uVar10 = FUN_14012c267(*(undefined8 *)(param_2 + 0x24),"metrics-variations",0);
    *(undefined8 *)(param_2 + 0xbc) = uVar10;
  }
  uVar11 = FUN_140176957(param_1,param_2);
  local_4c = (uint)uVar11;
  if (local_4c != 0) goto LAB_1401720ef;
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  iVar15 = (int)param_3;
  uVar16 = (ulonglong)(uint)-iVar15;
  if (-iVar15 < 0) {
    uVar16 = param_3 & 0xffffffff;
  }
  uVar2 = ((uint)uVar16 & 0xffff) - (uint)((uVar16 & 0xffff) != 0 && iVar15 < 0);
  if ((int)param_2[0x38] <= (int)uVar2) {
    uVar11 = 6;
    if (-1 < iVar15) goto LAB_1401720ef;
    uVar2 = 0;
  }
  uVar11 = FUN_14012d612(uVar10,*(undefined4 *)
                                 (*(longlong *)(param_2 + 0x3a) + (ulonglong)uVar2 * 4));
  if ((int)uVar11 != 0) goto LAB_1401720ef;
  uVar11 = (*(code *)puVar8[0x18])(param_2,uVar10);
  local_4c = (uint)uVar11;
  if (local_4c != 0) goto LAB_1401720ef;
  local_68 = *(undefined8 *)(param_2 + 0x26);
  iVar3 = (**(code **)(param_2 + 0xa8))(param_2,0x66766172,uVar10);
  if ((((iVar3 == 0) && (0x13 < local_50)) &&
      (iVar3 = FUN_14012d9e0(uVar10,&local_4c), local_4c == 0)) &&
     (uVar2 = FUN_14012d676(uVar10,&local_4c), local_4c == 0)) {
    local_4c = FUN_14012d664(uVar10,2);
    if (((local_4c != 0) || (uVar1 = FUN_14012d676(uVar10,&local_4c), local_4c != 0)) ||
       ((uVar4 = FUN_14012d676(uVar10,&local_4c), local_4c != 0 ||
        ((local_90 = FUN_14012d676(uVar10,&local_4c), local_4c != 0 ||
         (uVar5 = FUN_14012d676(uVar10,&local_4c), local_4c != 0)))))) goto LAB_14017209d;
    uVar11 = (ulonglong)uVar2 & 0xffff;
    uVar2 = local_90;
  }
  else {
LAB_14017209d:
    iVar3 = 0;
    uVar11 = 0;
    uVar1 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar2 = 0;
  }
  uVar9 = local_68;
  uVar18 = (uint)uVar1;
  if ((ushort)(uVar1 + 0xc001) < 0xc002 || ((short)uVar4 != 0x14 || iVar3 != 0x10000)) {
    uVar2 = 0;
  }
  else {
    uVar6 = uVar5 & 0xffff;
    uVar13 = uVar2 & 0xffff;
    if (uVar18 * 4 + 4 == uVar6) {
      if (uVar13 < 0x7f00) {
LAB_14017215a:
        if (uVar6 * uVar13 + (int)uVar11 + uVar18 * 0x14 <= local_50) {
          *(byte *)(param_2 + 0x104) = *(byte *)(param_2 + 0x104) | 1;
          goto LAB_140172179;
        }
      }
    }
    else if (uVar13 < 0x7f00 && uVar18 * 4 + 6 == uVar6) goto LAB_14017215a;
    uVar2 = 0;
  }
LAB_140172179:
  if ((*(byte *)(param_2 + 0x104) & 1) == 0) {
    pvVar12 = (void *)0x0;
    pvVar17 = (void *)0x0;
  }
  else {
    uVar18 = uVar18 * 4;
    local_8c = uVar4;
    local_88 = uVar11;
    local_80 = (ulonglong)uVar1;
    local_5c = uVar5;
    local_78 = (void *)FUN_14012afda(local_68,uVar18,&local_4c);
    if (local_4c == 0) {
      local_90 = uVar2;
      pvVar12 = (void *)FUN_14012afda(uVar9,uVar18,&local_4c);
      uVar4 = local_8c;
      pvVar17 = local_78;
      uVar2 = local_90;
      if (local_4c == 0) {
        local_6c = uVar18;
        local_58 = pvVar12;
        iVar3 = FUN_14012db43(uVar10);
        iVar3 = iVar3 + (int)local_88;
        local_88 = (ulonglong)(iVar3 - 0x10);
        if ((int)local_80 != 0) {
          iVar3 = iVar3 + -8;
          uVar11 = local_80 & 0xffffffff;
          pvVar17 = local_78;
          do {
            local_4c = FUN_14012db47(uVar10,iVar3,pvVar17,4);
            iVar3 = iVar3 + (uVar4 & 0xffff);
            pvVar17 = (void *)((longlong)pvVar17 + 4);
            uVar2 = (int)uVar11 - 1;
            uVar11 = (ulonglong)uVar2;
          } while (uVar2 != 0);
        }
        pvVar12 = local_58;
        pvVar17 = local_78;
        local_8c = local_90 & 0xffff;
        if ((short)local_90 == 0) {
          uVar2 = 0;
        }
        else {
          iVar3 = (uVar4 & 0xffff) * (int)local_80 + (int)local_88 + 4;
          local_80 = (ulonglong)local_6c;
          local_88 = CONCAT44(local_88._4_4_,local_5c) & 0xffffffff0000ffff;
          uVar4 = 0;
          do {
            local_4c = FUN_14012db47(uVar10,iVar3,pvVar12,local_6c);
            iVar7 = memcmp(pvVar17,pvVar12,local_80);
            uVar2 = uVar4;
            if (iVar7 == 0) break;
            iVar3 = iVar3 + (int)local_88;
            uVar4 = uVar4 + 1;
            uVar2 = local_8c;
          } while (local_8c != uVar4);
        }
        param_2[0x109] = uVar2 + 1;
        pvVar12 = local_58;
        uVar9 = local_68;
        uVar2 = local_90 + (uVar2 == local_8c);
      }
    }
    else {
      pvVar12 = (void *)0x0;
      pvVar17 = local_78;
    }
  }
  FUN_140128b39(uVar9,pvVar17);
  FUN_140128b39(uVar9,pvVar12);
  iVar3 = (**(code **)(param_2 + 0xa8))(param_2,0x676c7966,uVar10,0);
  if ((((iVar3 != 0) &&
       (iVar3 = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,uVar10,0), iVar3 != 0)) &&
      (iVar3 = (**(code **)(param_2 + 0xa8))(param_2,0x6876676c,uVar10,0), iVar3 != 0)) &&
     (iVar3 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,uVar10,0), iVar3 == 0)) {
    uVar2 = 0;
  }
  if ((uVar2 & 0xffff) < (uint)(uVar16 >> 0x10)) {
    if (-1 < iVar15) {
      uVar11 = 6;
      goto LAB_1401720ef;
    }
    uVar2 = 0;
  }
  param_2[3] = uVar2 << 0x10;
  *param_2 = param_2[0x38];
  param_2[1] = iVar15;
  uVar11 = (ulonglong)local_4c;
LAB_1401720ef:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_b8);
  }
  return uVar11;
}

