/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140074b34 */

int FUN_140074b34(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 (*pauVar9) [32];
  uint *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint *puVar16;
  undefined1 *puVar17;
  undefined1 auStackY_c8 [32];
  ulonglong local_88;
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
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  lVar3 = param_1[6];
  local_4c = FUN_1400214cf(param_1,0x140109c20,(longlong)local_78);
  iVar15 = local_4c;
  if (((((local_4c != 0) || (iVar15 = 8, local_74 == 0x74746366)) || (local_74 == 0x774f4646)) ||
      (((ushort)(local_6c - 0x1000) < 0xf001 || local_70 != *(uint *)(param_1 + 1) ||
       (local_70 <= ((uint)local_6c + (uint)local_6c * 4) * 4 + 0x2c)))) ||
     ((local_68 & 3) != 0 || local_68 <= ((uint)local_6c << 4 | 0xc))) goto LAB_140074b7e;
  if (local_60 == 0) {
    if (local_5c != 0 || local_58 != 0) goto LAB_140074b7e;
  }
  else if ((local_5c != 0) && (local_58 == 0)) goto LAB_140074b7e;
  if ((local_54 == 0) && (local_50 != 0)) goto LAB_140074b7e;
  puVar8 = (undefined1 *)FUN_14001e961(lVar3,0xc,&local_4c);
  if (local_4c == 0) {
    pauVar9 = FUN_14001c423(lVar3,0x48,&local_4c);
    if (local_4c != 0) goto LAB_140074c9c;
    iVar15 = 0x1f;
    if (local_6c != 0) {
      for (; local_6c >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar13 = 0x10 << ((byte)iVar15 & 0x1f);
    iVar5 = (uint)local_6c * 0x10 - iVar13;
    *puVar8 = local_74._3_1_;
    puVar8[1] = local_74._2_1_;
    puVar8[2] = local_74._1_1_;
    puVar8[3] = (undefined1)local_74;
    puVar8[4] = local_6c._1_1_;
    puVar8[5] = (undefined1)local_6c;
    puVar8[6] = (char)((uint)iVar13 >> 8);
    puVar8[7] = (char)iVar13;
    puVar8[8] = 0;
    puVar8[9] = (byte)iVar15;
    puVar8[10] = (char)((uint)iVar5 >> 8);
    puVar8[0xb] = (char)iVar5;
    puVar11 = (undefined1 *)0x0;
    puVar10 = (uint *)FUN_14001f231(lVar3,0x18,0,(uint)local_6c,0,&local_4c);
    if (((local_4c == 0) &&
        (puVar11 = (undefined1 *)FUN_14001f231(lVar3,8,0,(uint)local_6c,0,&local_4c), local_4c == 0)
        ) && (local_4c = FUN_140021063(param_1,(uint)local_6c * 0x14), local_4c == 0)) {
      if (local_6c != 0) {
        uVar14 = 0;
        puVar16 = puVar10;
        uVar7 = 0;
        do {
          uVar6 = FUN_14002120e((longlong)param_1);
          *puVar16 = uVar6;
          uVar6 = FUN_14002120e((longlong)param_1);
          puVar16[1] = uVar6;
          uVar6 = FUN_14002120e((longlong)param_1);
          puVar16[2] = uVar6;
          uVar6 = FUN_14002120e((longlong)param_1);
          puVar16[3] = uVar6;
          uVar6 = FUN_14002120e((longlong)param_1);
          puVar16[4] = uVar6;
          uVar6 = *puVar16;
          if (uVar6 <= uVar7) {
            FUN_140021187(param_1);
            goto LAB_140074f46;
          }
          *(uint **)(puVar11 + uVar14 * 8) = puVar16;
          uVar14 = uVar14 + 1;
          puVar16 = puVar16 + 6;
          uVar7 = uVar6;
        } while (uVar14 < local_6c);
      }
      FUN_140021187(param_1);
      FUN_14009aaf0(puVar11,(ulonglong)local_6c,8,&LAB_14007517c);
      uVar6 = (uint)local_6c << 4 | 0xc;
      uVar7 = ((uint)local_6c + (uint)local_6c * 4) * 4 + 0x2c;
      if (local_6c != 0) {
        uVar14 = 0;
        do {
          lVar4 = *(longlong *)(puVar11 + uVar14 * 8);
          if (*(uint *)(lVar4 + 4) != uVar7) goto LAB_140074f46;
          uVar1 = *(uint *)(lVar4 + 8);
          if ((local_70 < uVar1) || (local_70 - uVar1 < uVar7)) goto LAB_140074f46;
          uVar2 = *(uint *)(lVar4 + 0xc);
          if ((uVar2 < uVar1) || ((local_68 < uVar2 || (local_68 - uVar2 < uVar6))))
          goto LAB_140074f46;
          *(uint *)(lVar4 + 0x14) = uVar6;
          uVar7 = uVar7 + (uVar1 + 3 & 0xfffffffc);
          uVar6 = uVar6 + (uVar2 + 3 & 0xfffffffc);
          uVar14 = uVar14 + 1;
        } while (local_6c != uVar14);
      }
      if ((((local_60 == 0) ||
           ((local_60 == uVar7 && (uVar7 = uVar7 + local_5c, uVar7 <= local_70)))) &&
          ((local_54 == 0 ||
           ((local_54 == (uVar7 + 3 & 0xfffffffc) &&
            (uVar7 = local_54 + local_50, uVar7 <= local_70)))))) &&
         ((uVar6 == local_68 && (uVar7 == local_70)))) {
        puVar8 = (undefined1 *)FUN_14001f231(lVar3,1,0xc,uVar6,(longlong)puVar8,&local_4c);
        if (local_4c == 0) {
          if (local_6c != 0) {
            puVar17 = puVar8 + 0xc;
            local_88 = 0;
            do {
              *puVar17 = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 3);
              puVar17[1] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 2);
              puVar17[2] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 1);
              puVar17[3] = (char)puVar10[local_88 * 6];
              puVar17[4] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 0x13);
              puVar17[5] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 0x12);
              puVar17[6] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 0x11);
              puVar17[7] = (char)puVar10[local_88 * 6 + 4];
              puVar17[8] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 0x17);
              puVar17[9] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 0x16);
              puVar17[10] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 0x15);
              puVar17[0xb] = (char)puVar10[local_88 * 6 + 5];
              puVar17[0xc] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 0xf);
              puVar17[0xd] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 0xe);
              puVar17[0xe] = *(undefined1 *)((longlong)puVar10 + local_88 * 0x18 + 0xd);
              puVar17[0xf] = (char)puVar10[local_88 * 6 + 3];
              uVar12 = FUN_140020a41((longlong)param_1,puVar10[local_88 * 6 + 1]);
              local_4c = (int)uVar12;
              if (local_4c != 0) goto LAB_140074ca2;
              local_4c = FUN_140021063(param_1,puVar10[local_88 * 6 + 2]);
              if (local_4c != 0) goto LAB_140074ca2;
              uVar7 = puVar10[local_88 * 6 + 2];
              if (uVar7 != puVar10[local_88 * 6 + 3]) {
                local_7c = puVar10[local_88 * 6 + 3];
                local_4c = FUN_14008246c(lVar3,(longlong)(puVar8 + puVar10[local_88 * 6 + 5]),
                                         &local_7c,param_1[7],uVar7);
                if (local_4c == 0) {
                  if (local_7c == puVar10[local_88 * 6 + 3]) goto LAB_1400750cc;
                  local_4c = 8;
                }
                FUN_140021187(param_1);
                goto LAB_140074ca2;
              }
              FUN_1400b3550((undefined8 *)(puVar8 + puVar10[local_88 * 6 + 5]),
                            (undefined8 *)param_1[7],(ulonglong)uVar7);
