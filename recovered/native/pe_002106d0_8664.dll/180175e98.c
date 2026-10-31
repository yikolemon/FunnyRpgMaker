/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180175e98 */

ulonglong FUN_180175e98(longlong param_1,int *param_2,uint *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined1 uVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  char *pcVar16;
  int iVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  int iVar20;
  undefined8 unaff_RDI;
  undefined7 uVar22;
  ulonglong uVar21;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_b8 [39];
  char local_91;
  undefined4 local_90;
  uint local_8c;
  int local_88;
  int local_84;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  ulonglong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  puVar18 = *(undefined1 **)(param_1 + 0xc0);
  puVar14 = *(undefined1 **)(param_1 + 200);
  if (puVar18 < puVar14) {
    *(undefined1 **)(param_1 + 0xc0) = puVar18 + 1;
    local_70 = CONCAT44(local_70._4_4_,(int)CONCAT71((int7)((ulonglong)puVar18 >> 8),*puVar18));
    puVar18 = puVar18 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    local_70 = (ulonglong)local_70._4_4_ << 0x20;
  }
  else {
    FUN_180176673(param_1);
    puVar1 = *(undefined1 **)(param_1 + 0xc0);
    puVar14 = *(undefined1 **)(param_1 + 200);
    puVar18 = puVar1 + 1;
    *(undefined1 **)(param_1 + 0xc0) = puVar18;
    local_70 = CONCAT44(local_70._4_4_,(int)CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1));
  }
  uVar22 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (puVar18 < puVar14) {
    *(undefined1 **)(param_1 + 0xc0) = puVar18 + 1;
    uVar21 = CONCAT71(uVar22,*puVar18);
    puVar18 = puVar18 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVar21 = 0;
  }
  else {
    FUN_180176673(param_1);
    puVar1 = *(undefined1 **)(param_1 + 0xc0);
    puVar14 = *(undefined1 **)(param_1 + 200);
    puVar18 = puVar1 + 1;
    *(undefined1 **)(param_1 + 0xc0) = puVar18;
    uVar21 = CONCAT71(uVar22,*puVar1);
  }
  if (puVar18 < puVar14) {
LAB_180175f84:
    *(undefined1 **)(param_1 + 0xc0) = puVar18 + 1;
    local_8c = (uint)CONCAT71((int7)((ulonglong)puVar18 >> 8),*puVar18);
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      puVar18 = *(undefined1 **)(param_1 + 0xc0);
      goto LAB_180175f84;
    }
    local_8c = 0;
  }
  uVar4 = FUN_18017918c(param_1);
  local_80 = CONCAT44(local_80._4_4_,uVar4);
  uVar5 = FUN_18017918c(param_1);
  puVar18 = *(undefined1 **)(param_1 + 0xc0);
  if (puVar18 < *(undefined1 **)(param_1 + 200)) {
LAB_180175fd4:
    *(undefined1 **)(param_1 + 0xc0) = puVar18 + 1;
    uVar13 = *puVar18;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      puVar18 = *(undefined1 **)(param_1 + 0xc0);
      goto LAB_180175fd4;
    }
    uVar13 = 0;
  }
  FUN_18017918c(param_1);
  FUN_18017918c(param_1);
  local_84 = FUN_18017918c(param_1);
  uVar6 = FUN_18017918c(param_1);
  uVar25 = (ulonglong)uVar6;
  pbVar12 = *(byte **)(param_1 + 0xc0);
  pbVar15 = *(byte **)(param_1 + 200);
  if (pbVar12 < pbVar15) {
    *(byte **)(param_1 + 0xc0) = pbVar12 + 1;
    local_90 = (undefined4)CONCAT71((int7)((ulonglong)pbVar12 >> 8),*pbVar12);
    pbVar12 = pbVar12 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    local_90 = 0;
  }
  else {
    FUN_180176673(param_1);
    puVar18 = *(undefined1 **)(param_1 + 0xc0);
    pbVar15 = *(byte **)(param_1 + 200);
    pbVar12 = puVar18 + 1;
    *(byte **)(param_1 + 0xc0) = pbVar12;
    local_90 = (undefined4)CONCAT71((int7)((ulonglong)puVar18 >> 8),*puVar18);
  }
  local_50 = 0;
  if (pbVar12 < pbVar15) {
LAB_1801760a3:
    *(byte **)(param_1 + 0xc0) = pbVar12 + 1;
    bVar27 = (*pbVar12 & 0x20) == 0;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      pbVar12 = *(byte **)(param_1 + 0xc0);
      goto LAB_1801760a3;
    }
    bVar27 = true;
  }
  local_4c = 0;
  if ((char)uVar21 == '\0') {
    uVar7 = (local_8c & 0xff) - 8;
    if ((byte)local_8c < 8) {
      uVar7 = local_8c & 0xff;
    }
    bVar26 = uVar7 == 3;
    uVar13 = (char)local_90;
  }
  else {
    bVar26 = false;
  }
  uVar7 = FUN_18017f84b(uVar13,bVar26,&local_50);
  iVar24 = local_84;
  if (uVar7 == 0) {
    pcVar16 = "bad format";
LAB_180176565:
    FUN_1801765d0(pcVar16);
    uVar10 = 0;
  }
  else {
    *param_2 = local_84;
    *param_3 = uVar6;
    iVar8 = FUN_180178f1f(local_84,uVar6,uVar7);
    if (iVar8 == 0) {
      pcVar16 = "too large";
      goto LAB_180176565;
    }
    uVar10 = FUN_180178ee1(iVar24,uVar25,uVar7);
    if (uVar10 == 0) {
LAB_18017655e:
      pcVar16 = "outofmem";
      goto LAB_180176565;
    }
    uVar19 = uVar21 & 0xffffffff;
    bVar26 = (byte)local_8c < 8;
    local_91 = bVar27;
    local_64 = uVar5;
    FUN_180177488(param_1,local_70 & 0xff);
    uVar5 = local_64;
    cVar3 = local_91;
    local_88 = local_50;
    if ((bVar26 && (char)uVar21 == '\0') && local_50 == 0) {
      local_78 = uVar25;
      if (uVar6 != 0) {
        uVar5 = 0;
        do {
          uVar6 = uVar6 - 1;
          uVar9 = uVar5;
          if (cVar3 != '\0') {
            uVar9 = uVar6;
          }
          FUN_18017759e(param_1,(longlong)(int)(uVar9 * uVar7 * iVar24) + uVar10,uVar7 * iVar24);
          uVar5 = uVar5 + 1;
        } while (uVar6 != 0);
      }
    }
    else {
      if ((char)uVar19 == '\0') {
        local_80 = 0;
        uVar23 = local_80;
      }
      else {
        if (local_64 == 0) {
LAB_180176548:
          thunk_FUN_180290e40(uVar10);
          pcVar16 = "bad palette";
          goto LAB_180176565;
        }
        FUN_180177488(param_1,local_80 & 0xffffffff);
        uVar11 = FUN_180178f9d(uVar5,uVar7,0);
        if (uVar11 == 0) {
          thunk_FUN_180290e40(uVar10);
          goto LAB_18017655e;
        }
        if (local_88 == 0) {
          iVar8 = FUN_18017759e(param_1,uVar11,uVar7 * uVar5);
          uVar23 = uVar11;
          if (iVar8 == 0) {
            thunk_FUN_180290e40(uVar10);
            uVar10 = uVar11;
            goto LAB_180176548;
          }
        }
        else {
          local_80 = uVar11;
          do {
            FUN_18017f895(param_1,uVar11);
            uVar11 = uVar11 + uVar7;
            uVar5 = uVar5 - 1;
            iVar24 = local_84;
            uVar23 = local_80;
          } while (uVar5 != 0);
        }
      }
      local_80 = uVar23;
      local_78 = uVar25;
      if (uVar6 * iVar24 != 0) {
        uVar11 = (ulonglong)uVar7;
        local_70 = (ulonglong)(uVar6 * iVar24);
        bVar2 = 1;
        uVar23 = 0;
        uVar5 = 0;
        iVar24 = 0;
        local_60 = (uint)uVar21;
        local_5c = uVar7;
        local_58 = uVar10;
        do {
          if ((byte)local_8c < 8) {
LAB_180176317:
            if ((char)uVar19 == '\0') {
              if (local_88 == 0) {
                puVar18 = *(undefined1 **)(param_1 + 0xc0);
                uVar21 = 0;
                do {
                  if (puVar18 < *(undefined1 **)(param_1 + 200)) {
LAB_1801763e6:
                    *(undefined1 **)(param_1 + 0xc0) = puVar18 + 1;
                    uVar13 = *puVar18;
                    puVar18 = puVar18 + 1;
                  }
                  else {
                    if (*(int *)(param_1 + 0x30) != 0) {
                      FUN_180176673(param_1);
                      puVar18 = *(undefined1 **)(param_1 + 0xc0);
                      goto LAB_1801763e6;
                    }
                    uVar13 = 0;
                  }
                  *(undefined1 *)((longlong)&local_4c + uVar21) = uVar13;
                  uVar21 = uVar21 + 1;
                } while (uVar11 != uVar21);
                uVar19 = (ulonglong)local_60;
              }
              else {
                FUN_18017f895(param_1);
              }
            }
            else {
              if ((char)local_90 == '\b') {
                pbVar12 = *(byte **)(param_1 + 0xc0);
                if (*(byte **)(param_1 + 200) <= pbVar12) {
                  if (*(int *)(param_1 + 0x30) == 0) {
                    uVar6 = 0;
                    goto LAB_180176388;
                  }
                  FUN_180176673(param_1);
                  pbVar12 = *(byte **)(param_1 + 0xc0);
                }
                *(byte **)(param_1 + 0xc0) = pbVar12 + 1;
                uVar6 = (uint)*pbVar12;
              }
              else {
                uVar6 = FUN_18017918c(param_1);
              }
LAB_180176388:
              uVar7 = local_5c;
              if (local_64 <= uVar6) {
                uVar6 = 0;
              }
              FUN_1802a82f0(&local_4c,uVar6 * local_5c + local_80,uVar11);
              uVar10 = local_58;
            }
          }
          else {
            if (iVar24 == 0) {
              pbVar12 = *(byte **)(param_1 + 0xc0);
              if (pbVar12 < *(byte **)(param_1 + 200)) {
LAB_1801762fc:
                *(byte **)(param_1 + 0xc0) = pbVar12 + 1;
                uVar5 = (uint)*pbVar12;
              }
              else {
                if (*(int *)(param_1 + 0x30) != 0) {
                  FUN_180176673(param_1);
                  pbVar12 = *(byte **)(param_1 + 0xc0);
                  goto LAB_1801762fc;
                }
                uVar5 = 0;
              }
              iVar24 = (uVar5 & 0x7f) + 1;
              uVar5 = uVar5 >> 7;
              goto LAB_180176317;
            }
            bVar27 = uVar5 == 0;
            uVar5 = 1;
            if ((bool)(bVar27 | bVar2)) {
              uVar5 = (uint)!bVar27;
              goto LAB_180176317;
            }
          }
          FUN_1802a82f0(uVar7 * (int)uVar23 + uVar10,&local_4c,uVar11);
          iVar24 = iVar24 + -1;
          uVar23 = uVar23 + 1;
          bVar2 = 0;
        } while (uVar23 != local_70);
      }
      iVar24 = local_84;
      if (local_91 == '\x01' && (int)local_78 != 0) {
        iVar8 = uVar7 * local_84;
        iVar17 = iVar8 * ((int)local_78 - 1U);
        uVar5 = 0;
        uVar6 = 0;
        do {
          if (local_84 != 0) {
            uVar21 = uVar10;
            iVar20 = iVar8 + 1;
            do {
              uVar13 = *(undefined1 *)(uVar21 + uVar6);
              *(undefined1 *)(uVar21 + uVar6) = *(undefined1 *)(uVar21 + (longlong)iVar17);
              *(undefined1 *)(uVar21 + (longlong)iVar17) = uVar13;
              uVar21 = uVar21 + 1;
              iVar20 = iVar20 + -1;
            } while (1 < iVar20);
          }
          iVar17 = iVar17 - iVar8;
          uVar6 = uVar6 + iVar8;
          bVar27 = uVar5 != (int)local_78 - 1U >> 1;
          uVar5 = uVar5 + 1;
        } while (bVar27);
      }
      if (local_80 != 0) {
        thunk_FUN_180290e40(local_80);
      }
    }
    if ((2 < uVar7 && local_88 == 0) && (iVar8 = (int)local_78 * iVar24, iVar8 != 0)) {
      puVar18 = (undefined1 *)(uVar10 + 2);
      do {
        uVar13 = puVar18[-2];
        puVar18[-2] = *puVar18;
        *puVar18 = uVar13;
        puVar18 = puVar18 + uVar7;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (uVar7 != 4) {
      if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_b8)) {
        uVar21 = FUN_18017710b(uVar10,uVar7,iVar24);
        return uVar21;
      }
      goto LAB_1801765c2;
    }
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_b8)) {
    return uVar10;
  }
LAB_1801765c2:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
}

