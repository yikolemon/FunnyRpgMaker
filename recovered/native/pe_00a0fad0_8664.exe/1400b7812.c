/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b7812 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b7812(undefined8 param_1,longlong *param_2,uint param_3,undefined1 param_4,char param_5,
             byte param_6,char *param_7,byte param_8,char param_9,undefined8 param_10,
             ushort param_11)

{
  WCHAR *pWVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ushort uVar9;
  longlong *plVar10;
  longlong *plVar11;
  DWORD DVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  sbyte sVar20;
  LPCWSTR pWVar21;
  longlong lVar22;
  ulonglong uVar23;
  char cVar24;
  byte bVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  FILE *pFVar29;
  byte bVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined8 local_1ce8;
  undefined1 local_1cdc [4096];
  char local_cdc;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined2 local_cb8;
  undefined6 uStack_cb6;
  undefined2 uStack_cb0;
  undefined4 uStack_cae;
  undefined2 uStack_caa;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  _WIN32_FIND_DATAW local_4d8;
  undefined1 local_288 [72];
  ulonglong local_240;
  HANDLE local_238;
  longlong local_230;
  undefined8 *local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined1 local_1ff [7];
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e8;
  FILETIME FStack_1e0;
  FILETIME local_1d8;
  longlong local_1d0;
  ulonglong local_1c0;
  longlong lStack_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined1 *local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  byte *local_110;
  ulonglong local_108;
  undefined8 *local_100;
  char *local_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c1;
  undefined8 *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  FILE *local_a0;
  uint local_94;
  undefined8 local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x1400b7828;
  local_90 = 0xfffffffffffffffe;
  local_94 = CONCAT31(local_94._1_3_,param_4);
  local_1ce8 = 0;
  local_cdc = param_9;
  local_a8 = param_2;
  if (0 < (int)param_3 && param_9 == '\x01') {
    lVar26 = 0;
    do {
      lVar22 = *local_a8;
      if (*(ulonglong *)(lVar22 + 0x18 + lVar26) < 8) {
        pWVar21 = (LPCWSTR)(lVar22 + lVar26);
      }
      else {
        pWVar21 = *(LPCWSTR *)(lVar22 + lVar26);
      }
      DVar12 = GetFileAttributesW(pWVar21);
      if (DVar12 != 0xffffffff) {
        if ((DVar12 & 0x10) == 0) {
          local_1ce8 = CONCAT44(local_1ce8._4_4_,(int)local_1ce8 + 1);
        }
        else {
          lVar22 = *local_a8;
          if (*(ulonglong *)(lVar22 + 0x18 + lVar26) < 8) {
            lVar22 = lVar22 + lVar26;
          }
          else {
            lVar22 = *(longlong *)(lVar22 + lVar26);
          }
          FUN_1400bafa6(lVar22,&local_cd8,1,1);
          local_1ce8 = CONCAT44(local_1ce8._4_4_,(int)local_1ce8 + (int)local_cd8);
          FUN_1400bba25(&local_cd8);
        }
      }
      lVar26 = lVar26 + 0x20;
    } while ((ulonglong)param_3 << 5 != lVar26);
  }
  if (param_8 == 0) {
    if (param_7 == (char *)0x0) {
      param_7 = s_DXBDXARC_1401ca09c;
    }
    uVar13 = FUN_1400d2196(0x7ffd,param_7);
    local_108 = 0x3f;
    if (uVar13 < 0x3f) {
      local_108 = (ulonglong)uVar13;
    }
    local_f8 = param_7;
    FUN_140135ff0(local_288,param_7,local_108);
    local_288[local_108] = 0;
    FUN_1400b464a(local_288,local_108,local_1ff);
  }
  else {
    local_f8 = param_7;
  }
  local_120 = _malloc_base(0x1000000);
  local_a0 = (FILE *)FUN_140114300(param_1,&DAT_140173fc6);
  uVar9 = param_11;
  bVar33 = (ushort)(param_11 - 0x14b) < 0x29d;
  DAT_1401ccd30 = 0x3f1 < param_11 || bVar33;
  DAT_1401ccd31 = param_11 == 200 || param_11 == 100;
  DAT_1401ccd32 = param_11;
  if (param_11 == 200) {
    local_4d8.dwFileAttributes = *(uint *)(local_f8 + local_108 + 1);
    local_cd8 = 0;
    uStack_cd0 = 0;
    local_cc8 = 0;
    uStack_cc0 = 0;
    local_cb8 = 0;
    uStack_cb6 = 0;
    uStack_cb0 = 0;
    uStack_cae = 0;
    uStack_caa = 0;
    local_ca8 = 0;
    uStack_ca0 = 0;
    cVar24 = '\0';
    uVar23 = 0;
    do {
      uVar31 = (ulonglong)((uint)uVar23 & 3);
      bVar30 = *(byte *)((longlong)local_4d8.cFileName + (uVar31 - 0x2c));
      bVar25 = (&DAT_140164f94)[uVar31] + cVar24 ^ (&DAT_140164f98)[uVar31] + bVar30;
      sVar20 = ((uVar23 & 1) != 0) * '\x03' + 3;
      *(byte *)((longlong)&local_cd8 + uVar23) =
           ~((bVar25 << sVar20 | bVar25 >> 8 - sVar20) ^ (&DAT_140164f9c)[uVar31] ^ bVar30);
      uVar23 = uVar23 + 1;
      cVar24 = cVar24 + '\x11';
    } while (uVar23 != 0x3f);
    _DAT_1401ca080 = local_cc8;
    uRam00000001401ca088 = uStack_cc0;
    _DAT_1401ca070 = local_cd8;
    uRam00000001401ca078 = uStack_cd0;
    DAT_1401ca090 = CONCAT26(uStack_cb0,uStack_cb6);
    DAT_1401ca098 = uStack_cae;
  }
  if (0x3f1 < param_11 || bVar33) {
    local_178 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    FUN_1401366a0(&DAT_1401cca30,0,0x300);
    local_110 = (byte *)(local_f8 + local_108 + 1);
    if (uVar9 < 0x3f2) {
      local_110 = (byte *)0x0;
    }
    local_1f8 = local_1f8 & 0xffffffffffffff00;
    local_cd8 = 0xffffffffffffffff;
    local_4d8.dwFileAttributes = 0xffffffff;
    local_4d8.ftCreationTime.dwLowDateTime = 0xffffffff;
    FUN_1400b909c(&param_11,local_178 + 1,&DAT_1401cca30);
  }
  else {
    local_110 = (byte *)0x0;
  }
  local_1a8._8_8_ = 0x40;
  local_1a8._0_8_ = 0xffffffff00085844;
  local_198._8_4_ = 0xffffffff;
  local_198._0_8_ = 0xffffffffffffffff;
  local_198._12_4_ = 0xffffffff;
  local_188._8_4_ = 0x3a4;
  local_188._0_8_ = 0xffffffffffffffff;
  uVar13 = (uint)param_11 * 0x10000;
  local_178 = ZEXT116(param_6);
  local_188._12_4_ = uVar13;
  if ((byte)((byte)local_94 ^ 1 | param_8) == 1) {
    local_188._12_4_ = uVar13 + param_8 + 2;
    if ((byte)local_94 != 0) {
      local_188._12_4_ = uVar13 | param_8;
    }
  }
  SetFileApisToANSI();
  local_160 = local_1ff;
  if (param_8 != 0) {
    local_160 = (undefined1 *)0x0;
  }
  FUN_1400b4baa(local_1a8,0x40,local_a0);
  local_d8 = _calloc_base(1,0x1000000);
  local_118 = 0xffffffff;
  if (((local_d8 != 0) &&
      (local_e0 = (undefined8 *)_calloc_base(1,0x1000000), local_e0 != (undefined8 *)0x0)) &&
     (local_100 = (undefined8 *)_calloc_base(1,0x1000000), local_100 != (undefined8 *)0x0)) {
    local_140 = 0;
    iVar14 = FUN_1400b43bc(&DAT_140174404,local_d8);
    local_138 = (ulonglong)iVar14;
    *local_e0 = 0;
    local_e0[1] = 0x10;
    local_e0[6] = 0;
    *(undefined1 (*) [16])(local_e0 + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_e0 + 2) = (undefined1  [16])0x0;
    local_e0[7] = 0xffffffffffffffff;
    local_e0[8] = 0;
    local_220 = 0;
    local_218 = 0xffffffffffffffff;
    local_210 = (longlong)(int)param_3;
    local_208 = 0x48;
    *local_100 = 0;
    local_100[1] = 0xffffffffffffffff;
    local_100[2] = local_210;
    local_100[3] = 0x48;
    dVar8 = DAT_140164ee0;
    dVar7 = _UNK_140140ec8;
    dVar6 = _DAT_140140ec0;
    uVar5 = DAT_140140eb0._4_4_;
    uVar4 = (undefined4)DAT_140140eb0;
    local_130 = 0x20;
    local_128 = local_210 * 0x48 + 0x48;
    if (0 < (int)param_3) {
      local_c0 = &local_168;
      if (param_8 != 0) {
        local_c0 = (undefined8 *)0x0;
      }
      local_e8 = (ulonglong)param_6 << 0xb;
      local_150 = (ulonglong)param_6 * 0x400;
      local_158 = (ulonglong)((uint)param_6 << 0xd | 0x220);
      local_148 = (ulonglong)param_6 * -0x400;
      local_240 = (ulonglong)param_3;
      local_228 = local_e0 + 9;
      uVar23 = 0;
      do {
        lVar26 = *local_a8;
        lVar22 = uVar23 * 0x20;
        if (*(ulonglong *)(lVar26 + 0x18 + lVar22) < 8) {
          pWVar21 = (LPCWSTR)(lVar26 + lVar22);
        }
        else {
          pWVar21 = *(LPCWSTR *)(lVar26 + lVar22);
        }
        local_b8 = uVar23;
        DVar12 = GetFileAttributesW(pWVar21);
        if (DVar12 != 0xffffffff) {
          if ((DVar12 & 0x10) == 0) {
            lVar26 = *local_a8;
            if (*(ulonglong *)(lVar26 + 0x18 + lVar22) < 8) {
              pWVar21 = (LPCWSTR)(lVar26 + lVar22);
            }
            else {
              pWVar21 = *(LPCWSTR *)(lVar26 + lVar22);
            }
            local_238 = FindFirstFileW(pWVar21,&local_4d8);
            if (local_238 != (HANDLE)0xffffffffffffffff) {
              if (local_cdc == '\x01') {
                FUN_14011cf10(local_1cdc,local_4d8.cFileName);
                local_1ce8 = CONCAT44(local_1ce8._4_4_ + 1,(int)local_1ce8);
                FUN_1400b5cca(&local_1ce8,0);
              }
              uVar23 = local_138;
              lVar26 = local_140;
              local_1f8 = local_138;
              local_1e8 = CONCAT44(local_4d8.ftCreationTime.dwHighDateTime,
                                   local_4d8.ftCreationTime.dwLowDateTime);
              FStack_1e0 = local_4d8.ftLastAccessTime;
              local_1d8 = local_4d8.ftLastWriteTime;
              uStack_1f0 = (ulonglong)local_4d8.dwFileAttributes;
              local_1d0 = local_140;
              uVar31 = CONCAT44(local_4d8.nFileSizeHigh,local_4d8.nFileSizeLow);
              local_1c0 = 0xffffffffffffffff;
              lStack_1b8 = -1;
              iVar14 = FUN_1400b43bc(local_4d8.cFileName,local_d8 + local_138);
              local_138 = (longlong)iVar14 + uVar23;
              if (param_8 == 0) {
                uVar17 = FUN_1400b4554(local_188._8_4_,local_288,local_108);
                FUN_1400b464a(&local_cd8,uVar17,&local_168);
              }
              if (uVar31 != 0) {
                lVar28 = *local_a8;
                local_230 = lVar26;
                if (*(ulonglong *)(lVar28 + 0x18 + lVar22) < 8) {
                  lVar28 = lVar28 + lVar22;
                }
                else {
                  lVar28 = *(longlong *)(lVar28 + lVar22);
                }
                uVar17 = FUN_140114300(lVar28,&DAT_140173b08);
                local_b0 = 0;
                FUN_140113fe4(uVar17,0,2);
                uVar23 = FUN_140114548(uVar17);
                local_d0 = uVar17;
                FUN_140113fe4(uVar17,0,0);
                uVar13 = FUN_14011cf50(local_4d8.cFileName);
                bVar30 = 0;
                if (4 < uVar13) {
                  pWVar1 = local_4d8.cFileName + (uVar13 - 3);
                  uVar17 = FUN_1400afa28(pWVar1,&DAT_140172d76);
                  if ((int)uVar17 == 0) {
                    local_b0 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
                    bVar30 = 1;
                  }
                  else {
                    iVar14 = FUN_1400afa28(pWVar1,&DAT_14017331c);
                    if (((((iVar14 == 0) ||
                          (iVar14 = FUN_1400afa28(pWVar1,&DAT_140173326), iVar14 == 0)) ||
                         ((iVar14 = FUN_1400afa28(pWVar1,&DAT_140173312), iVar14 == 0 ||
                          ((iVar14 = FUN_1400afa28(pWVar1,&DAT_140173c10), iVar14 == 0 ||
                           (iVar14 = FUN_1400afa28(pWVar1,&DAT_140173c08), iVar14 == 0)))))) ||
                        (iVar14 = FUN_1400afa28(pWVar1,&DAT_140173b5a), iVar14 == 0)) ||
                       (((((iVar14 = FUN_1400afa28(pWVar1,&DAT_1401733cc), iVar14 == 0 ||
                           (iVar14 = FUN_1400afa28(pWVar1,&DAT_140172d6c), iVar14 == 0)) ||
                          (iVar14 = FUN_1400afa28(pWVar1,&DAT_140172fee), iVar14 == 0)) ||
                         ((iVar14 = FUN_1400afa28(pWVar1,&DAT_140172d64), iVar14 == 0 ||
                          (iVar14 = FUN_1400afa28(pWVar1,&DAT_1401733ea), iVar14 == 0)))) ||
                        ((iVar14 = FUN_1400afa28(pWVar1,&DAT_140173b52), iVar14 == 0 ||
                         ((iVar14 = FUN_1400afa28(pWVar1,&DAT_140173102), iVar14 == 0 ||
                          (iVar14 = FUN_1400afa28(local_4d8.cFileName +
                                                  ((ulonglong)(uVar13 - 3) - 1),L"jpeg"),
                          iVar14 == 0)))))))) {
                      bVar30 = 1;
                    }
                    else {
                      bVar30 = 0;
                    }
                    uVar17 = FUN_1400afa28(pWVar1,&DAT_140173b52);
                    if ((int)uVar17 == 0) {
                      local_b0 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
                    }
                    else {
                      uVar17 = FUN_1400afa28(pWVar1,&DAT_140173102);
                      local_b0 = CONCAT71((int7)((ulonglong)uVar17 >> 8),(int)uVar17 == 0);
                    }
                  }
                }
                if (param_5 != '\0') {
                  bVar30 = 1;
                }
                if (param_6 == 0) {
                  bVar30 = 0;
                }
                if (((byte)local_94 == '\0') || (0x9fffff < uVar31 && (char)local_b0 == '\0')) {
LAB_1400b857d:
                  pFVar29 = local_a0;
                  uVar32 = local_d0;
                  uVar17 = local_120;
                  if (((byte)local_94 & bVar30) != 0) {
                    lVar26 = _calloc_base(1,uVar23 + 0x20);
                    FUN_1400b2242(lVar26,uVar23,local_d0);
                    if ((param_6 == 0xff) ||
                       (lVar22 = uVar23 - local_e8, uVar23 < local_e8 || lVar22 == 0)) {
                      lVar22 = _calloc_base(1,uVar23 * 2 + 0x220);
                      lStack_1b8 = FUN_1400d2220(lVar26,uVar23,lVar22);
                      uVar27 = lStack_1b8 + 3U & 0xfffffffffffffffc;
                      local_f0 = lVar22;
                      FUN_1400b4baa(lVar22,uVar27,local_a0);
                    }
                    else {
                      lVar18 = _calloc_base(1,local_158);
                      lVar19 = local_150;
                      FUN_140135ff0(lVar18,lVar26,local_150);
                      FUN_140135ff0(lVar18 + lVar19,uVar23 + lVar26 + local_148,lVar19);
                      lVar28 = lVar18 + local_e8;
                      local_f0 = lVar18;
                      lVar18 = FUN_1400d2220(lVar18,local_e8,lVar28);
                      pFVar29 = local_a0;
                      lStack_1b8 = lVar18;
                      FUN_1400b4baa(lVar28,lVar18,local_a0,local_c0);
                      uVar27 = lVar22 + lVar18 + 3U & 0xfffffffffffffffc;
                      FUN_1400b4baa(lVar26 + lVar19,uVar27 - lVar18,pFVar29);
                    }
                    thunk_FUN_1401212e0(lVar26);
                    goto code_r0x0001400b877a;
                  }
                  uVar27 = 0;
                  if (uVar23 != 0) {
                    do {
                      local_b0 = uVar31;
                      uVar31 = uVar23 - uVar27;
                      if (0xffffff < uVar31) {
                        uVar31 = 0x1000000;
                      }
                      uVar31 = (ulonglong)((int)uVar31 + 3U & 0x3fffffc);
                      FUN_1401366a0(uVar17,0,uVar31);
                      FUN_1400b4c30(uVar17,uVar31,uVar32);
                      FUN_1400b21f0(uVar17,uVar31,pFVar29);
                      uVar27 = uVar31 + uVar27;
                      uVar31 = local_b0;
                    } while (uVar27 < uVar23);
                  }
                }
                else {
                  if (4 < uVar13 && (char)local_b0 == '\0') {
                    pWVar1 = local_4d8.cFileName + (uVar13 - 3);
                    iVar14 = FUN_1400afa28(pWVar1,&DAT_140172d76);
                    if (((((iVar14 == 0) ||
                          (iVar14 = FUN_1400afa28(pWVar1,&DAT_14017331c), iVar14 == 0)) ||
                         (iVar14 = FUN_1400afa28(pWVar1,&DAT_140173326), iVar14 == 0)) ||
                        (((iVar14 = FUN_1400afa28(pWVar1,&DAT_140173312), iVar14 == 0 ||
                          (iVar14 = FUN_1400afa28(pWVar1,&DAT_140173c10), iVar14 == 0)) ||
                         ((iVar14 = FUN_1400afa28(pWVar1,&DAT_140173c08), iVar14 == 0 ||
                          ((iVar14 = FUN_1400afa28(pWVar1,&DAT_1401733cc), iVar14 == 0 ||
                           (iVar14 = FUN_1400afa28(pWVar1,&DAT_140172d6c), iVar14 == 0)))))))) ||
                       ((iVar14 = FUN_1400afa28(pWVar1,&DAT_140172fee), iVar14 == 0 ||
                        ((iVar14 = FUN_1400afa28(pWVar1,&DAT_140172d64), iVar14 == 0 ||
                         (iVar14 = FUN_1400afa28(local_4d8.cFileName + ((ulonglong)(uVar13 - 3) - 1)
                                                 ,L"jpeg"), iVar14 == 0)))))) goto LAB_1400b857d;
                  }
                  lVar26 = _calloc_base(1,uVar23 * 3 + 0x40);
                  FUN_1400b2242(lVar26,uVar23,local_d0);
                  if (local_cdc == '\x01') {
                    FUN_1400b5cca(&local_1ce8,1);
                    cVar24 = local_cdc;
                  }
                  else {
                    cVar24 = '\0';
                  }
                  lVar22 = lVar26 + uVar23;
                  local_f0 = lVar26;
                  uVar13 = FUN_1400b5d94(lVar26,uVar23 & 0xffffffff,lVar22,cVar24);
                  uVar27 = (ulonglong)uVar13;
                  if (((char)local_b0 == '\0') &&
                     (auVar34._8_4_ = (int)(uVar23 >> 0x20), auVar34._0_8_ = uVar23,
                     auVar34._12_4_ = uVar5,
                     dVar8 < (double)uVar27 /
                             ((auVar34._8_8_ - dVar7) +
                             ((double)CONCAT44(uVar4,(int)uVar23) - dVar6)))) {
                    FUN_140113fe4(local_d0,0,0);
                    thunk_FUN_1401212e0(local_f0);
                    goto LAB_1400b857d;
                  }
                  local_1c0 = uVar27;
                  if (bVar30 == 0) {
                    uVar27 = (ulonglong)(uVar13 + 3 & 0xfffffffc);
                    FUN_1400b4baa(lVar22,uVar27,local_a0);
                  }
                  else {
                    if ((param_6 == 0xff) || (uVar13 <= (uint)local_e8)) {
                      lVar26 = _calloc_base(1,uVar13 * 2 + 0x220);
                      lStack_1b8 = FUN_1400d2220(lVar22,uVar27,lVar26);
                      uVar27 = lStack_1b8 + 3U & 0xfffffffffffffffc;
                      FUN_1400b4baa(lVar26,uVar27,local_a0);
                    }
                    else {
                      lVar26 = _calloc_base(1,local_158);
                      lVar28 = local_150;
                      FUN_140135ff0(lVar26,lVar22,local_150);
                      FUN_140135ff0(lVar26 + lVar28,lVar22 + uVar27 + local_148,lVar28);
                      uVar23 = local_e8;
                      lVar19 = FUN_1400d2220(lVar26,local_e8,lVar26 + local_e8);
                      lStack_1b8 = lVar19;
                      FUN_1400b4baa(lVar26 + uVar23,lVar19,local_a0,local_c0);
                      uVar27 = (uVar27 - uVar23) + lVar19 + 3 & 0xfffffffffffffffc;
                      FUN_1400b4baa(lVar22 + lVar28,uVar27 - lVar19,local_a0);
                    }
                    thunk_FUN_1401212e0(lVar26);
                  }
code_r0x0001400b877a:
                  thunk_FUN_1401212e0(local_f0);
                  uVar32 = local_d0;
                }
                FUN_140115998(uVar32);
                local_140 = uVar27 + local_230;
              }
              FUN_140135ff0(local_228 + local_b8 * 9,&local_1f8,0x48);
              FindClose(local_238);
            }
          }
          else {
            lVar26 = *local_a8;
            if (*(ulonglong *)(lVar26 + 0x18 + lVar22) < 8) {
              lVar26 = lVar26 + lVar22;
            }
            else {
              lVar26 = *(longlong *)(lVar26 + lVar22);
            }
            FUN_1400b4ca6(local_188._8_4_,lVar26,local_d8,local_100);
          }
        }
        uVar23 = local_b8 + 1;
      } while (uVar23 != local_240);
    }
    lVar28 = local_128;
    lVar22 = local_130;
    uVar31 = local_138;
    lVar26 = local_128 + local_138;
    uVar23 = lVar26 + local_130;
    lVar19 = _malloc_base(uVar23);
    if (lVar19 != 0) {
      FUN_140135ff0(lVar19,local_d8,uVar31);
      FUN_140135ff0(lVar19 + uVar31,local_e0,lVar28);
      FUN_140135ff0(lVar19 + uVar31 + lVar28,local_100,lVar22);
      pFVar29 = local_a0;
      if ((byte)local_94 == '\0') {
        FUN_1400b4baa(lVar19,uVar23,local_a0,local_160);
      }
      else {
        lVar22 = _malloc_base(uVar23 * 4 + 0x240);
        if (lVar22 == 0) {
          return local_118;
        }
        iVar14 = FUN_1400b5d94(lVar19,uVar23 & 0xffffffff,lVar22,0);
        lVar28 = lVar22 + uVar23 * 2 + 0x20;
        uVar17 = FUN_1400d2220(lVar22,(longlong)iVar14,lVar28);
        pFVar29 = local_a0;
        FUN_1400b4baa(lVar28,uVar17,local_a0,local_160);
        thunk_FUN_1401212e0(lVar22);
      }
      thunk_FUN_1401212e0(lVar19);
      local_1a8._4_4_ = (int)uVar23;
      local_1a8._0_4_ = 0x85844;
      local_1a8._8_8_ = 0x40;
      local_198._8_8_ = uVar31;
      local_198._0_8_ = local_140 + 0x40;
      local_188._0_8_ = lVar26;
      local_118 = 0;
      FUN_140113fe4(pFVar29,0,0);
      FUN_1400b21f0(local_1a8,0x40,pFVar29);
      if (DAT_1401ccd30 == '\x01') {
        FUN_1401366a0(&local_4d8,0,0xc0);
        FUN_140113f48(pFVar29,0,2);
        uVar13 = FUN_1401144b0(pFVar29);
        FUN_140113f48(pFVar29,0,0);
        local_b8 = (ulonglong)(int)uVar13;
        local_a8 = (longlong *)thunk_FUN_1400d3680();
        FUN_1401366a0(local_a8,0,local_b8);
        plVar10 = local_a8;
        fread(local_a8,1,local_b8,local_a0);
        FUN_1400b982a(&local_4d8,local_178 + 1,local_110,&param_11);
        if ((int)uVar13 < 0x440) {
          return 0;
        }
        uVar15 = uVar13 - 0x40;
        local_94 = uVar15;
        uVar23 = 0x400;
        if (0x3fb < param_11 || (ushort)(param_11 - 0x15e) < 0x28a) {
          if (param_11 < 0x3fc) {
            puVar3 = &stack0x00001bdd;
            iVar14 = (uint)local_178[5] * (uint)local_178[3];
          }
          else {
            puVar3 = &stack0x00001bdc;
            iVar14 = (uint)local_178[5] * (uint)local_178[3] + (uint)local_110[1] * (uint)*local_110
            ;
          }
          uVar16 = iVar14 + (uint)(byte)puVar3[-0x1d48] +
                   (uint)(iVar14 + (uint)(byte)puVar3[-0x1d48] == 0);
          _DAT_1401cc840 = uVar16 >> 8 ^ uVar16 ^ uVar16 * 0x800;
          _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
          _DAT_1401cc840 = _DAT_1401cc840 << 0xb ^ _DAT_1401cc840;
          _DAT_1401cc840 = _DAT_1401cc840 >> 0x13 ^ _DAT_1401cc840;
          _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
          if (_DAT_1401cc840 % 500 + 800 <= uVar13) {
            _DAT_1401cc840 = _DAT_1401cc840 << 0xb ^ _DAT_1401cc840;
            _DAT_1401cc840 = _DAT_1401cc840 >> 0x13 ^ _DAT_1401cc840;
            _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
          }
          _DAT_1401cc840 = _DAT_1401cc840 << 0xb ^ _DAT_1401cc840;
          _DAT_1401cc840 = _DAT_1401cc840 >> 0x13 ^ _DAT_1401cc840;
          _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
          if (_DAT_1401cc840 % 500 + 800 <= uVar15) {
            _DAT_1401cc840 = _DAT_1401cc840 << 0xb ^ _DAT_1401cc840;
            _DAT_1401cc840 = _DAT_1401cc840 >> 0x13 ^ _DAT_1401cc840;
            _DAT_1401cc840 = _DAT_1401cc840 << 7 ^ _DAT_1401cc840;
            uVar15 = _DAT_1401cc840 % 500 + 800;
          }
          uVar23 = (ulonglong)uVar15;
        }
        uVar15 = 0x10;
        uVar31 = 0;
        do {
          if (uVar15 == 0x10) {
            local_1f8._0_2_ = local_4d8.cFileName[0x42];
            local_1f8._2_2_ = local_4d8.cFileName[0x43];
            local_1f8._4_2_ = local_4d8.cFileName[0x44];
            local_1f8._6_2_ = local_4d8.cFileName[0x45];
            uStack_1f0._0_2_ = local_4d8.cFileName[0x46];
            uStack_1f0._2_2_ = local_4d8.cFileName[0x47];
            uStack_1f0._4_2_ = local_4d8.cFileName[0x48];
            uStack_1f0._6_2_ = local_4d8.cFileName[0x49];
            FUN_1400859c5(&local_1f8,&local_4d8);
            uVar15 = 0xf;
            do {
              uVar27 = (ulonglong)uVar15;
              cVar24 = *(char *)((longlong)local_4d8.cFileName + uVar27 + 0x84);
              if (cVar24 != -1) {
                *(char *)((longlong)local_4d8.cFileName + uVar27 + 0x84) = cVar24 + '\x01';
                uVar15 = 0;
                goto LAB_1400b8d9b;
              }
              *(undefined1 *)((longlong)local_4d8.cFileName + uVar27 + 0x84) = 0;
              bVar33 = uVar15 != 0;
              uVar15 = uVar15 - 1;
            } while (bVar33);
            uVar15 = 0;
          }
LAB_1400b8d9b:
          plVar11 = local_a8;
          pbVar2 = (byte *)((longlong)plVar10 + uVar31 + 0x40);
          *pbVar2 = *pbVar2 ^ *(byte *)((longlong)&local_1f8 + (ulonglong)uVar15);
          uVar31 = uVar31 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar31 != uVar23);
        uVar17 = local_198._0_8_;
        iVar14 = uVar13 - local_198._0_4_;
        if (iVar14 != 0) {
          uVar13 = 0x10;
          lVar26 = 0;
          do {
            if (uVar13 == 0x10) {
              local_1f8._0_2_ = local_4d8.cFileName[0x42];
              local_1f8._2_2_ = local_4d8.cFileName[0x43];
              local_1f8._4_2_ = local_4d8.cFileName[0x44];
              local_1f8._6_2_ = local_4d8.cFileName[0x45];
              uStack_1f0._0_2_ = local_4d8.cFileName[0x46];
              uStack_1f0._2_2_ = local_4d8.cFileName[0x47];
              uStack_1f0._4_2_ = local_4d8.cFileName[0x48];
              uStack_1f0._6_2_ = local_4d8.cFileName[0x49];
              FUN_1400859c5(&local_1f8,&local_4d8);
              uVar13 = 0xf;
              do {
                uVar23 = (ulonglong)uVar13;
                cVar24 = *(char *)((longlong)local_4d8.cFileName + uVar23 + 0x84);
                if (cVar24 != -1) {
                  *(char *)((longlong)local_4d8.cFileName + uVar23 + 0x84) = cVar24 + '\x01';
                  uVar13 = 0;
                  goto LAB_1400b8e34;
                }
                *(undefined1 *)((longlong)local_4d8.cFileName + uVar23 + 0x84) = 0;
                bVar33 = uVar13 != 0;
                uVar13 = uVar13 - 1;
              } while (bVar33);
              uVar13 = 0;
            }
LAB_1400b8e34:
            pbVar2 = (byte *)((longlong)plVar11 + lVar26 + uVar17);
            *pbVar2 = *pbVar2 ^ *(byte *)((longlong)&local_1f8 + (ulonglong)uVar13);
            lVar26 = lVar26 + 1;
            uVar13 = uVar13 + 1;
          } while (lVar26 != iVar14);
        }
        plVar10 = local_a8;
        local_c1 = 1;
        local_1f8 = (ulonglong)local_94;
        local_168 = 0x40;
        FUN_1400b909c(&param_11,local_178 + 1,&DAT_1401cca30,0);
        FUN_1400b9cee(plVar10,local_178 + 1,param_11);
        pFVar29 = local_a0;
        FUN_140113f48(local_a0,0,0);
        FUN_1400b21f0(plVar10,local_b8,pFVar29);
        thunk_FUN_1400ddcd0(local_a8);
        pFVar29 = local_a0;
      }
      FUN_140115998(pFVar29);
      thunk_FUN_1401212e0(local_d8);
      thunk_FUN_1401212e0(local_e0);
      thunk_FUN_1401212e0(local_100);
      thunk_FUN_1401212e0(local_120);
      FUN_1400b7580();
    }
  }
  return local_118;
}

