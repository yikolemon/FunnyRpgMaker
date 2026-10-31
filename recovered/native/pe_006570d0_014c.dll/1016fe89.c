/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016fe89 */

uint __fastcall FUN_1016fe89(int param_1,uint *param_2,int *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  char cVar10;
  uint *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint *local_44c;
  uint *local_448;
  uint local_444;
  uint local_440;
  int local_43c;
  uint local_438;
  uint *local_434;
  int local_430;
  int local_42c;
  int local_428;
  int local_424;
  char *local_420;
  char local_41c;
  char local_41b;
  byte local_41a;
  byte local_419;
  char local_414;
  char cStack_413;
  char cStack_412;
  char cStack_411;
  char cStack_410;
  char cStack_40f;
  char cStack_40e;
  char cStack_40d;
  char cStack_40c;
  char cStack_40b;
  char cStack_40a;
  char cStack_409;
  char cStack_408;
  char cStack_407;
  char cStack_406;
  char cStack_405;
  char cStack_404;
  char cStack_403;
  char cStack_402;
  char cStack_401;
  char cStack_400;
  char cStack_3ff;
  char cStack_3fe;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_44c;
  FUN_101790cf();
  iVar3 = FUN_102595e0(&local_414,"#?RADIANCE",0xb);
  if (((iVar3 == 0) ||
      (CONCAT13(cStack_40e,CONCAT12(cStack_40f,CONCAT11(cStack_410,cStack_411))) == 0x454247 &&
       CONCAT13(cStack_411,CONCAT12(cStack_412,CONCAT11(cStack_413,local_414))) == 0x47523f23)) &&
     (local_44c = param_2, FUN_101790cf(), local_414 != '\0')) {
    iVar3 = 0;
    iVar15 = 1;
    do {
      auVar16[0] = -(local_414 == s_FORMAT_32_bit_rl_102bb470[0]);
      auVar16[1] = -(cStack_413 == s_FORMAT_32_bit_rl_102bb470[1]);
      auVar16[2] = -(cStack_412 == s_FORMAT_32_bit_rl_102bb470[2]);
      auVar16[3] = -(cStack_411 == s_FORMAT_32_bit_rl_102bb470[3]);
      auVar16[4] = -(cStack_410 == s_FORMAT_32_bit_rl_102bb470[4]);
      auVar16[5] = -(cStack_40f == s_FORMAT_32_bit_rl_102bb470[5]);
      auVar16[6] = -(cStack_40e == s_FORMAT_32_bit_rl_102bb470[6]);
      auVar16[7] = -(cStack_40d == s_FORMAT_32_bit_rl_102bb470[7]);
      auVar16[8] = -(cStack_40c == s_FORMAT_32_bit_rl_102bb470[8]);
      auVar16[9] = -(cStack_40b == s_FORMAT_32_bit_rl_102bb470[9]);
      auVar16[10] = -(cStack_40a == s_FORMAT_32_bit_rl_102bb470[10]);
      auVar16[0xb] = -(cStack_409 == s_FORMAT_32_bit_rl_102bb470[0xb]);
      auVar16[0xc] = -(cStack_408 == s_FORMAT_32_bit_rl_102bb470[0xc]);
      auVar16[0xd] = -(cStack_407 == s_FORMAT_32_bit_rl_102bb470[0xd]);
      auVar16[0xe] = -(cStack_406 == s_FORMAT_32_bit_rl_102bb470[0xe]);
      auVar16[0xf] = -(cStack_405 == s_FORMAT_32_bit_rl_102bb470[0xf]);
      auVar17[0] = -(cStack_40d == s_32_bit_rle_rgbe_102bb460[0]);
      auVar17[1] = -(cStack_40c == s_32_bit_rle_rgbe_102bb460[1]);
      auVar17[2] = -(cStack_40b == s_32_bit_rle_rgbe_102bb460[2]);
      auVar17[3] = -(cStack_40a == s_32_bit_rle_rgbe_102bb460[3]);
      auVar17[4] = -(cStack_409 == s_32_bit_rle_rgbe_102bb460[4]);
      auVar17[5] = -(cStack_408 == s_32_bit_rle_rgbe_102bb460[5]);
      auVar17[6] = -(cStack_407 == s_32_bit_rle_rgbe_102bb460[6]);
      auVar17[7] = -(cStack_406 == s_32_bit_rle_rgbe_102bb460[7]);
      auVar17[8] = -(cStack_405 == s_32_bit_rle_rgbe_102bb460[8]);
      auVar17[9] = -(cStack_404 == s_32_bit_rle_rgbe_102bb460[9]);
      auVar17[10] = -(cStack_403 == s_32_bit_rle_rgbe_102bb460[10]);
      auVar17[0xb] = -(cStack_402 == s_32_bit_rle_rgbe_102bb460[0xb]);
      auVar17[0xc] = -(cStack_401 == s_32_bit_rle_rgbe_102bb460[0xc]);
      auVar17[0xd] = -(cStack_400 == s_32_bit_rle_rgbe_102bb460[0xd]);
      auVar17[0xe] = -(cStack_3ff == s_32_bit_rle_rgbe_102bb460[0xe]);
      auVar17[0xf] = -(cStack_3fe == s_32_bit_rle_rgbe_102bb460[0xf]);
      auVar17 = auVar17 & auVar16;
      if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
        iVar3 = iVar15;
      }
      FUN_101790cf();
    } while (local_414 != '\0');
    if ((iVar3 != 0) &&
       (FUN_101790cf(), cStack_412 == ' ' && CONCAT11(cStack_413,local_414) == 0x592d)) {
      local_420 = &cStack_411;
      iVar3 = FUN_10270ac0(local_420,&local_420,10);
      pcVar5 = local_420 + 2;
      do {
        pcVar4 = pcVar5;
        pcVar5 = pcVar4 + 1;
      } while (pcVar4[-2] == ' ');
      if (((pcVar4[-2] == '+') && (pcVar4[-1] == 'X')) &&
         ((*pcVar4 == ' ' &&
          ((local_420 = pcVar5, uVar6 = FUN_10270ac0(pcVar5,0,10), iVar3 < 0x1000001 &&
           ((int)uVar6 < 0x1000001)))))) {
        *local_44c = uVar6;
        *param_3 = iVar3;
        iVar7 = FUN_10178dfb(4,4);
        if ((iVar7 != 0) && (local_430 = iVar3, uVar14 = FUN_10178e4b(4,4), uVar14 != 0)) {
          puVar11 = (uint *)0x0;
          local_440 = uVar6;
          if (uVar6 - 0x8000 < 0xffff8008) goto LAB_10170464;
          if (0 < local_430) {
            local_428 = uVar6 << 4;
            iVar3 = 0;
            puVar11 = (uint *)0x0;
            local_438 = uVar14;
            do {
              pbVar8 = *(byte **)(param_1 + 0xac);
              pbVar12 = *(byte **)(param_1 + 0xb0);
              local_424 = iVar3;
              if (pbVar8 < pbVar12) {
                *(byte **)(param_1 + 0xac) = pbVar8 + 1;
                local_444 = CONCAT31((int3)((uint)pbVar8 >> 8),*pbVar8);
                pbVar8 = pbVar8 + 1;
              }
              else if (*(int *)(param_1 + 0x20) == 0) {
                local_444 = 0;
              }
              else {
                FUN_10170e8c();
                puVar9 = *(undefined1 **)(param_1 + 0xac);
                pbVar12 = *(byte **)(param_1 + 0xb0);
                pbVar8 = puVar9 + 1;
                *(byte **)(param_1 + 0xac) = pbVar8;
                local_444 = CONCAT31((int3)((uint)puVar9 >> 8),*puVar9);
              }
              if (pbVar8 < pbVar12) {
                *(byte **)(param_1 + 0xac) = pbVar8 + 1;
                local_44c = (uint *)CONCAT31((int3)((uint)pbVar8 >> 8),*pbVar8);
                pbVar8 = pbVar8 + 1;
              }
              else if (*(int *)(param_1 + 0x20) == 0) {
                local_44c = (uint *)0x0;
              }
              else {
                FUN_10170e8c();
                puVar9 = *(undefined1 **)(param_1 + 0xac);
                pbVar12 = *(byte **)(param_1 + 0xb0);
                pbVar8 = puVar9 + 1;
                *(byte **)(param_1 + 0xac) = pbVar8;
                local_44c = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),*puVar9);
              }
              local_448 = puVar11;
              if (pbVar8 < pbVar12) {
LAB_1017011a:
                *(byte **)(param_1 + 0xac) = pbVar8 + 1;
                bVar2 = *pbVar8;
                pbVar8 = pbVar8 + 1;
              }
              else {
                if (*(int *)(param_1 + 0x20) != 0) {
                  FUN_10170e8c();
                  pbVar8 = *(byte **)(param_1 + 0xac);
                  goto LAB_1017011a;
                }
                bVar2 = 0;
              }
              cVar10 = (char)local_444;
              if (((cVar10 != '\x02') || ((char)local_44c != '\x02')) || ((char)bVar2 < '\0')) {
                local_41c = cVar10;
                local_41b = (char)local_44c;
                local_41a = bVar2;
                if (*(byte **)(param_1 + 0xb0) <= pbVar8) {
                  if (*(int *)(param_1 + 0x20) == 0) {
                    local_419 = 0;
                    goto LAB_101703eb;
                  }
                  FUN_10170e8c();
                  pbVar8 = *(byte **)(param_1 + 0xac);
                }
                *(byte **)(param_1 + 0xac) = pbVar8 + 1;
                local_419 = *pbVar8;
LAB_101703eb:
                FUN_101791fb();
                thunk_FUN_10274120(local_448);
                local_44c = (uint *)0x0;
                do {
                  FUN_10171bb6(4);
                  uVar6 = local_440;
                  FUN_101791fb();
                  iVar15 = iVar15 + 1;
                  while ((int)uVar6 <= iVar15) {
                    puVar11 = (uint *)((int)local_44c + 1);
LAB_10170464:
                    iVar15 = 0;
                    uVar6 = local_440;
                    local_44c = puVar11;
                    if (local_430 <= (int)puVar11) goto LAB_1017036d;
                  }
                } while( true );
              }
              if (pbVar8 < *(byte **)(param_1 + 0xb0)) {
LAB_10170169:
                *(byte **)(param_1 + 0xac) = pbVar8 + 1;
                uVar6 = (uint)*pbVar8;
              }
              else {
                if (*(int *)(param_1 + 0x20) != 0) {
                  FUN_10170e8c();
                  pbVar8 = *(byte **)(param_1 + 0xac);
                  goto LAB_10170169;
                }
                uVar6 = 0;
              }
              if (((uint)bVar2 << 8 | uVar6) != local_440) {
                thunk_FUN_10274120(uVar14);
                thunk_FUN_10274120(local_448);
                goto LAB_10170366;
              }
              puVar11 = local_448;
              if ((local_448 == (uint *)0x0) &&
                 (puVar11 = (uint *)FUN_101731c8(0), puVar11 == (uint *)0x0)) {
                thunk_FUN_10274120(uVar14);
                goto LAB_10170366;
              }
              local_42c = 0;
              local_448 = puVar11;
              local_434 = puVar11;
              do {
                local_43c = 0;
                uVar6 = local_440;
                do {
                  pbVar8 = *(byte **)(param_1 + 0xac);
                  if (*(byte **)(param_1 + 0xb0) <= pbVar8) {
                    if (*(int *)(param_1 + 0x20) != 0) {
                      FUN_10170e8c();
                      pbVar8 = *(byte **)(param_1 + 0xac);
                      goto LAB_101701ed;
                    }
LAB_10170398:
                    thunk_FUN_10274120(uVar14);
                    thunk_FUN_10274120(local_448);
                    goto LAB_10170366;
                  }
LAB_101701ed:
                  *(byte **)(param_1 + 0xac) = pbVar8 + 1;
                  uVar13 = (uint)*pbVar8;
                  local_444 = uVar13;
                  if (uVar13 < 0x81) {
                    if ((uVar13 == 0) || (uVar6 < uVar13)) goto LAB_10170398;
                    local_44c = local_434 + local_43c;
                    local_43c = local_43c + uVar13;
                    uVar6 = 0;
                    do {
                      puVar9 = *(undefined1 **)(param_1 + 0xac);
                      if (puVar9 < *(undefined1 **)(param_1 + 0xb0)) {
LAB_10170269:
                        *(undefined1 **)(param_1 + 0xac) = puVar9 + 1;
                        uVar1 = *puVar9;
                      }
                      else {
                        if (*(int *)(param_1 + 0x20) != 0) {
                          FUN_10170e8c();
                          puVar9 = *(undefined1 **)(param_1 + 0xac);
                          uVar13 = local_444;
                          goto LAB_10170269;
                        }
                        uVar1 = 0;
                      }
                      *(undefined1 *)(local_44c + uVar6) = uVar1;
                      uVar6 = uVar6 + 1;
                      iVar3 = local_43c;
                    } while (uVar13 != uVar6);
                  }
                  else {
                    if (pbVar8 + 1 < *(byte **)(param_1 + 0xb0)) {
                      *(byte **)(param_1 + 0xac) = pbVar8 + 2;
                      bVar2 = pbVar8[1];
                    }
                    else if (*(int *)(param_1 + 0x20) == 0) {
                      bVar2 = 0;
                    }
                    else {
                      FUN_10170e8c();
                      pbVar8 = *(byte **)(param_1 + 0xac);
                      *(byte **)(param_1 + 0xac) = pbVar8 + 1;
                      bVar2 = *pbVar8;
                    }
                    uVar13 = local_444 & 0x7f;
                    if (uVar6 < uVar13) goto LAB_10170398;
                    iVar3 = local_43c;
                    if ((char)uVar13 != '\0') {
                      uVar6 = 0;
                      do {
                        *(byte *)(local_434 + local_43c + uVar6) = bVar2;
                        uVar6 = uVar6 + 1;
                        iVar3 = local_43c + uVar13;
                      } while (uVar13 != uVar6);
                    }
                  }
                  local_43c = iVar3;
                  uVar6 = local_440 - local_43c;
                } while (uVar6 != 0 && local_43c <= (int)local_440);
                local_42c = local_42c + 1;
                local_434 = (uint *)((int)local_434 + 1);
                puVar11 = local_448;
                uVar6 = local_438;
                uVar13 = local_440;
              } while (local_42c != 4);
              do {
                local_44c = puVar11;
                local_444 = uVar6;
                FUN_101791fb();
                uVar13 = uVar13 - 1;
                puVar11 = local_44c + 1;
                uVar6 = local_444 + 0x10;
              } while (uVar13 != 0);
              iVar3 = local_424 + 1;
              local_438 = local_438 + local_428;
              puVar11 = local_448;
            } while (iVar3 != local_430);
            thunk_FUN_10274120(local_448);
          }
          goto LAB_1017036d;
        }
      }
    }
  }
LAB_10170366:
  FUN_10170e07();
  uVar14 = 0;
LAB_1017036d:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_44c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar14;
}

