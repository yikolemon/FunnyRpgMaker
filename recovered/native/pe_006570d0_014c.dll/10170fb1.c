/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10170fb1 */

undefined4 __fastcall FUN_10170fb1(int *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined1 *puVar15;
  undefined3 uVar16;
  uint uVar17;
  undefined4 uVar18;
  bool bVar19;
  longlong lVar20;
  uint local_448;
  int *local_444;
  uint local_440;
  undefined4 local_43c;
  uint local_438;
  uint local_434;
  uint local_430;
  int local_42c;
  uint local_428;
  int local_424;
  undefined2 local_41e [3];
  char local_418 [4];
  undefined1 local_414 [1024];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_448;
  local_418[2] = 0;
  local_418[0] = '\0';
  local_418[1] = '\0';
  puVar1 = (uint *)*param_1;
  uVar18 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  local_444 = param_1;
  iVar6 = FUN_10170e1d();
  if (iVar6 == 0) {
LAB_101715cc:
    if (DAT_10388d00 != (local_14 ^ (uint)&local_448)) {
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    return uVar18;
  }
  bVar19 = true;
  local_430 = 0;
  local_434 = 0;
  local_42c = 0;
  local_438 = 0;
  local_428 = 0;
  local_440 = 0;
  local_43c = 0;
  local_448 = 0;
LAB_10171037:
  lVar20 = FUN_10171ab5();
  piVar3 = local_444;
  uVar11 = (uint)((ulonglong)lVar20 >> 0x20);
  uVar7 = (uint)lVar20;
  if (lVar20 < 0x4948445200000000) {
    if (uVar11 == 0x43674249) {
      local_42c = 1;
LAB_101712dd:
      FUN_10171ace();
    }
    else {
      if (uVar11 != 0x49444154) {
        if (uVar11 != 0x49454e44) goto LAB_101712c9;
        if ((!bVar19) && (local_444[1] != 0)) {
          local_424 = puVar1[2] * puVar1[1] * (local_444[4] * *puVar1 + 7 >> 3) + puVar1[1];
          iVar6 = FUN_10171c3f(local_424,&local_424,local_42c == 0);
          piVar3[2] = iVar6;
          uVar18 = 0;
          if (iVar6 == 0) goto LAB_101715cc;
          thunk_FUN_10274120(piVar3[1]);
          piVar3[1] = 0;
          uVar7 = puVar1[2] + 1;
          cVar4 = (char)local_43c;
          uVar11 = puVar1[2];
          if (cVar4 != '\0') {
            uVar11 = uVar7;
          }
          uVar12 = uVar11;
          if ((char)local_448 == '\0') {
            uVar12 = uVar7;
          }
          if (uVar7 != 4) {
            uVar12 = uVar11;
          }
          puVar1[3] = uVar12;
          iVar6 = FUN_10171cdd(local_424,uVar12,piVar3[4],local_430,local_434);
          if (iVar6 == 0) goto LAB_101715cc;
          if (cVar4 == '\0') {
            if ((char)local_448 != '\0') goto LAB_10171784;
          }
          else {
            if (local_444[4] == 0x10) {
              FUN_10171f12(puVar1[3]);
            }
            else {
              FUN_10171f7c(puVar1[3]);
            }
            if ((char)local_448 == '\0') {
              puVar1[2] = puVar1[2] + 1;
            }
            else {
LAB_10171784:
              puVar1[2] = local_448 & 0xff;
              puVar1[3] = 4;
              iVar6 = FUN_10171fd7(4);
              if (iVar6 == 0) goto LAB_101715cc;
            }
          }
          piVar3 = local_444;
          thunk_FUN_10274120(local_444[2]);
          piVar3[2] = 0;
          FUN_10171b1f();
          uVar18 = 1;
          goto LAB_101715cc;
        }
LAB_101715c5:
        FUN_10170e07();
        uVar18 = 0;
        goto LAB_101715cc;
      }
      if ((bVar19) || ((((char)local_448 != '\0' && (local_438 == 0)) || (0x40000000 < uVar7))))
      goto LAB_101715c5;
      uVar11 = local_440 + uVar7;
      uVar18 = 0;
      if ((int)uVar11 < (int)local_440) goto LAB_101715cc;
      if (local_428 < uVar11) {
        uVar12 = uVar7;
        if (uVar7 < 0x1001) {
          uVar12 = 0x1000;
        }
        if (local_428 != 0) {
          uVar12 = local_428;
        }
        do {
          local_428 = uVar12;
          uVar12 = local_428 * 2;
        } while (local_428 < uVar11);
        iVar6 = FUN_1026ff70(local_444[1],local_428);
        if (iVar6 == 0) goto LAB_101715c5;
        piVar3[1] = iVar6;
      }
      iVar6 = FUN_10171bb6(uVar7);
      if (iVar6 == 0) goto LAB_101715c5;
      bVar19 = false;
      local_440 = uVar11;
    }
  }
  else if (uVar11 == 0x74524e53) {
    if ((bVar19) || (local_444[1] != 0)) goto LAB_101715c5;
    if ((char)local_448 != '\0') {
      if ((local_438 != 0) && (uVar7 <= local_438)) {
        local_448 = CONCAT31((int3)(local_438 >> 8),4);
        if (uVar7 != 0) {
          puVar10 = (undefined1 *)puVar1[0x2b];
          uVar11 = 0;
          do {
            if (puVar10 < (undefined1 *)puVar1[0x2c]) {
LAB_1017125c:
              puVar1[0x2b] = (uint)(puVar10 + 1);
              uVar14 = *puVar10;
              puVar10 = puVar10 + 1;
            }
            else {
              if (puVar1[8] != 0) {
                FUN_10170e8c();
                puVar10 = (undefined1 *)puVar1[0x2b];
                goto LAB_1017125c;
              }
              uVar14 = 0;
            }
            local_414[uVar11 * 4 + 3] = uVar14;
            uVar11 = uVar11 + 1;
          } while (uVar7 != uVar11);
        }
        goto LAB_101712ad;
      }
      goto LAB_101715c5;
    }
    uVar11 = puVar1[2];
    if (((uVar11 & 1) == 0) || (uVar11 * 2 != uVar7)) goto LAB_101715c5;
    uVar16 = (undefined3)(uVar11 * 2 >> 8);
    if (local_444[4] == 0x10) {
      local_43c = CONCAT31(uVar16,1);
      if ((int)uVar11 < 1) {
LAB_10171587:
        local_43c = CONCAT31(uVar16,1);
      }
      else {
        uVar7 = 0;
        do {
          uVar5 = FUN_10171b39();
          local_41e[uVar7] = uVar5;
          if ((int)puVar1[2] <= (int)(uVar7 + 1)) break;
          bVar19 = uVar7 < 2;
          uVar7 = uVar7 + 1;
        } while (bVar19);
      }
    }
    else {
      local_43c = CONCAT31(uVar16,1);
      if ((int)uVar11 < 1) goto LAB_10171587;
      uVar7 = 0;
      do {
        cVar4 = FUN_10171b39();
        local_418[uVar7] = (&DAT_102babe0)[local_444[4]] * cVar4;
        if ((int)puVar1[2] <= (int)(uVar7 + 1)) break;
        bVar19 = uVar7 < 2;
        uVar7 = uVar7 + 1;
      } while (bVar19);
    }
    bVar19 = false;
    local_448 = 0;
  }
  else if (uVar11 == 0x504c5445) {
    if (((bVar19) || (0x300 < uVar7)) || (uVar11 = (uVar7 & 0xffff) / 3, uVar11 * 3 != uVar7))
    goto LAB_101715c5;
    local_438 = uVar11;
    if (2 < (ushort)lVar20) {
      puVar10 = (undefined1 *)puVar1[0x2b];
      iVar6 = 0;
      do {
        puVar15 = (undefined1 *)puVar1[0x2c];
        if (puVar10 < puVar15) {
          puVar1[0x2b] = (uint)(puVar10 + 1);
          uVar14 = *puVar10;
          puVar10 = puVar10 + 1;
        }
        else if (puVar1[8] == 0) {
          uVar14 = 0;
        }
        else {
          FUN_10170e8c();
          puVar2 = (undefined1 *)puVar1[0x2b];
          puVar15 = (undefined1 *)puVar1[0x2c];
          puVar10 = puVar2 + 1;
          puVar1[0x2b] = (uint)puVar10;
          uVar14 = *puVar2;
        }
        local_414[iVar6 * 4] = uVar14;
        if (puVar10 < puVar15) {
          puVar1[0x2b] = (uint)(puVar10 + 1);
          uVar14 = *puVar10;
          puVar10 = puVar10 + 1;
        }
        else if (puVar1[8] == 0) {
          uVar14 = 0;
        }
        else {
          FUN_10170e8c();
          puVar2 = (undefined1 *)puVar1[0x2b];
          puVar15 = (undefined1 *)puVar1[0x2c];
          puVar10 = puVar2 + 1;
          puVar1[0x2b] = (uint)puVar10;
          uVar14 = *puVar2;
        }
        local_414[iVar6 * 4 + 1] = uVar14;
        if (puVar10 < puVar15) {
LAB_10171396:
          puVar1[0x2b] = (uint)(puVar10 + 1);
          uVar14 = *puVar10;
          puVar10 = puVar10 + 1;
        }
        else {
          if (puVar1[8] != 0) {
            FUN_10170e8c();
            puVar10 = (undefined1 *)puVar1[0x2b];
            goto LAB_10171396;
          }
          uVar14 = 0;
        }
        local_414[iVar6 * 4 + 2] = uVar14;
        local_414[iVar6 * 4 + 3] = 0xff;
        iVar6 = iVar6 + 1;
      } while (uVar11 + (uVar11 == 0) != iVar6);
    }
LAB_101712ad:
    bVar19 = false;
  }
  else {
    if (uVar11 != 0x49484452) {
LAB_101712c9:
      if (!bVar19) {
        bVar19 = false;
        if ((uVar11 >> 0x1d & 1) != 0) goto LAB_101712dd;
        s_XXXX_PNG_chunk_not_known_10389fd0[0] = (char)((ulonglong)lVar20 >> 0x38);
        s_XXXX_PNG_chunk_not_known_10389fd0[1] = (char)((ulonglong)lVar20 >> 0x30);
        s_XXXX_PNG_chunk_not_known_10389fd0[2] = (char)((ulonglong)lVar20 >> 0x28);
        s_XXXX_PNG_chunk_not_known_10389fd0[3] = (char)((ulonglong)lVar20 >> 0x20);
      }
      goto LAB_101715c5;
    }
    if ((!bVar19) || (uVar7 != 0xd)) goto LAB_101715c5;
    uVar7 = FUN_10171b1f();
    *puVar1 = uVar7;
    uVar7 = FUN_10171b1f();
    piVar3 = local_444;
    puVar1[1] = uVar7;
    if ((0x1000000 < uVar7) || (0x1000000 < *puVar1)) goto LAB_101715c5;
    pbVar8 = (byte *)puVar1[0x2b];
    if (pbVar8 < (byte *)puVar1[0x2c]) {
LAB_101710d4:
      puVar1[0x2b] = (uint)(pbVar8 + 1);
      uVar7 = (uint)*pbVar8;
    }
    else {
      if (puVar1[8] != 0) {
        FUN_10170e8c();
        pbVar8 = (byte *)puVar1[0x2b];
        goto LAB_101710d4;
      }
      uVar7 = 0;
    }
    piVar3[4] = uVar7;
    bVar13 = (byte)uVar7 - 1;
    if (((byte)((byte)uVar7 ^ bVar13) <= bVar13) || ((uVar7 & 0x1f) == 0)) goto LAB_101715c5;
    pbVar8 = (byte *)puVar1[0x2b];
    if (pbVar8 < (byte *)puVar1[0x2c]) {
LAB_10171122:
      pbVar9 = pbVar8 + 1;
      puVar1[0x2b] = (uint)pbVar9;
      bVar13 = *pbVar8;
      uVar7 = (uint)bVar13;
      if (6 < uVar7) goto LAB_101715c5;
      if (bVar13 == 3) {
        if (piVar3[4] == 0x10) goto LAB_101715c5;
        uVar7 = 3;
        bVar13 = 3;
        local_448 = CONCAT31((int3)((uint)pbVar8 >> 8),3);
      }
      else if ((bVar13 & 1) != 0) goto LAB_101715c5;
    }
    else {
      if (puVar1[8] != 0) {
        FUN_10170e8c();
        pbVar8 = (byte *)puVar1[0x2b];
        goto LAB_10171122;
      }
      bVar13 = 0;
      uVar7 = 0;
      pbVar9 = pbVar8;
    }
    if (pbVar9 < (byte *)puVar1[0x2c]) {
LAB_101714b2:
      pbVar8 = pbVar9 + 1;
      puVar1[0x2b] = (uint)pbVar8;
      if (*pbVar9 != 0) goto LAB_101715c5;
      if ((byte *)puVar1[0x2c] <= pbVar8) {
        if (puVar1[8] == 0) goto LAB_10171523;
        FUN_10170e8c();
        pbVar8 = (byte *)puVar1[0x2b];
      }
      pbVar9 = pbVar8 + 1;
      puVar1[0x2b] = (uint)pbVar9;
      if (*pbVar8 != 0) goto LAB_101715c5;
      if ((byte *)puVar1[0x2c] <= pbVar9) {
        if (puVar1[8] == 0) goto LAB_10171523;
        FUN_10170e8c();
        pbVar9 = (byte *)puVar1[0x2b];
      }
      puVar1[0x2b] = (uint)(pbVar9 + 1);
      uVar11 = (uint)*pbVar9;
      if (1 < uVar11) goto LAB_101715c5;
    }
    else {
      if (puVar1[8] != 0) {
        FUN_10170e8c();
        pbVar9 = (byte *)puVar1[0x2b];
        goto LAB_101714b2;
      }
LAB_10171523:
      uVar11 = 0;
    }
    uVar12 = *puVar1;
    if ((uVar12 == 0) || (puVar1[1] == 0)) goto LAB_101715c5;
    if ((char)local_448 == '\0') {
      uVar17 = (uint)(3 < bVar13) + (uVar7 & 2) + 1;
      puVar1[2] = uVar17;
      uVar12 = (uint)((0x40000000 / (ulonglong)uVar12) / (ulonglong)uVar17);
      local_448 = 0;
    }
    else {
      puVar1[2] = 1;
      uVar12 = (uint)(0x40000000 / (ulonglong)uVar12) >> 2;
    }
    bVar19 = false;
    local_434 = uVar11;
    local_430 = uVar7;
    if (uVar12 < puVar1[1]) goto LAB_101715c5;
  }
  FUN_10171b1f();
  goto LAB_10171037;
}

