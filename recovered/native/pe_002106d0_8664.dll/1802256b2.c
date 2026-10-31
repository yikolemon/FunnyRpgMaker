/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802256b2 */

int FUN_1802256b2(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_6c;
  longlong local_68;
  uint local_5c;
  ushort *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  local_58 = (ushort *)0x0;
  if (*(longlong *)(param_1 + 0x4d8) == 0) {
    iVar4 = 3;
    goto LAB_18022575a;
  }
  local_4c = (**(code **)(param_1 + 0x2a0))(param_1,0x434f4c52,param_2,&local_5c);
  if (((local_4c == 0) && (iVar4 = FUN_1801ceb6f(param_2), 0xd < local_5c)) &&
     (local_4c = FUN_1801cec36(param_2,local_5c,&local_58), puVar3 = local_58, local_4c == 0)) {
    puVar6 = (ushort *)FUN_1801c9a4b(uVar2,0x90,&local_4c);
    if (local_4c == 0) {
      uVar7 = *puVar3 << 8 | *puVar3 >> 8;
      *puVar6 = uVar7;
      if (uVar7 < 2) {
        uVar8 = puVar3[1] << 8 | puVar3[1] >> 8;
        puVar6[1] = uVar8;
        uVar15 = *(uint *)(puVar3 + 2);
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18
        ;
        if ((uVar15 <= local_5c && local_5c - uVar15 != 0) &&
           ((uint)uVar8 <= (local_5c - uVar15) / 6)) {
          uVar16 = *(uint *)(puVar3 + 4);
          uVar8 = puVar3[6] << 8 | puVar3[6] >> 8;
          uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                   uVar16 << 0x18;
          puVar6[2] = uVar8;
          if ((uVar16 <= local_5c && local_5c - uVar16 != 0) &&
             ((uint)uVar8 <= local_5c - uVar16 >> 2)) {
            iVar5 = local_4c;
            if (uVar7 != 1) goto LAB_18022595d;
            if (0x21 < local_5c) {
              uVar14 = *(uint *)(puVar3 + 7);
              uVar9 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                      uVar14 << 0x18;
              uVar14 = local_5c - 4;
              if (uVar9 <= uVar14 && uVar14 - uVar9 != 0) {
                uVar12 = *(uint *)((longlong)local_58 + (ulonglong)uVar9);
                uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                         uVar12 << 0x18;
                if (uVar12 <= (uVar14 - uVar9) / 6) {
                  lVar10 = (ulonglong)uVar9 + (longlong)local_58;
                  *(uint *)(puVar6 + 0xc) = uVar12;
                  *(longlong *)(puVar6 + 0x10) = lVar10;
                  uVar9 = *(uint *)(puVar3 + 9);
                  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18;
                  if (uVar9 <= local_5c && local_5c - uVar9 != 0) {
                    if (uVar9 == 0) {
                      puVar6[0x14] = 0;
                      puVar6[0x15] = 0;
                      puVar6[0x18] = 0;
                      puVar6[0x19] = 0;
                      puVar6[0x1a] = 0;
                      puVar6[0x1b] = 0;
                      uVar11 = lVar10 + (ulonglong)(uVar12 * 6);
LAB_18022590e:
                      *(ulonglong *)(puVar6 + 0x20) = uVar11;
                      uVar14 = *(uint *)(puVar3 + 0xb);
                      uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18;
                      if (uVar14 < local_5c) {
                        lVar10 = (longlong)local_58 + (ulonglong)uVar14;
                        if (uVar14 == 0) {
                          lVar10 = 0;
                        }
                        *(longlong *)(puVar6 + 0x1c) = lVar10;
                        puVar6[0x24] = 0;
                        puVar6[0x25] = 0;
                        puVar6[0x28] = 0;
                        puVar6[0x29] = 0;
                        puVar6[0x2a] = 0;
                        puVar6[0x2b] = 0;
                        puVar6[0x2c] = 0;
                        puVar6[0x2e] = 0;
                        puVar6[0x2f] = 0;
                        puVar6[0x30] = 0;
                        puVar6[0x31] = 0;
                        puVar6[0x32] = 0;
                        puVar6[0x33] = 0;
                        puVar6[0x34] = 0;
                        puVar6[0x35] = 0;
                        puVar6[0x38] = 0;
                        puVar6[0x39] = 0;
                        puVar6[0x3a] = 0;
                        puVar6[0x3b] = 0;
                        puVar6[0x3c] = 0;
                        puVar6[0x3d] = 0;
                        puVar6[0x3e] = 0;
                        puVar6[0x3f] = 0;
                        if ((*(byte *)(param_1 + 0x410) & 1) == 0) goto LAB_18022595d;
                        uVar14 = *(uint *)(puVar3 + 0xd);
                        local_6c = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 |
                                   (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
                        if (local_6c < local_5c) {
                          uVar14 = *(uint *)(puVar3 + 0xf);
                          uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 |
                                   (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
                          if (uVar14 < local_5c) {
                            if (uVar14 == 0) goto LAB_18022595d;
                            local_68 = *(longlong *)(param_1 + 0x2e0);
                            if ((*(longlong *)(param_1 + 0x408) != 0) ||
                               (iVar5 = (**(code **)(local_68 + 0x20))(param_1,0), iVar5 == 0)) {
                              local_4c = (**(code **)(local_68 + 0x68))(param_1,uVar14 + iVar4);
                              if (local_4c == 0) {
                                iVar5 = 0;
                                if ((local_6c != 0) && (puVar6[0x2c] != 0)) {
                                  local_78 = local_5c;
                                  local_4c = (**(code **)(local_68 + 0x60))
                                                       (param_1,local_6c + iVar4,puVar6 + 0x34,
                                                        puVar6 + 0x24);
                                  if (local_4c != 0) goto LAB_18022581d;
                                  iVar5 = 0;
                                }
LAB_18022595d:
                                local_4c = iVar5;
                                *(ulonglong *)(puVar6 + 4) = (ulonglong)uVar15 + (longlong)local_58;
                                *(ulonglong *)(puVar6 + 8) = (ulonglong)uVar16 + (longlong)local_58;
                                *(ushort **)(puVar6 + 0x40) = local_58;
                                *(uint *)(puVar6 + 0x44) = local_5c;
                                *(ushort **)(param_1 + 0x4e0) = puVar6;
                                iVar4 = 0;
                                goto LAB_18022575a;
                              }
                            }
                          }
                        }
                      }
                    }
                    else if (uVar9 < uVar14) {
                      uVar14 = *(uint *)((longlong)local_58 + (ulonglong)uVar9);
                      uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18;
                      if (uVar14 <= local_5c - uVar9 >> 2) {
                        lVar13 = (ulonglong)uVar9 + (longlong)local_58;
                        *(uint *)(puVar6 + 0x14) = uVar14;
                        *(longlong *)(puVar6 + 0x18) = lVar13;
                        uVar11 = lVar10 + (ulonglong)(uVar12 * 6);
                        uVar1 = lVar13 + (ulonglong)uVar14 * 4;
                        if (uVar1 <= uVar11) {
                          uVar11 = uVar1;
                        }
                        goto LAB_18022590e;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_18022581d:
      lVar10 = *(longlong *)(param_1 + 0x2e0);
      (**(code **)(lVar10 + 0x80))(param_1,puVar6 + 0x34);
      (**(code **)(lVar10 + 0x78))(param_1,puVar6 + 0x24);
      local_4c = 8;
    }
  }
  else {
    puVar6 = (ushort *)0x0;
  }
  FUN_1801ced57(param_2,&local_58);
  FUN_1801c9b65(uVar2,puVar6);
  iVar4 = local_4c;
LAB_18022575a:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return iVar4;
}

