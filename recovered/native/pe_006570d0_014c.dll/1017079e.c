/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017079e */

int __fastcall FUN_1017079e(int param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined4 unaff_EBX;
  undefined3 uVar12;
  undefined4 uVar10;
  uint uVar11;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  int *local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_54;
  pbVar6 = *(byte **)(param_1 + 0xac);
  pbVar8 = *(byte **)(param_1 + 0xb0);
  local_54 = param_2;
  if (pbVar6 < pbVar8) {
    *(byte **)(param_1 + 0xac) = pbVar6 + 1;
    local_50 = CONCAT31((int3)((uint)pbVar6 >> 8),*pbVar6);
    pbVar6 = pbVar6 + 1;
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    local_50 = 0;
  }
  else {
    FUN_10170e8c();
    puVar9 = *(undefined1 **)(param_1 + 0xac);
    pbVar8 = *(byte **)(param_1 + 0xb0);
    pbVar6 = puVar9 + 1;
    *(byte **)(param_1 + 0xac) = pbVar6;
    local_50 = CONCAT31((int3)((uint)puVar9 >> 8),*puVar9);
  }
  uVar12 = (undefined3)((uint)unaff_EBX >> 8);
  if (pbVar6 < pbVar8) {
    *(byte **)(param_1 + 0xac) = pbVar6 + 1;
    uVar10 = CONCAT31(uVar12,*pbVar6);
    pbVar6 = pbVar6 + 1;
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    uVar10 = 0;
  }
  else {
    FUN_10170e8c();
    puVar9 = *(undefined1 **)(param_1 + 0xac);
    pbVar8 = *(byte **)(param_1 + 0xb0);
    pbVar6 = puVar9 + 1;
    *(byte **)(param_1 + 0xac) = pbVar6;
    uVar10 = CONCAT31(uVar12,*puVar9);
  }
  if (pbVar6 < pbVar8) {
LAB_10170860:
    *(byte **)(param_1 + 0xac) = pbVar6 + 1;
    uVar11 = (uint)*pbVar6;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar6 = *(byte **)(param_1 + 0xac);
      goto LAB_10170860;
    }
    uVar11 = 0;
  }
  local_2c = FUN_1017336c();
  local_24 = FUN_1017336c();
  uVar2 = *(uint *)(param_1 + 0xac);
  if (uVar2 < *(uint *)(param_1 + 0xb0)) {
LAB_101708a8:
    *(uint *)(param_1 + 0xac) = uVar2 + 1;
  }
  else if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10170e8c();
    uVar2 = *(uint *)(param_1 + 0xac);
    goto LAB_101708a8;
  }
  FUN_1017336c();
  FUN_1017336c();
  local_48 = FUN_1017336c();
  local_4c = FUN_1017336c();
  pbVar6 = *(byte **)(param_1 + 0xac);
  pbVar8 = *(byte **)(param_1 + 0xb0);
  local_38 = uVar10;
  if (pbVar6 < pbVar8) {
    *(byte **)(param_1 + 0xac) = pbVar6 + 1;
    local_30 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    local_30 = 0;
  }
  else {
    FUN_10170e8c();
    pbVar1 = *(byte **)(param_1 + 0xac);
    pbVar8 = *(byte **)(param_1 + 0xb0);
    pbVar6 = pbVar1 + 1;
    *(byte **)(param_1 + 0xac) = pbVar6;
    local_30 = (uint)*pbVar1;
  }
  local_1c = 0;
  local_28 = uVar11;
  if (pbVar6 < pbVar8) {
LAB_1017095a:
    *(byte **)(param_1 + 0xac) = pbVar6 + 1;
    bVar17 = (*pbVar6 & 0x20) == 0;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar6 = *(byte **)(param_1 + 0xac);
      goto LAB_1017095a;
    }
    bVar17 = true;
  }
  local_44 = CONCAT31(local_44._1_3_,bVar17);
  local_18 = 0;
  piVar3 = (int *)FUN_10179277(&local_1c);
  if (piVar3 == (int *)0x0) {
LAB_10170dba:
    FUN_10170e07();
    iVar4 = 0;
  }
  else {
    *local_54 = local_48;
    *param_3 = local_4c;
    iVar4 = FUN_1017315f(piVar3,0);
    if ((iVar4 == 0) || (local_54 = piVar3, iVar4 = FUN_10173127(piVar3,0), iVar4 == 0))
    goto LAB_10170dba;
    bVar18 = (char)local_38 == '\0';
    bVar17 = (byte)local_28 < 8;
    FUN_10171ace();
    uVar11 = local_24;
    local_34 = local_1c;
    if ((bVar17 && bVar18) && local_1c == 0) {
      local_50 = iVar4;
      if (local_4c != 0) {
        iVar5 = (int)local_54 * local_48;
        iVar4 = local_4c;
        do {
          iVar4 = iVar4 + -1;
          FUN_10171bb6(iVar5);
        } while (iVar4 != 0);
      }
    }
    else {
      if ((char)local_38 == '\0') {
        iVar5 = 0;
      }
      else {
        if (local_24 == 0) {
LAB_10170d9d:
          thunk_FUN_10274120(iVar4);
          goto LAB_10170dba;
        }
        FUN_10171ace();
        iVar5 = FUN_101731c8(0);
        if (iVar5 == 0) {
          thunk_FUN_10274120(iVar4);
          goto LAB_10170dba;
        }
        if (local_34 == 0) {
          iVar16 = FUN_10171bb6((int)local_54 * uVar11);
          if (iVar16 == 0) {
            thunk_FUN_10274120(iVar4);
            iVar4 = iVar5;
            goto LAB_10170d9d;
          }
        }
        else {
          do {
            local_40 = iVar5;
            local_50 = iVar4;
            FUN_101792c2();
            uVar11 = uVar11 - 1;
            iVar5 = local_40;
            iVar4 = local_50;
          } while (uVar11 != 0);
        }
      }
      local_50 = iVar4;
      local_20 = local_4c * local_48;
      local_40 = iVar5;
      if (local_20 != 0) {
        bVar17 = true;
        local_3c = 0;
        iVar4 = 0;
        iVar5 = 0;
        piVar3 = local_54;
        do {
          local_2c = (int)piVar3 * iVar5 + local_50;
          if ((byte)local_28 < 8) {
LAB_10170bb2:
            if ((char)local_38 == '\0') {
              if (local_34 == 0) {
                puVar9 = *(undefined1 **)(param_1 + 0xac);
                piVar13 = (int *)0x0;
                do {
                  if (puVar9 < *(undefined1 **)(param_1 + 0xb0)) {
LAB_10170c94:
                    *(undefined1 **)(param_1 + 0xac) = puVar9 + 1;
                    uVar7 = *puVar9;
                    puVar9 = puVar9 + 1;
                    piVar3 = local_54;
                  }
                  else {
                    if (*(int *)(param_1 + 0x20) != 0) {
                      FUN_10170e8c();
                      puVar9 = *(undefined1 **)(param_1 + 0xac);
                      goto LAB_10170c94;
                    }
                    uVar7 = 0;
                  }
                  *(undefined1 *)((int)&local_18 + (int)piVar13) = uVar7;
                  piVar13 = (int *)((int)piVar13 + 1);
                } while (piVar3 != piVar13);
              }
              else {
                FUN_101792c2();
                piVar3 = local_54;
              }
            }
            else {
              if ((char)local_30 == '\b') {
                pbVar6 = *(byte **)(param_1 + 0xac);
                if (*(byte **)(param_1 + 0xb0) <= pbVar6) {
                  if (*(int *)(param_1 + 0x20) == 0) {
                    uVar11 = 0;
                    goto LAB_10170c16;
                  }
                  FUN_10170e8c();
                  pbVar6 = *(byte **)(param_1 + 0xac);
                }
                *(byte **)(param_1 + 0xac) = pbVar6 + 1;
                uVar11 = (uint)*pbVar6;
              }
              else {
                uVar11 = FUN_1017336c();
              }
LAB_10170c16:
              piVar3 = local_54;
              if (local_24 <= uVar11) {
                uVar11 = 0;
              }
              FUN_1025b2d0(&local_18,uVar11 * (int)local_54 + local_40,local_54);
            }
          }
          else {
            if (iVar4 == 0) {
              pbVar6 = *(byte **)(param_1 + 0xac);
              if (pbVar6 < *(byte **)(param_1 + 0xb0)) {
LAB_10170b99:
                *(byte **)(param_1 + 0xac) = pbVar6 + 1;
                local_3c = (uint)*pbVar6;
              }
              else {
                if (*(int *)(param_1 + 0x20) != 0) {
                  FUN_10170e8c();
                  pbVar6 = *(byte **)(param_1 + 0xac);
                  piVar3 = local_54;
                  goto LAB_10170b99;
                }
                local_3c = 0;
              }
              iVar4 = (local_3c & 0x7f) + 1;
              local_3c = local_3c >> 7;
              goto LAB_10170bb2;
            }
            piVar3 = local_54;
            if (local_3c == 0 || bVar17) {
              local_3c = (uint)(local_3c != 0);
              goto LAB_10170bb2;
            }
            local_3c = 1;
          }
          FUN_1025b2d0(local_2c,&local_18,piVar3);
          iVar4 = iVar4 + -1;
          iVar5 = iVar5 + 1;
          bVar17 = false;
        } while (iVar5 != local_20);
      }
      if ((char)local_44 == '\x01' && local_4c != 0) {
        iVar4 = (int)local_54 * local_48;
        iVar5 = iVar4 * (local_4c - 1U);
        local_44 = local_4c - 1U >> 1;
        uVar11 = 0;
        iVar16 = 0;
        do {
          if (local_48 != 0) {
            iVar14 = iVar4 + 1;
            iVar15 = local_50;
            do {
              uVar7 = *(undefined1 *)(iVar15 + iVar16);
              *(undefined1 *)(iVar15 + iVar16) = *(undefined1 *)(iVar15 + iVar5);
              *(undefined1 *)(iVar15 + iVar5) = uVar7;
              iVar15 = iVar15 + 1;
              iVar14 = iVar14 + -1;
            } while (1 < iVar14);
          }
          iVar5 = iVar5 - iVar4;
          iVar16 = iVar16 + iVar4;
          bVar17 = uVar11 != local_44;
          uVar11 = uVar11 + 1;
        } while (bVar17);
      }
      if (local_40 != 0) {
        thunk_FUN_10274120(local_40);
      }
    }
    if (((int *)0x2 < local_54 && local_34 == 0) && (iVar4 = local_4c * local_48, iVar4 != 0)) {
      puVar9 = (undefined1 *)(local_50 + 2);
      do {
        uVar7 = puVar9[-2];
        puVar9[-2] = *puVar9;
        *puVar9 = uVar7;
        puVar9 = puVar9 + (int)local_54;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = local_50;
    if (local_54 != (int *)0x4) {
      iVar4 = FUN_101717e3(local_48,local_4c);
      if (DAT_10388d00 == (local_14 ^ (uint)&local_54)) {
        return iVar4;
      }
      goto LAB_10170d91;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_54)) {
    return iVar4;
  }
LAB_10170d91:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

