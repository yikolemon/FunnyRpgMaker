/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140072cf2 */

int FUN_140072cf2(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [32];
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
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x98);
  local_58 = (ushort *)0x0;
  if (*(longlong *)(param_1 + 0x4d8) == 0) {
    iVar4 = 3;
    goto LAB_140072d9a;
  }
  local_4c = (**(code **)(param_1 + 0x2a0))(param_1,0x434f4c52,param_2,&local_5c);
  if (((local_4c == 0) && (iVar4 = FUN_140020f72((longlong)param_2), 0xd < local_5c)) &&
     (local_4c = FUN_140021039(param_2,local_5c,(longlong *)&local_58), puVar3 = local_58,
     local_4c == 0)) {
    pauVar6 = FUN_14001c423(lVar2,0x90,&local_4c);
    if (local_4c == 0) {
      uVar7 = *puVar3 << 8 | *puVar3 >> 8;
      *(ushort *)*pauVar6 = uVar7;
      if (uVar7 < 2) {
        uVar8 = puVar3[1] << 8 | puVar3[1] >> 8;
        *(ushort *)(*pauVar6 + 2) = uVar8;
        uVar15 = *(uint *)(puVar3 + 2);
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18
        ;
        if ((uVar15 <= local_5c && local_5c - uVar15 != 0) &&
           ((uint)uVar8 <= (local_5c - uVar15) / 6)) {
          uVar16 = *(uint *)(puVar3 + 4);
          uVar8 = puVar3[6] << 8 | puVar3[6] >> 8;
          uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                   uVar16 << 0x18;
          *(ushort *)(*pauVar6 + 4) = uVar8;
          if ((uVar16 <= local_5c && local_5c - uVar16 != 0) &&
             ((uint)uVar8 <= local_5c - uVar16 >> 2)) {
            iVar5 = local_4c;
            if (uVar7 != 1) goto LAB_140072f9d;
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
                  *(uint *)(*pauVar6 + 0x18) = uVar12;
                  *(longlong *)pauVar6[1] = lVar10;
                  uVar9 = *(uint *)(puVar3 + 9);
                  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18;
                  if (uVar9 <= local_5c && local_5c - uVar9 != 0) {
                    if (uVar9 == 0) {
                      *(undefined4 *)(pauVar6[1] + 8) = 0;
                      *(undefined8 *)(pauVar6[1] + 0x10) = 0;
                      uVar11 = lVar10 + (ulonglong)(uVar12 * 6);
LAB_140072f4e:
                      *(ulonglong *)pauVar6[2] = uVar11;
                      uVar14 = *(uint *)(puVar3 + 0xb);
                      uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18;
                      if (uVar14 < local_5c) {
                        lVar10 = (longlong)local_58 + (ulonglong)uVar14;
                        if (uVar14 == 0) {
                          lVar10 = 0;
                        }
                        *(longlong *)(pauVar6[1] + 0x18) = lVar10;
                        *(undefined4 *)(pauVar6[2] + 8) = 0;
                        *(undefined8 *)(pauVar6[2] + 0x10) = 0;
                        *(undefined2 *)(pauVar6[2] + 0x18) = 0;
                        *(undefined8 *)(pauVar6[2] + 0x1c) = 0;
                        *(undefined8 *)(pauVar6[3] + 4) = 0;
                        *(undefined8 *)(pauVar6[3] + 0x10) = 0;
                        *(undefined8 *)(pauVar6[3] + 0x18) = 0;
                        if ((*(byte *)(param_1 + 0x410) & 1) == 0) goto LAB_140072f9d;
                        uVar14 = *(uint *)(puVar3 + 0xd);
                        local_6c = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 |
                                   (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
                        if (local_6c < local_5c) {
                          uVar14 = *(uint *)(puVar3 + 0xf);
                          uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 |
                                   (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
                          if (uVar14 < local_5c) {
                            if (uVar14 == 0) goto LAB_140072f9d;
                            local_68 = *(longlong *)(param_1 + 0x2e0);
                            if ((*(longlong *)(param_1 + 0x408) != 0) ||
                               (iVar5 = (**(code **)(local_68 + 0x20))(param_1,0), iVar5 == 0)) {
                              local_4c = (**(code **)(local_68 + 0x68))(param_1,uVar14 + iVar4);
                              if (local_4c == 0) {
                                iVar5 = 0;
                                if ((local_6c != 0) && (*(short *)(pauVar6[2] + 0x18) != 0)) {
                                  local_78 = local_5c;
                                  local_4c = (**(code **)(local_68 + 0x60))
                                                       (param_1,local_6c + iVar4,pauVar6[3] + 8,
                                                        pauVar6[2] + 8);
                                  if (local_4c != 0) goto LAB_140072e5d;
                                  iVar5 = 0;
                                }
LAB_140072f9d:
                                local_4c = iVar5;
                                *(ulonglong *)(*pauVar6 + 8) =
                                     (ulonglong)uVar15 + (longlong)local_58;
                                *(ulonglong *)(*pauVar6 + 0x10) =
                                     (ulonglong)uVar16 + (longlong)local_58;
                                *(ushort **)pauVar6[4] = local_58;
                                *(uint *)(pauVar6[4] + 8) = local_5c;
                                *(undefined1 (**) [32])(param_1 + 0x4e0) = pauVar6;
                                iVar4 = 0;
                                goto LAB_140072d9a;
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
                        *(uint *)(pauVar6[1] + 8) = uVar14;
                        *(longlong *)(pauVar6[1] + 0x10) = lVar13;
                        uVar11 = lVar10 + (ulonglong)(uVar12 * 6);
                        uVar1 = lVar13 + (ulonglong)uVar14 * 4;
                        if (uVar1 <= uVar11) {
                          uVar11 = uVar1;
                        }
                        goto LAB_140072f4e;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_140072e5d:
      lVar10 = *(longlong *)(param_1 + 0x2e0);
      (**(code **)(lVar10 + 0x80))(param_1,pauVar6[3] + 8);
      (**(code **)(lVar10 + 0x78))(param_1,pauVar6[2] + 8);
      local_4c = 8;
    }
  }
  else {
    pauVar6 = (undefined1 (*) [32])0x0;
  }
  FUN_14002115a((longlong)param_2,(longlong *)&local_58);
  FUN_14001c53d(lVar2,(longlong)pauVar6);
  iVar4 = local_4c;
LAB_140072d9a:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_98);
  }
  return iVar4;
}

