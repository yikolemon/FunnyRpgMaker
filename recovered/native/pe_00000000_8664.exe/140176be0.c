/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140176be0 */

int FUN_140176be0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  int *local_a0;
  uint *local_98;
  longlong local_90;
  ulonglong local_88;
  uint local_80;
  uint local_7c;
  undefined1 local_78 [4];
  undefined4 local_74;
  uint local_70;
  undefined2 local_6c;
  uint local_68;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_4c = FUN_14012e0a0(param_1,&DAT_140eb0e60,local_78);
  iVar13 = local_4c;
  if (((((local_4c != 0) || (iVar13 = 8, local_74 == 0x74746366)) || (local_74 == 0x774f4646)) ||
      (((ushort)(local_6c - 0x1000) < 0xf001 || local_70 != *(uint *)(param_1 + 8) ||
       (local_70 <= ((uint)local_6c + (uint)local_6c * 4) * 4 + 0x2c)))) ||
     ((local_68 & 3) != 0 || local_68 <= ((uint)local_6c << 4 | 0xc))) goto LAB_140176c2a;
  if (local_60 == 0) {
    if (local_5c != 0 || local_58 != 0) goto LAB_140176c2a;
  }
  else if ((local_5c != 0) && (local_58 == 0)) goto LAB_140176c2a;
  if ((local_54 == 0) && (local_50 != 0)) goto LAB_140176c2a;
  puVar7 = (undefined1 *)FUN_14012afda(uVar3,0xc,&local_4c);
  if (local_4c == 0) {
    lVar8 = FUN_140128a1f(uVar3,0x48,&local_4c);
    if (local_4c != 0) goto LAB_140176d48;
    iVar13 = 0x1f;
    if (local_6c != 0) {
      for (; local_6c >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar11 = 0x10 << ((byte)iVar13 & 0x1f);
    iVar5 = (uint)local_6c * 0x10 - iVar11;
    *puVar7 = local_74._3_1_;
    puVar7[1] = local_74._2_1_;
    puVar7[2] = local_74._1_1_;
    puVar7[3] = (undefined1)local_74;
    puVar7[4] = local_6c._1_1_;
    puVar7[5] = (undefined1)local_6c;
    puVar7[6] = (char)((uint)iVar11 >> 8);
    puVar7[7] = (char)iVar11;
    puVar7[8] = 0;
    puVar7[9] = (byte)iVar13;
    puVar7[10] = (char)((uint)iVar5 >> 8);
    puVar7[0xb] = (char)iVar5;
    local_a8 = (undefined1 *)0x0;
    lVar10 = 0;
    local_a0 = &local_4c;
    puVar9 = (uint *)FUN_14012b8aa(uVar3,0x18,0,local_6c);
    if (local_4c == 0) {
      local_a0 = &local_4c;
      local_a8 = (undefined1 *)0x0;
      lVar10 = FUN_14012b8aa(uVar3,8,0,local_6c);
      if ((local_4c == 0) &&
         (local_98 = puVar9, local_4c = FUN_14012dc34(param_1,(uint)local_6c * 0x14),
         puVar9 = local_98, local_4c == 0)) {
        local_90 = lVar8;
        if (local_6c != 0) {
          uVar6 = 0;
          uVar12 = 0;
          do {
            local_88 = CONCAT44(local_88._4_4_,uVar6);
            uVar6 = FUN_14012dddf(param_1);
            *puVar9 = uVar6;
            uVar6 = FUN_14012dddf(param_1);
            puVar9[1] = uVar6;
            uVar6 = FUN_14012dddf(param_1);
            puVar9[2] = uVar6;
            uVar6 = FUN_14012dddf(param_1);
            puVar9[3] = uVar6;
            uVar6 = FUN_14012dddf(param_1);
            puVar9[4] = uVar6;
            uVar6 = *puVar9;
            if (uVar6 <= (uint)local_88) {
              FUN_14012dd58(param_1);
              goto LAB_140176ff2;
            }
            *(uint **)(lVar10 + uVar12 * 8) = puVar9;
            uVar12 = uVar12 + 1;
            puVar9 = puVar9 + 6;
          } while (uVar12 < local_6c);
        }
        FUN_14012dd58(param_1);
        FUN_1401a7460(lVar10,local_6c,8,&LAB_140177228);
        uVar14 = (uint)local_6c << 4 | 0xc;
        uVar6 = ((uint)local_6c + (uint)local_6c * 4) * 4 + 0x2c;
        if (local_6c != 0) {
          local_88 = CONCAT44(local_88._4_4_,local_70);
          local_80 = local_68;
          uVar12 = 0;
          do {
            lVar8 = *(longlong *)(lVar10 + uVar12 * 8);
            if (*(uint *)(lVar8 + 4) != uVar6) goto LAB_140176ff2;
            uVar1 = *(uint *)(lVar8 + 8);
            if ((local_70 < uVar1) || (local_70 - uVar1 < uVar6)) goto LAB_140176ff2;
            uVar2 = *(uint *)(lVar8 + 0xc);
            if ((uVar2 < uVar1) || ((local_68 < uVar2 || (local_68 - uVar2 < uVar14))))
            goto LAB_140176ff2;
            *(uint *)(lVar8 + 0x14) = uVar14;
            uVar6 = uVar6 + (uVar1 + 3 & 0xfffffffc);
            uVar14 = uVar14 + (uVar2 + 3 & 0xfffffffc);
            uVar12 = uVar12 + 1;
          } while (local_6c != uVar12);
        }
        if ((((local_60 == 0) ||
             ((local_60 == uVar6 && (uVar6 = uVar6 + local_5c, uVar6 <= local_70)))) &&
            ((local_54 == 0 ||
             ((local_54 == (uVar6 + 3 & 0xfffffffc) &&
              (uVar6 = local_54 + local_50, uVar6 <= local_70)))))) &&
           ((uVar14 == local_68 && (uVar6 == local_70)))) {
          local_a0 = &local_4c;
          local_a8 = puVar7;
          puVar7 = (undefined1 *)FUN_14012b8aa(uVar3,1,0xc);
          lVar8 = local_90;
          puVar9 = local_98;
          if (local_4c == 0) {
            if (local_6c != 0) {
              puVar15 = puVar7 + 0xc;
              local_88 = 0;
              do {
                uVar12 = local_88;
                *puVar15 = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 3);
                puVar15[1] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 2);
                puVar15[2] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 1);
                puVar15[3] = (char)local_98[local_88 * 6];
                puVar15[4] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 0x13);
                puVar15[5] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 0x12);
                puVar15[6] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 0x11);
                puVar15[7] = (char)local_98[local_88 * 6 + 4];
                puVar15[8] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 0x17);
                puVar15[9] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 0x16);
                puVar15[10] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 0x15);
                puVar15[0xb] = (char)local_98[local_88 * 6 + 5];
                puVar15[0xc] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 0xf);
                puVar15[0xd] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 0xe);
                puVar15[0xe] = *(undefined1 *)((longlong)local_98 + local_88 * 0x18 + 0xd);
                puVar15[0xf] = (char)local_98[local_88 * 6 + 3];
                local_4c = FUN_14012d612(param_1,local_98[local_88 * 6 + 1]);
                puVar4 = local_98;
                lVar8 = local_90;
                puVar9 = local_98;
                if (local_4c != 0) goto LAB_140176d4e;
                local_4c = FUN_14012dc34(param_1,local_98[uVar12 * 6 + 2]);
                lVar8 = local_90;
                puVar9 = local_98;
                if (local_4c != 0) goto LAB_140176d4e;
                if (puVar4[uVar12 * 6 + 2] != puVar4[uVar12 * 6 + 3]) {
                  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,puVar4[uVar12 * 6 + 2]);
                  local_7c = puVar4[uVar12 * 6 + 3];
                  local_4c = FUN_14018487c(uVar3,puVar7 + puVar4[uVar12 * 6 + 5],&local_7c,
                                           *(undefined8 *)(param_1 + 0x38));
                  if (local_4c == 0) {
                    if (local_7c == puVar4[uVar12 * 6 + 3]) goto LAB_140177178;
                    local_4c = 8;
                  }
                  FUN_14012dd58(param_1);
                  lVar8 = local_90;
                  puVar9 = local_98;
                  goto LAB_140176d4e;
                }
                FUN_1401c5180(puVar7 + puVar4[uVar12 * 6 + 5],*(undefined8 *)(param_1 + 0x38));
