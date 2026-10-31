/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b9e18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1400b9e18(undefined8 param_1,LPCWSTR param_2,char *param_3)

{
  size_t sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  sbyte sVar9;
  byte *pbVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  byte bVar14;
  FILE *pFVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  char *pcVar20;
  ulonglong uVar21;
  bool bVar22;
  WCHAR local_b48 [264];
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined2 local_918;
  undefined6 uStack_916;
  undefined2 uStack_910;
  undefined4 uStack_90e;
  undefined2 uStack_90a;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined1 local_138 [72];
  char *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined1 local_97 [7];
  size_t local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_6c;
  undefined4 *local_68;
  undefined4 local_5c;
  FILE *local_58;
  ushort local_4c;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pcVar20 = s_DXBDXARC_1401ca09c;
  if (param_3 != (char *)0x0) {
    pcVar20 = param_3;
  }
  uVar3 = FUN_1400d2196(0x7ffd,pcVar20);
  uVar16 = 0x3f;
  if (uVar3 < 0x3f) {
    uVar16 = (ulonglong)uVar3;
  }
  FUN_140135ff0(local_138,pcVar20,uVar16);
  local_138[uVar16] = 0;
  FUN_1400b464a(local_138,uVar16,local_97);
  local_58 = (FILE *)FUN_140114300(param_1,&DAT_140173b08);
  local_5c = 0xffffffff;
  if (local_58 == (FILE *)0x0) {
    return 0xffffffff;
  }
  GetCurrentDirectoryW(0x104,local_b48);
  SetCurrentDirectoryW(param_2);
  FUN_1400b2242(&local_e8,0x40,local_58);
  if (((short)local_e8 == 0x5844) && (local_e8._2_2_ == 8)) {
    uVar3 = uStack_bc >> 0x10;
    bVar22 = uStack_bc + 0xfeb50000 < 0x29d0000;
    DAT_1401ccd30 = 0x3f1ffff < uStack_bc || bVar22;
    DAT_1401ccd31 = uVar3 == 200 || uVar3 == 100;
    DAT_1401ccd32 = (ushort)(uStack_bc >> 0x10);
    local_4c = DAT_1401ccd32;
    if (uVar3 == 200) {
      local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(pcVar20 + uVar16 + 1));
      local_938 = 0;
      uStack_930 = 0;
      local_928 = 0;
      uStack_920 = 0;
      local_918 = 0;
      uStack_916 = 0;
      uStack_910 = 0;
      uStack_90e = 0;
      uStack_90a = 0;
      local_908 = 0;
      uStack_900 = 0;
      cVar12 = '\0';
      uVar18 = 0;
      do {
        uVar21 = (ulonglong)((uint)uVar18 & 3);
        bVar14 = (&DAT_140164f94)[uVar21] + cVar12 ^
                 (&DAT_140164f98)[uVar21] + *(byte *)((longlong)&local_88 + uVar21);
        sVar9 = ((uVar18 & 1) != 0) * '\x03' + 3;
        *(byte *)((longlong)&local_938 + uVar18) =
             ~((bVar14 << sVar9 | bVar14 >> 8 - sVar9) ^ (&DAT_140164f9c)[uVar21] ^
              *(byte *)((longlong)&local_88 + uVar21));
        uVar18 = uVar18 + 1;
        cVar12 = cVar12 + '\x11';
      } while (uVar18 != 0x3f);
      _DAT_1401ca080 = local_928;
      uRam00000001401ca088 = uStack_920;
      _DAT_1401ca070 = (undefined4)local_938;
      uRam00000001401ca074 = local_938._4_4_;
      uRam00000001401ca078 = (undefined4)uStack_930;
      uRam00000001401ca07c = uStack_930._4_4_;
      DAT_1401ca090 = CONCAT26(uStack_910,uStack_916);
      DAT_1401ca098 = uStack_90e;
    }
    uVar13 = uStack_bc;
    if (0x3f1ffff < uStack_bc || bVar22) {
      FUN_1401366a0(&DAT_1401cca30,0,0x300);
      FUN_1400b9cee(&local_e8,(longlong)&local_b8 + 1,uVar3);
      pFVar15 = local_58;
      FUN_140113f48(local_58,0,2);
      uVar3 = FUN_1401144b0(pFVar15);
      FUN_140113f48(pFVar15,0,0);
      local_90 = (size_t)(int)uVar3;
      local_6c = uVar3;
      local_68 = (undefined4 *)thunk_FUN_1400d3680();
      FUN_1401366a0(local_68,0,local_90);
      puVar2 = local_68;
      sVar1 = local_90;
      fread(local_68,1,local_90,local_58);
      *puVar2 = local_e8;
      puVar2[1] = uStack_e4;
      puVar2[2] = uStack_e0;
      puVar2[3] = uStack_dc;
      puVar2[4] = local_d8;
      puVar2[5] = uStack_d4;
      puVar2[6] = uStack_d0;
      puVar2[7] = uStack_cc;
      puVar2[8] = local_c8;
      puVar2[9] = uStack_c4;
      puVar2[10] = uStack_c0;
      puVar2[0xb] = uStack_bc;
      puVar2[0xc] = local_b8;
      puVar2[0xd] = uStack_b4;
      puVar2[0xe] = uStack_b0;
      puVar2[0xf] = uStack_ac;
      FUN_1401366a0(&local_938,0,0xc0);
      local_49 = 1;
      local_9c = (int)sVar1 - 0x40;
      local_88 = (longlong)(int)local_9c;
      local_a8 = 0x40;
      FUN_1400b909c(&local_4c,(longlong)&local_b8 + 1,&DAT_1401cca30,0,puVar2,&local_a8,&local_88,
                    &local_49,pcVar20);
      local_f0 = pcVar20 + uVar16 + 1;
      if (local_4c < 0x3f2) {
        local_f0 = (char *)0x0;
      }
      FUN_1400b982a(&local_938,(longlong)&local_b8 + 1,local_f0,&local_4c);
      puVar2 = local_68;
      if ((int)sVar1 < 0x440) {
        return 0;
      }
      uVar18 = 0x400;
      if (0x3fb < local_4c || (ushort)(local_4c - 0x15e) < 0x28a) {
        if (local_4c < 0x3fc) {
          pbVar10 = (byte *)((longlong)&uStack_ac + 1);
          iVar4 = (uint)uStack_b4._1_1_ * (uint)local_b8._3_1_;
        }
        else {
          pbVar10 = (byte *)&uStack_ac;
          iVar4 = (uint)uStack_b4._1_1_ * (uint)local_b8._3_1_ +
                  (uint)(byte)pcVar20[uVar16 + 2] * (uint)(byte)pcVar20[uVar16 + 1];
        }
        uVar3 = iVar4 + (uint)*pbVar10 + (uint)(iVar4 + (uint)*pbVar10 == 0);
        _DAT_1401cc840 = uVar3 >> 8 ^ uVar3 ^ uVar3 * 0x800;
        _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
        _DAT_1401cc840 = _DAT_1401cc840 << 0xb ^ _DAT_1401cc840;
        _DAT_1401cc840 = _DAT_1401cc840 >> 0x13 ^ _DAT_1401cc840;
        _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
        if (_DAT_1401cc840 % 500 + 800 <= local_6c) {
          _DAT_1401cc840 = _DAT_1401cc840 << 0xb ^ _DAT_1401cc840;
          _DAT_1401cc840 = _DAT_1401cc840 >> 0x13 ^ _DAT_1401cc840;
          _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
        }
        _DAT_1401cc840 = _DAT_1401cc840 << 0xb ^ _DAT_1401cc840;
        _DAT_1401cc840 = _DAT_1401cc840 >> 0x13 ^ _DAT_1401cc840;
        _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
        uVar3 = local_9c;
        if (_DAT_1401cc840 % 500 + 800 <= local_9c) {
          _DAT_1401cc840 = _DAT_1401cc840 << 0xb ^ _DAT_1401cc840;
          _DAT_1401cc840 = _DAT_1401cc840 >> 0x13 ^ _DAT_1401cc840;
          _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
          uVar3 = _DAT_1401cc840 % 500 + 800;
        }
        uVar18 = (ulonglong)uVar3;
      }
      uVar3 = 0x10;
      uVar21 = 0;
      do {
        if (uVar3 == 0x10) {
          local_88 = CONCAT44(uStack_884,local_888);
          uStack_80 = uStack_880;
          uStack_7c = uStack_87c;
          FUN_1400859c5(&local_88,&local_938);
          uVar3 = 0xf;
          do {
            uVar11 = (ulonglong)uVar3;
            if (*(char *)((longlong)&local_888 + uVar11) != -1) {
              *(char *)((longlong)&local_888 + uVar11) =
                   *(char *)((longlong)&local_888 + uVar11) + '\x01';
              uVar3 = 0;
              goto LAB_1400ba3a6;
            }
            *(undefined1 *)((longlong)&local_888 + uVar11) = 0;
            bVar22 = uVar3 != 0;
            uVar3 = uVar3 - 1;
          } while (bVar22);
          uVar3 = 0;
        }
LAB_1400ba3a6:
        pbVar10 = (byte *)((longlong)puVar2 + uVar21 + 0x40);
        *pbVar10 = *pbVar10 ^ *(byte *)((longlong)&local_88 + (ulonglong)uVar3);
        uVar21 = uVar21 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar21 != uVar18);
      lVar7 = CONCAT44(uStack_d4,local_d8);
      iVar4 = local_6c - local_d8;
      if (iVar4 != 0) {
        uVar3 = 0x10;
        lVar19 = 0;
        do {
          if (uVar3 == 0x10) {
            local_88 = CONCAT44(uStack_884,local_888);
            uStack_80 = uStack_880;
            uStack_7c = uStack_87c;
            FUN_1400859c5(&local_88,&local_938);
            uVar3 = 0xf;
            do {
              uVar18 = (ulonglong)uVar3;
              if (*(char *)((longlong)&local_888 + uVar18) != -1) {
                *(char *)((longlong)&local_888 + uVar18) =
                     *(char *)((longlong)&local_888 + uVar18) + '\x01';
                uVar3 = 0;
                goto LAB_1400ba437;
              }
              *(undefined1 *)((longlong)&local_888 + uVar18) = 0;
              bVar22 = uVar3 != 0;
              uVar3 = uVar3 - 1;
            } while (bVar22);
            uVar3 = 0;
          }
LAB_1400ba437:
          pbVar10 = (byte *)((longlong)puVar2 + lVar19 + lVar7);
          *pbVar10 = *pbVar10 ^ *(byte *)((longlong)&local_88 + (ulonglong)uVar3);
          lVar19 = lVar19 + 1;
          uVar3 = uVar3 + 1;
        } while (lVar19 != iVar4);
      }
      uVar6 = FUN_140114314("decrypt_temp",&DAT_14017040f);
      FUN_140116e20(puVar2,local_90,1,uVar6);
      FUN_140115998(uVar6);
      thunk_FUN_1400ddcd0(local_68);
      FUN_140115998(local_58);
      local_58 = (FILE *)FUN_140114314("decrypt_temp",&DAT_140170412);
      FUN_140113f48(local_58,0x40,0);
      local_49 = 0;
      local_88 = 0xffffffffffffffff;
      local_a8 = 0xffffffffffffffff;
      FUN_1400b909c(&local_4c,(longlong)&local_b8 + 1,&DAT_1401cca30,local_f0,0,&local_a8,&local_88,
                    &local_49,0);
      uVar13 = uStack_bc;
    }
    lVar7 = _malloc_base(uStack_e4);
    pFVar15 = local_58;
    if (lVar7 != 0) {
      if ((uVar13 & 2) != 0) {
        puVar17 = (undefined1 *)0x0;
        if ((uVar13 & 1) == 0) {
          puVar17 = local_97;
        }
        FUN_1400b4c30(lVar7,uStack_e4,local_58,puVar17,0);
LAB_1400ba66b:
        lVar19 = CONCAT44(uStack_c4,local_c8) + lVar7;
        FUN_1400b6786(lVar7,lVar19,CONCAT44(uStack_cc,uStack_d0) + lVar7,&local_e8,lVar19,pFVar15,
                      local_97,local_138,uVar16,(byte)uVar13 & 1,&local_938);
        FUN_140115998(pFVar15);
        thunk_FUN_1401212e0(lVar7);
        if (DAT_1401ccd30 == '\x01') {
          FUN_140117588("decrypt_temp");
        }
        SetCurrentDirectoryW(local_b48);
        return 0;
      }
      FUN_140113fe4(local_58,0,2);
      iVar4 = FUN_140114548(pFVar15);
      FUN_140113fe4(pFVar15,CONCAT44(uStack_d4,local_d8),0);
      iVar5 = FUN_140114548(pFVar15);
      lVar19 = _malloc_base(iVar4 - iVar5);
      if (lVar19 != 0) {
        puVar17 = (undefined1 *)0x0;
        if ((uVar13 & 1) == 0) {
          puVar17 = local_97;
        }
        FUN_1400b4c30(lVar19,iVar4 - iVar5,local_58,puVar17,0);
        uVar6 = FUN_1400d27a2(lVar19,0);
        lVar8 = _malloc_base(uVar6);
        if (lVar8 != 0) {
          FUN_1400d27a2(lVar19,lVar8);
          FUN_1400b1612(lVar8,lVar7);
          thunk_FUN_1401212e0(lVar19);
          thunk_FUN_1401212e0(lVar8);
          pFVar15 = local_58;
          goto LAB_1400ba66b;
        }
        thunk_FUN_1401212e0(lVar19);
      }
      thunk_FUN_1401212e0(lVar7);
    }
    if (local_58 == (FILE *)0x0) goto LAB_1400ba721;
  }
  FUN_140115998(local_58);
LAB_1400ba721:
  SetCurrentDirectoryW(local_b48);
  return local_5c;
}