LAB_1400750cc:
              FUN_140021187(param_1);
              for (uVar7 = puVar10[local_88 * 6 + 3] + puVar10[local_88 * 6 + 5]; (uVar7 & 3) != 0;
                  uVar7 = uVar7 + 1) {
                puVar8[uVar7] = 0;
              }
              puVar17 = puVar17 + 0x10;
              local_88 = local_88 + 1;
            } while (local_88 < local_6c);
          }
          FUN_14001d02c((undefined8 *)pauVar9,puVar8,local_68);
          *(longlong *)(pauVar9[1] + 0x10) = param_1[6];
          *(code **)(pauVar9[1] + 8) = FUN_140075191;
          FUN_14001d05c(*(longlong *)(param_2 + 0xa0),*(uint *)(param_2 + 8) >> 10 & 1);
          *(undefined1 (**) [32])(param_2 + 0xa0) = pauVar9;
          *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xfb;
        }
      }
      else {
LAB_140074f46:
        local_4c = 8;
      }
    }
  }
  else {
    pauVar9 = (undefined1 (*) [32])0x0;
LAB_140074c9c:
    puVar11 = (undefined1 *)0x0;
    puVar10 = (uint *)0x0;
  }
LAB_140074ca2:
  FUN_14001c53d(lVar3,(longlong)puVar10);
  FUN_14001c53d(lVar3,(longlong)puVar11);
  iVar15 = 0;
  if (local_4c != 0) {
    FUN_14001c53d(lVar3,(longlong)puVar8);
    FUN_14001d04a((longlong)pauVar9);
    FUN_14001c53d(lVar3,(longlong)pauVar9);
    iVar15 = local_4c;
  }
LAB_140074b7e:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_c8);
  }
  return iVar15;
}