LAB_140177178:
                FUN_14012dd58(param_1);
                for (uVar6 = puVar4[uVar12 * 6 + 3] + puVar4[uVar12 * 6 + 5]; (uVar6 & 3) != 0;
                    uVar6 = uVar6 + 1) {
                  puVar7[uVar6] = 0;
                }
                puVar15 = puVar15 + 0x10;
                local_88 = local_88 + 1;
              } while (local_88 < local_6c);
            }
            lVar8 = local_90;
            FUN_140129628(local_90,puVar7,local_68);
            *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(param_1 + 0x30);
            *(code **)(lVar8 + 0x28) = FUN_14017723d;
            FUN_140129658(*(undefined8 *)(param_2 + 0xa0),*(uint *)(param_2 + 8) >> 10 & 1);
            *(longlong *)(param_2 + 0xa0) = lVar8;
            *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xfb;
            puVar9 = local_98;
          }
        }
        else {
LAB_140176ff2:
          local_4c = 8;
          lVar8 = local_90;
          puVar9 = local_98;
        }
      }
    }
  }
  else {
    lVar8 = 0;
LAB_140176d48:
    lVar10 = 0;
    puVar9 = (uint *)0x0;
  }
LAB_140176d4e:
  FUN_140128b39(uVar3,puVar9);
  FUN_140128b39(uVar3,lVar10);
  iVar13 = 0;
  if (local_4c != 0) {
    FUN_140128b39(uVar3,puVar7);
    FUN_140129646(lVar8);
    FUN_140128b39(uVar3,lVar8);
    iVar13 = local_4c;
  }
LAB_140176c2a:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_c8);
  }
  return iVar13;
}

