/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d5c62 */

/* WARNING: Removing unreachable block (ram,0x0001800d60e5) */
/* WARNING: Removing unreachable block (ram,0x0001800d6a89) */
/* WARNING: Removing unreachable block (ram,0x0001800d7358) */

void FUN_1800d5c62(void)

{
  int *piVar1;
  int *piVar2;
  undefined8 ****ppppuVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 ****ppppuVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  longlong lVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  longlong *plVar21;
  longlong *plVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  undefined8 in_stack_fffffffffffffe48;
  undefined *puVar30;
  float local_18c [2];
  float local_184 [2];
  undefined4 local_17c;
  undefined8 local_178;
  int *piStack_170;
  int *local_168;
  ulonglong uStack_160;
  char local_150;
  undefined4 *local_138;
  int local_12c;
  undefined8 local_128;
  char local_119;
  undefined8 local_118;
  undefined *local_110;
  undefined8 ****local_108;
  int *piStack_100;
  int *local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  
  local_e8 = 0xfffffffffffffffe;
  cVar7 = FUN_180153cc1(&DAT_18035f754,0,0);
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  if (cVar7 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180418410) && (FUN_18023d500(&DAT_180418410), DAT_180418410 == -1)) {
      FUN_18023d710(&LAB_1800da0eb);
      _Init_thread_footer(&DAT_180418410);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_1804184b0) && (FUN_18023d500(&DAT_1804184b0), DAT_1804184b0 == -1)) {
      local_110 = (undefined *)0x0;
      do {
        FUN_18014f566(&DAT_180418420 + (longlong)local_110);
        local_110 = local_110 + 0x30;
      } while (local_110 != (undefined *)0x90);
      FUN_18023d710(FUN_1800da177);
      _Init_thread_footer(&DAT_1804184b0);
    }
    FUN_180044980(&DAT_180402770);
    lVar18 = 0;
    fVar29 = 0.0;
    while( true ) {
      uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
      if (lVar18 == 0x18) break;
      in_stack_fffffffffffffe48 = CONCAT44(uVar25,0xbf800000);
      FUN_1801023ca(&local_178,*(undefined8 *)((longlong)&PTR_DAT_180402890 + lVar18),0,0,
                    in_stack_fffffffffffffe48);
      fVar26 = (float)local_178;
      if ((float)local_178 <= fVar29) {
        fVar26 = fVar29;
      }
      lVar18 = lVar18 + 8;
      fVar29 = fVar26;
    }
    fVar23 = (float)FUN_180116c08();
    lVar18 = FUN_18010128e();
    fVar26 = *(float *)(lVar18 + 0x4c);
    fVar24 = (float)FUN_18015aacb(DAT_1802dbb34);
    fVar29 = fVar26 * DAT_1802dbb3c + fVar29 + fVar23;
    if (fVar29 <= fVar24) {
      fVar29 = fVar24;
    }
    FUN_1800ffdb5(fVar29);
    uVar13 = CONCAT44(uVar25,0xffffffff);
    FUN_18013995e("##combo",&DAT_180418408,&PTR_DAT_180402890,3,uVar13);
    uVar25 = (undefined4)((ulonglong)uVar13 >> 0x20);
    lVar18 = (longlong)DAT_180418408;
    local_110 = (&PTR_DAT_1804028d0)[lVar18];
    FUN_18013799d();
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_18013309a(&DAT_18035f3a4,0);
    FUN_180119893(0,DAT_1802bb8e0);
    cVar7 = FUN_180159cb6(&DAT_18035f533,&DAT_18041840c,DAT_1802dbb2c,DAT_1802dbb30);
    if (cVar7 != '\0') {
      local_110[0x98] = 1;
    }
    FUN_180119893(0,DAT_1802bb8e0);
    cVar7 = FUN_180159cb6(&DAT_18035f641,&DAT_18041840d,DAT_1802dbb2c,DAT_1802dbb30);
    if (cVar7 != '\0') {
      local_110[0x98] = 1;
    }
    FUN_18013799d();
    FUN_18013309a(&DAT_18035f3ef,0);
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180111069(&local_178);
    fVar24 = (float)FUN_180116c08();
    FUN_1801023ca(&local_108,&DAT_18035f5dd,0,0,CONCAT44(uVar25,0xbf800000));
    fVar23 = local_108._0_4_;
    lVar11 = FUN_18010128e();
    fVar29 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_18010128e();
    fVar26 = *(float *)(lVar11 + 100);
    lVar11 = FUN_18010128e();
    FUN_1800ffdb5((((((float)local_178 - fVar24) - fVar23) - fVar29) - fVar26) -
                  *(float *)(lVar11 + 0x5c));
    uVar14 = 0;
    cVar7 = FUN_180164b8f("##search",&DAT_18035f050,&DAT_180402870,0,0,0);
    if (cVar7 != '\0') {
      local_110[0x98] = 1;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_1804184b4) && (FUN_18023d500(&DAT_1804184b4), DAT_1804184b4 == -1)) {
      FUN_18023d710(&LAB_1800da273);
      _Init_thread_footer(&DAT_1804184b4);
    }
    if ((DAT_1804028f8 != 0) && (cVar7 = FUN_18010759c(0), cVar7 != '\0')) {
      puVar12 = DAT_1804028e8;
      if (DAT_180402900 < 0x10) {
        puVar12 = &DAT_1804028e8;
      }
      FUN_180107bf7("Error: %s",puVar12);
    }
    FUN_180119893(0,DAT_1802bb8e0);
    cVar7 = FUN_180159cb6(&DAT_18035f5dd,&DAT_180418414,DAT_1802dbb2c,DAT_1802dbb30);
    local_138 = (undefined4 *)(&DAT_180418420 + lVar18 * 0x30);
    if (cVar7 == '\0') {
      if (local_110[0x98] == '\x01') goto code_r0x0001800d6070;
    }
    else {
      local_110[0x98] = 1;
code_r0x0001800d6070:
      DAT_1804028f8 = 0;
      puVar12 = DAT_1804028e8;
      if (DAT_180402900 < 0x10) {
        puVar12 = &DAT_1804028e8;
      }
      *(undefined1 *)puVar12 = 0;
      local_150 = '\0';
      local_17c = 0;
      if ((DAT_180402880 != 0) && (DAT_180418414 != '\0')) {
        FUN_1800da280(&local_178,&DAT_180402870);
      }
      local_17c = 0;
      local_108 = (undefined8 *****)0x0;
      piStack_100 = (int *)0x0;
      local_f8 = (int *)0x0;
      plVar22 = *(longlong **)(local_110 + 8);
      plVar21 = plVar22;
code_r0x0001800d610a:
      plVar21 = (longlong *)*plVar21;
      if (plVar21 != plVar22) {
        if (((DAT_18041840c != '\x01') || (plVar21[6] != 0)) &&
           ((DAT_18041840d != '\x01' || (plVar21[0xc] != 0)))) {
          if (DAT_180402880 != 0) {
            if (DAT_180418414 == '\0') {
              lVar11 = FUN_1800da2be(plVar21 + 4,&DAT_180402870,0);
              if ((lVar11 == -1) &&
                 (lVar11 = FUN_1800da2be(plVar21 + 8,&DAT_180402870,0), lVar11 == -1))
              goto code_r0x0001800d610a;
            }
            else {
              cVar7 = FUN_1800da339(plVar21 + 4,&local_178);
              if ((cVar7 == '\0') && (cVar7 = FUN_1800da339(plVar21 + 8,&local_178), cVar7 == '\0'))
              goto code_r0x0001800d610a;
            }
          }
          if (piStack_100 == local_f8) {
            FUN_180052bde(&local_108);
          }
          else {
            *(longlong *)piStack_100 = plVar21[2];
            piStack_100 = piStack_100 + 2;
          }
        }
        goto code_r0x0001800d610a;
      }
      FUN_1800db254(local_108,piStack_100,(longlong)piStack_100 - (longlong)local_108 >> 3);
      piVar2 = piStack_100;
      ppppuVar3 = local_108;
      pppppuVar17 = *(undefined8 ******)(local_110 + 0x80);
      piVar1 = *(int **)(local_110 + 0x88);
      if (((longlong)piStack_100 - (longlong)local_108 != (longlong)piVar1 - (longlong)pppppuVar17)
         || (iVar8 = memcmp(local_108,pppppuVar17,(longlong)piStack_100 - (longlong)local_108),
            iVar8 != 0)) {
        if ((undefined8 *****)(local_110 + 0x80) != &local_108) {
          *(undefined8 *****)(local_110 + 0x80) = ppppuVar3;
          *(int **)(local_110 + 0x88) = piVar2;
          piVar2 = *(int **)(local_110 + 0x90);
          *(int **)(local_110 + 0x90) = local_f8;
          local_108 = pppppuVar17;
          piStack_100 = piVar1;
          local_f8 = piVar2;
        }
        FUN_18014f5d6(local_138);
      }
      local_110[0x98] = 0;
      FUN_180004cea(&local_108);
      if (local_150 == '\x01') {
        FUN_1800185bc(&local_178);
      }
    }
    local_178 = (undefined8 *****)0x0;
    uVar14 = uVar14 & 0xffffffff00000000;
    cVar7 = FUN_180164c18(&DAT_18035f74e,4,0x2000747,&local_178,uVar14);
    uVar25 = (undefined4)(uVar14 >> 0x20);
    if (cVar7 != '\0') {
      FUN_18016a395(0,1);
      uVar25 = FUN_18015aacb(DAT_1802dbb40);
      FUN_18016a158(&DAT_18035f594,0x10,uVar25,0);
      uVar25 = FUN_18015aacb(DAT_1802dbb44);
      FUN_18016a158(&DAT_18036cc91,0x10,uVar25,0);
      FUN_18016a158("Name",8,0,0);
      uVar25 = FUN_18015aacb(DAT_1802dbb48);
      FUN_18016a158("Count",0x10,uVar25,0);
      FUN_18016b3e4();
      uVar13 = FUN_18014e6af(0,*local_138,
                             (ulonglong)
                             (*(longlong *)(local_110 + 0x88) - *(longlong *)(local_110 + 0x80)) >>
                             3);
      FUN_18014f7d4(local_138,uVar13);
      FUN_1801003f2(&local_178);
      fVar26 = (float)FUN_180116c08();
      lVar11 = FUN_18010128e();
      fVar29 = *(float *)(lVar11 + 0x50);
      lVar11 = FUN_18010128e();
      FUN_1801004b6(&local_178,
                    (ulonglong)(*(longlong *)(local_110 + 0x88) - *(longlong *)(local_110 + 0x80))
                    >> 3,*(float *)(lVar11 + 0x70) + *(float *)(lVar11 + 0x70) +
                         fVar29 + fVar29 + fVar26);
      uVar9 = DAT_1802dbb30;
      uVar4 = DAT_1802bb8d8;
      puVar30 = local_110 + 0x40;
      while( true ) {
        cVar7 = FUN_180100a32(&local_178);
        uVar25 = (undefined4)(uVar14 >> 0x20);
        if (cVar7 == '\0') break;
        for (iVar8 = (int)(float)local_178; iVar8 < local_178._4_4_; iVar8 = iVar8 + 1) {
          FUN_1800db800(local_110,&local_108,(longlong)iVar8 * 8 + *(longlong *)(local_110 + 0x80));
          ppppuVar3 = local_108;
          FUN_18016a67b(0,0);
          FUN_18011810d(iVar8);
          FUN_18016a960(0);
          FUN_18014f370((longlong)iVar8);
          uVar27 = FUN_18011a456();
          local_108 = (undefined8 ****)((ulonglong)uVar27 << 0x20);
          uVar25 = FUN_18014f686(local_138,iVar8);
          FUN_1801391f6("##multiselectable",uVar25,0x12,&local_108);
          cVar7 = FUN_18010759c(0);
          if ((cVar7 != '\0') && ((undefined8 ****)ppppuVar3[10] != (undefined8 ****)0x0)) {
            if (ppppuVar3[0xb] < (undefined8 ****)0x10) {
              pppppuVar17 = (undefined8 *****)(ppppuVar3 + 8);
            }
            else {
              pppppuVar17 = (undefined8 *****)ppppuVar3[8];
            }
            FUN_180107bf7("%s",pppppuVar17);
          }
          FUN_180119893(0);
          pppppuVar17 = (undefined8 *****)(ppppuVar3 + 3);
          FUN_1800dbb7b(pppppuVar17);
          FUN_1800db986(puVar30,&local_108,pppppuVar17);
          local_184[0] = (float)CONCAT31(local_184[0]._1_3_,piStack_100 != (int *)0x0);
          cVar7 = FUN_180159cb6("##freeze",local_184,uVar4,uVar9);
          if (cVar7 != '\0') {
            if (local_184[0]._0_1_ == '\x01') {
              FUN_1800da370(puVar30,&local_108,pppppuVar17);
              cVar7 = FUN_18014f686(local_138,iVar8);
              if (cVar7 != '\0') {
                local_128 = (undefined8 ****)0x0;
                local_118 = (undefined8 *****)((ulonglong)local_118 & 0xffffffff00000000);
                while (cVar7 = FUN_18014f6a0(local_138,&local_128,&local_118), cVar7 != '\0') {
                  FUN_1800da370(puVar30,&local_108,
                                ((ulonglong)local_118 & 0xffffffff) * 8 +
                                *(longlong *)(local_110 + 0x80));
                }
              }
            }
            else {
              FUN_1800dc352(puVar30,pppppuVar17);
              cVar7 = FUN_18014f686(local_138,iVar8);
              if (cVar7 != '\0') {
                local_108 = (undefined8 *****)0x0;
                local_128 = (undefined8 ****)((ulonglong)local_128 & 0xffffffff00000000);
                while (cVar7 = FUN_18014f6a0(local_138,&local_108,&local_128), cVar7 != '\0') {
                  FUN_1800dc352(puVar30,((ulonglong)local_128 & 0xffffffff) * 8 +
                                        *(longlong *)(local_110 + 0x80));
                }
              }
            }
          }
          FUN_18016a960(1);
          FUN_18013799d();
          FUN_1800d57fb(&local_108,*pppppuVar17);
          pppppuVar16 = &local_108;
          if (0xf < uStack_f0) {
            pppppuVar16 = (undefined8 *****)local_108;
          }
          FUN_18013309a(pppppuVar16,0);
          FUN_180001ef2(&local_108);
          FUN_18016a960(2);
          if (ppppuVar3[7] < (undefined8 ****)0x10) {
            pppppuVar16 = (undefined8 *****)(ppppuVar3 + 4);
          }
          else {
            pppppuVar16 = (undefined8 *****)ppppuVar3[4];
          }
          FUN_18013309a(pppppuVar16,0);
          FUN_18016a960(3);
          FUN_180111069(&local_108);
          FUN_1800ffdb5(local_108._0_4_);
          pppppuVar16 = (undefined8 *****)(ppppuVar3 + 0xc);
          uVar14 = 0;
          cVar7 = FUN_180145a54("##value",6,pppppuVar16,0,0,0,0);
          if (cVar7 != '\0') {
            FUN_1800d4dee((&PTR_s__items_1804028b0)[lVar18],*pppppuVar17);
            cVar7 = FUN_18014f686(local_138,iVar8);
            if (cVar7 != '\0') {
              local_128 = (undefined8 ****)0x0;
              local_118 = (undefined8 *****)((ulonglong)local_118 & 0xffffffff00000000);
              while (cVar7 = FUN_18014f6a0(local_138,&local_128), cVar7 != '\0') {
                ppppuVar3 = *pppppuVar16;
                FUN_1800db800(local_110,&local_108,
                              ((ulonglong)local_118 & 0xffffffff) * 8 +
                              *(longlong *)(local_110 + 0x80));
                local_108[0xc] = ppppuVar3;
                FUN_1800d4dee((&PTR_s__items_1804028b0)[lVar18],
                              *(undefined8 *)
                               (*(longlong *)(local_110 + 0x80) +
                               ((ulonglong)local_118 & 0xffffffff) * 8),*pppppuVar16);
              }
            }
          }
          FUN_18011834f();
        }
      }
      uVar13 = FUN_18014ef2d();
      FUN_18014f7d4(local_138,uVar13);
      FUN_180168430();
      thunk_FUN_180100412(&local_178);
    }
    FUN_180154c1a();
    FUN_18023d6e0(&DAT_180402770);
  }
  cVar7 = FUN_180153cc1(&DAT_18035f0e4,0,0);
  if (cVar7 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_1804184bc) && (FUN_18023d500(&DAT_1804184bc), DAT_1804184bc == -1)) {
      FUN_18023d710(&LAB_1800da4e4);
      _Init_thread_footer(&DAT_1804184bc);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_1804184f8) && (FUN_18023d500(&DAT_1804184f8), DAT_1804184f8 == -1)) {
      FUN_18014f566(&DAT_1804184c8);
      FUN_18023d710(FUN_1800da4f0);
      _Init_thread_footer(&DAT_1804184f8);
    }
    FUN_180044980(&DAT_1804026d0);
    FUN_18013799d();
    FUN_18013309a(&DAT_18035f3a4,0);
    FUN_180119893(0,DAT_1802bb8e0);
    cVar7 = FUN_180159cb6(&DAT_18035f533,&DAT_1804184b8,DAT_1802dbb2c,DAT_1802dbb30);
    if (cVar7 != '\0') {
      DAT_180418340 = '\x01';
    }
    FUN_18013799d();
    FUN_18013309a(&DAT_18035f3ef,0);
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180111069(&local_178);
    fVar23 = (float)local_178;
    fVar28 = (float)FUN_180116c08();
    FUN_1801023ca(&local_108,&DAT_18035f5dd,0,0,CONCAT44(uVar25,0xbf800000));
    fVar24 = local_108._0_4_;
    lVar18 = FUN_18010128e();
    fVar29 = *(float *)(lVar18 + 0x4c);
    lVar18 = FUN_18010128e();
    fVar26 = *(float *)(lVar18 + 100);
    lVar18 = FUN_18010128e();
    FUN_1800ffdb5(((((fVar23 - fVar28) - fVar24) - fVar29) - fVar26) - *(float *)(lVar18 + 0x5c));
    uVar14 = 0;
    cVar7 = FUN_180164b8f("##search",&DAT_18035f536,&DAT_180402908,0,0,0);
    if (cVar7 != '\0') {
      DAT_180418340 = '\x01';
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_1804184fc) && (FUN_18023d500(&DAT_1804184fc), DAT_1804184fc == -1)) {
      FUN_18023d710(&LAB_1800da567);
      _Init_thread_footer(&DAT_1804184fc);
    }
    if ((DAT_180402938 != 0) && (cVar7 = FUN_18010759c(0), cVar7 != '\0')) {
      puVar12 = DAT_180402928;
      if (DAT_180402940 < 0x10) {
        puVar12 = &DAT_180402928;
      }
      FUN_180107bf7("Error: %s",puVar12);
    }
    FUN_180119893(0,DAT_1802bb8e0);
    cVar7 = FUN_180159cb6(&DAT_18035f5dd,&DAT_1804184c0,DAT_1802dbb2c,DAT_1802dbb30);
    if (cVar7 != '\0') {
      DAT_180418340 = '\x01';
code_r0x0001800d6a14:
      DAT_180402938 = 0;
      puVar12 = DAT_180402928;
      if (DAT_180402940 < 0x10) {
        puVar12 = &DAT_180402928;
      }
      *(undefined1 *)puVar12 = 0;
      local_150 = '\0';
      local_110 = (undefined *)((ulonglong)local_110 & 0xffffffff00000000);
      if ((DAT_180402918 != 0) && (DAT_1804184c0 != '\0')) {
        FUN_1800da280(&local_178,&DAT_180402908);
        local_110 = (undefined *)((ulonglong)local_110 & 0xffffffff00000000);
      }
      plVar21 = DAT_1804182b0;
      local_108 = (undefined8 *****)0x0;
      piStack_100 = (int *)0x0;
      local_f8 = (int *)0x0;
      plVar22 = DAT_1804182b0;
code_r0x0001800d6aad:
      do {
        plVar22 = (longlong *)*plVar22;
        if (plVar22 == plVar21) goto code_r0x0001800d6b2a;
        if ((DAT_1804184b8 != '\x01') || (plVar22[6] != 0)) {
          if (DAT_180402918 != 0) {
            if (DAT_1804184c0 == '\0') {
              lVar18 = FUN_1800da2be(plVar22 + 4,&DAT_180402908,0);
              if (lVar18 == -1) goto code_r0x0001800d6aad;
            }
            else {
              cVar7 = FUN_1800da339(plVar22 + 4,&local_178);
              if (cVar7 == '\0') goto code_r0x0001800d6aad;
            }
          }
          if (piStack_100 == local_f8) {
            FUN_180052bde(&local_108);
          }
          else {
            *(longlong *)piStack_100 = plVar22[2];
            piStack_100 = piStack_100 + 2;
          }
        }
      } while( true );
    }
    if (DAT_180418340 == '\x01') goto code_r0x0001800d6a14;
    goto LAB_1800d6bd6;
  }
  goto LAB_1800d7089;
code_r0x0001800d6b2a:
  FUN_1800db254(local_108,piStack_100,(longlong)piStack_100 - (longlong)local_108 >> 3);
  piVar1 = DAT_180418330;
  pppppuVar17 = DAT_180418328;
  piVar2 = piStack_100;
  ppppuVar3 = local_108;
  if (((longlong)piStack_100 - (longlong)local_108 !=
       (longlong)DAT_180418330 - (longlong)DAT_180418328) ||
     (iVar8 = memcmp(local_108,DAT_180418328,(longlong)piStack_100 - (longlong)local_108),
     iVar8 != 0)) {
    piVar5 = DAT_180418338;
    local_108 = pppppuVar17;
    piStack_100 = piVar1;
    DAT_180418338 = local_f8;
    local_f8 = piVar5;
    DAT_180418328 = (undefined8 *****)ppppuVar3;
    DAT_180418330 = piVar2;
    FUN_18014f5d6(&DAT_1804184c8);
  }
  DAT_180418340 = '\0';
  FUN_180004cea(&local_108);
  if (local_150 == '\x01') {
    FUN_1800185bc(&local_178);
  }
LAB_1800d6bd6:
  local_178 = (undefined8 *****)0x0;
  uVar14 = uVar14 & 0xffffffff00000000;
  cVar7 = FUN_180164c18(&DAT_18035f0de,4,0x2000747,&local_178,uVar14);
  uVar25 = (undefined4)(uVar14 >> 0x20);
  if (cVar7 != '\0') {
    FUN_18016a395(0,1);
    uVar25 = FUN_18015aacb(DAT_1802dbb40);
    FUN_18016a158(&DAT_18035f594,0x10,uVar25,0);
    uVar25 = FUN_18015aacb(DAT_1802dbb44);
    FUN_18016a158(&DAT_18036cc91,0x10,uVar25,0);
    FUN_18016a158("Name",8,0,0);
    uVar25 = FUN_18015aacb(DAT_1802dbb44);
    FUN_18016a158(&DAT_180368291,0x10,uVar25,0);
    FUN_18016b3e4();
    uVar13 = FUN_18014e6af(0,DAT_1804184c8,
                           (ulonglong)((longlong)DAT_180418330 - (longlong)DAT_180418328) >> 3);
    FUN_18014f7d4(&DAT_1804184c8,uVar13);
    FUN_1801003f2(&local_178);
    fVar26 = (float)FUN_180116c08();
    lVar18 = FUN_18010128e();
    fVar29 = *(float *)(lVar18 + 0x50);
    lVar18 = FUN_18010128e();
    FUN_1801004b6(&local_178,(ulonglong)((longlong)DAT_180418330 - (longlong)DAT_180418328) >> 3,
                  *(float *)(lVar18 + 0x70) + *(float *)(lVar18 + 0x70) + fVar29 + fVar29 + fVar26);
    uVar9 = DAT_1802dbb30;
    uVar4 = DAT_1802bb8d8;
    while( true ) {
      cVar7 = FUN_180100a32(&local_178);
      uVar25 = (undefined4)(uVar14 >> 0x20);
      if (cVar7 == '\0') break;
      for (iVar8 = (int)(float)local_178; iVar8 < local_178._4_4_; iVar8 = iVar8 + 1) {
        FUN_1800db800(&DAT_1804182a8,&local_108,DAT_180418328 + iVar8);
        ppppuVar3 = local_108;
        FUN_18016a67b(0,0);
        FUN_18011810d(iVar8);
        FUN_18016a960(0);
        FUN_18014f370((longlong)iVar8);
        uVar27 = FUN_18011a456();
        local_108 = (undefined8 ****)((ulonglong)uVar27 << 0x20);
        uVar25 = FUN_18014f686(&DAT_1804184c8,iVar8);
        FUN_1801391f6("##multiselectable",uVar25,0x12,&local_108);
        FUN_180119893(0);
        pppppuVar17 = (undefined8 *****)(ppppuVar3 + 3);
        FUN_1800dbb7b(pppppuVar17);
        FUN_1800db986(&DAT_1804182e8,&local_108);
        local_184[0] = (float)CONCAT31(local_184[0]._1_3_,piStack_100 != (int *)0x0);
        cVar7 = FUN_180159cb6("##freeze",local_184,uVar4,uVar9);
        if (cVar7 != '\0') {
          if (local_184[0]._0_1_ == '\x01') {
            FUN_1800da370(&DAT_1804182e8,&local_108);
            cVar7 = FUN_18014f686(&DAT_1804184c8,iVar8);
            if (cVar7 != '\0') {
              local_128 = (undefined8 ****)0x0;
              local_118 = (undefined8 *****)((ulonglong)local_118 & 0xffffffff00000000);
              while (cVar7 = FUN_18014f6a0(&DAT_1804184c8,&local_128), cVar7 != '\0') {
                FUN_1800da370(&DAT_1804182e8,&local_108,
                              DAT_180418328 + ((ulonglong)local_118 & 0xffffffff));
              }
            }
          }
          else {
            FUN_1800dc352(&DAT_1804182e8,pppppuVar17);
            cVar7 = FUN_18014f686(&DAT_1804184c8,iVar8);
            if (cVar7 != '\0') {
              local_108 = (undefined8 *****)0x0;
              local_128 = (undefined8 ****)((ulonglong)local_128 & 0xffffffff00000000);
              while (cVar7 = FUN_18014f6a0(&DAT_1804184c8,&local_108), cVar7 != '\0') {
                FUN_1800dc352(&DAT_1804182e8,DAT_180418328 + ((ulonglong)local_128 & 0xffffffff));
              }
            }
          }
        }
        FUN_18016a960(1);
        FUN_18013799d();
        FUN_1800d57fb(&local_108,*pppppuVar17);
        pppppuVar17 = &local_108;
        if (0xf < uStack_f0) {
          pppppuVar17 = (undefined8 *****)local_108;
        }
        FUN_18013309a(pppppuVar17,0);
        FUN_180001ef2(&local_108);
        FUN_18016a960(2);
        if (ppppuVar3[7] < (undefined8 ****)0x10) {
          pppppuVar17 = (undefined8 *****)(ppppuVar3 + 4);
        }
        else {
          pppppuVar17 = (undefined8 *****)ppppuVar3[4];
        }
        FUN_18013309a(pppppuVar17,0);
        FUN_18016a960(3);
        local_18c[0] = (float)CONCAT31(local_18c[0]._1_3_,
                                       (undefined8 ****)ppppuVar3[0xc] != (undefined8 ****)0x0);
        cVar7 = FUN_180159cb6("##switch",local_18c,uVar4,uVar9);
        if (cVar7 != '\0') {
          ppppuVar3[0xc] = (undefined8 ****)(ulonglong)local_18c[0]._0_1_;
          FUN_1800d48c4(ppppuVar3[3]);
          cVar7 = FUN_18014f686(&DAT_1804184c8,iVar8);
          if (cVar7 != '\0') {
            local_128 = (undefined8 ****)0x0;
            local_118 = (undefined8 *****)((ulonglong)local_118 & 0xffffffff00000000);
            while (cVar7 = FUN_18014f6a0(&DAT_1804184c8,&local_128), cVar7 != '\0') {
              ppppuVar20 = (undefined8 ****)ppppuVar3[0xc];
              FUN_1800db800(&DAT_1804182a8,&local_108,
                            DAT_180418328 + ((ulonglong)local_118 & 0xffffffff));
              local_108[0xc] = ppppuVar20;
              FUN_1800d48c4(DAT_180418328[(ulonglong)local_118 & 0xffffffff],
                            (undefined8 ****)ppppuVar3[0xc] != (undefined8 ****)0x0);
            }
          }
        }
        FUN_18011834f();
      }
    }
    uVar13 = FUN_18014ef2d();
    FUN_18014f7d4(&DAT_1804184c8,uVar13);
    FUN_180168430();
    thunk_FUN_180100412(&local_178);
  }
  FUN_180154c1a();
  FUN_18023d6e0(&DAT_1804026d0);
LAB_1800d7089:
  cVar7 = FUN_180153cc1(&DAT_18035f618,0,0);
  if (cVar7 == '\0') {
LAB_1800d7ace:
    cVar7 = FUN_180153cc1(&DAT_18035f0f8,0,0);
    if (cVar7 != '\0') {
      FUN_180044980(&DAT_1804027d0);
      ppppuVar3 = DAT_1804183f0;
      local_178 = (undefined8 *****)0x0;
      piStack_170 = (int *)0x0;
      local_168 = (int *)0x0;
      uStack_160 = 0xf;
      local_128 = (undefined8 ****)0x0;
      for (ppppuVar20 = DAT_1804183e8; ppppuVar20 != ppppuVar3; ppppuVar20 = ppppuVar20 + 2) {
        if (*(char *)ppppuVar20 == '\x01') {
          local_108 = (undefined8 *****)0xffffffffffffffff;
          uVar14 = FUN_1800da878(ppppuVar20,"actorId",&local_108);
          if (uVar14 == DAT_1804029a8) {
            FUN_1800da9be(ppppuVar20,&local_108,"name",&DAT_1803861e4);
            FUN_180004c8c(&local_178);
            local_168 = local_f8;
            uStack_160 = uStack_f0;
            local_178 = (undefined8 *****)local_108;
            piStack_170 = piStack_100;
            local_f8 = (int *)0x0;
            uStack_f0 = 0xf;
            local_108 = (undefined8 ****)((ulonglong)local_108 & 0xffffffffffffff00);
            FUN_180001ef2(&local_108);
            local_128 = ppppuVar20;
            break;
          }
        }
      }
      FUN_18013799d();
      FUN_18013309a(&DAT_18035f121,0);
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180111069(&local_108);
      FUN_1800ffdb5(local_108._0_4_);
      pppppuVar17 = local_178;
      if (uStack_160 < 0x10) {
        pppppuVar17 = (undefined8 *****)&local_178;
      }
      cVar7 = FUN_180138722("##combo",pppppuVar17,0);
      ppppuVar6 = DAT_1804183f0;
      ppppuVar19 = DAT_1804183e8;
      if (cVar7 != '\0') {
        for (; ppppuVar19 != ppppuVar6; ppppuVar19 = ppppuVar19 + 2) {
          if (*(char *)ppppuVar19 == '\x01') {
            FUN_1800da9be(ppppuVar19,&local_108,"name",&DAT_1803861e4);
            local_118 = (undefined8 *****)0xffffffffffffffff;
            uVar15 = FUN_1800da878(ppppuVar19,"actorId");
            uVar14 = DAT_1804029a8;
            FUN_18011810d(uVar15 & 0xffffffff);
            local_118 = (undefined8 *****)0x0;
            cVar7 = FUN_1801391f6(&DAT_18036a523,uVar15 == uVar14,0,&local_118);
            if (cVar7 != '\0') {
              DAT_1804029a8 = uVar15;
            }
            FUN_180119893(0,0);
            pppppuVar17 = &local_108;
            if (0xf < uStack_f0) {
              pppppuVar17 = (undefined8 *****)local_108;
            }
            FUN_18013309a(pppppuVar17);
            FUN_18011834f();
            if (uVar15 == uVar14) {
              FUN_18011732f();
            }
            FUN_180001ef2(&local_108);
          }
        }
        FUN_180138f6c();
      }
      if (ppppuVar20 != ppppuVar3) {
        local_118 = (undefined8 *****)&local_128;
        local_108 = local_118;
        FUN_1800dab14(&local_108,DAT_1802dbb4c,&DAT_18036c43c,&DAT_1803658a1,&DAT_1803658a0);
        FUN_1800dab14(&local_108,DAT_1802dbb4c,"MP",&DAT_180365809,&DAT_180365808);
        puVar30 = &DAT_180365278;
        FUN_1800dab14(&local_108,DAT_1802ac570,&DAT_18036c401,&DAT_180365279,&DAT_180365278);
        FUN_1800dacd0(&local_118,DAT_1802dbb4c,&DAT_18036c439,&DAT_18036589c,
                      (ulonglong)puVar30 & 0xffffffff00000000);
        FUN_1800dacd0(&local_118,DAT_1802dbb4c,"MaxMP",&DAT_1803657e7,1);
        FUN_1800dacd0(&local_118,DAT_1802dbb50,&DAT_18036c58b,&DAT_180366cf0,2);
        FUN_1800dacd0(&local_118,DAT_1802dbb50,"DEF","def",3);
        FUN_1800dacd0(&local_118,DAT_1802dbb50,&DAT_18036c262,"mat",4);
        FUN_1800dacd0(&local_118,DAT_1802dbb50,&DAT_18036c8ce,&DAT_1803682ca,5);
        FUN_1800dacd0(&local_118,DAT_1802dbb50,&DAT_18036c60f,&DAT_1803670a9,6);
        FUN_1800dacd0(&local_118,DAT_1802dbb50,&DAT_18036c587,&DAT_180366cec,7);
      }
      FUN_180154c1a();
      FUN_180001ef2(&local_178);
      FUN_18023d6e0(&DAT_1804027d0);
    }
    cVar7 = FUN_180153cc1(&DAT_18035f0af,0,0);
    if (cVar7 != '\0') {
      FUN_180173217();
      FUN_180154c1a();
    }
    cVar7 = FUN_180153cc1(&DAT_18035f031,0,0);
    if (cVar7 != '\0') {
      FUN_1801707d8();
      FUN_180154c1a();
    }
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_180418504) && (FUN_18023d500(&DAT_180418504), DAT_180418504 == -1)) {
    FUN_18023d710(&LAB_1800da573);
    _Init_thread_footer(&DAT_180418504);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_180418540) && (FUN_18023d500(&DAT_180418540), DAT_180418540 == -1)) {
    FUN_18014f566(&DAT_180418510);
    FUN_18023d710(FUN_1800da57f);
    _Init_thread_footer(&DAT_180418540);
  }
  FUN_180044980(&DAT_180402720);
  FUN_18013799d();
  FUN_18013309a(&DAT_18035f3a4,0);
  FUN_180119893(0,DAT_1802bb8e0);
  cVar7 = FUN_180159cb6(&DAT_18035f533,&DAT_180418500,DAT_1802dbb2c,DAT_1802dbb30);
  if (cVar7 != '\0') {
    DAT_1804183e0 = '\x01';
  }
  FUN_18013799d();
  FUN_18013309a(&DAT_18035f3ef,0);
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180111069(&local_178);
  fVar23 = (float)local_178;
  fVar28 = (float)FUN_180116c08();
  FUN_1801023ca(&local_108,&DAT_18035f5dd,0,0,CONCAT44(uVar25,0xbf800000));
  fVar24 = local_108._0_4_;
  lVar18 = FUN_18010128e();
  fVar29 = *(float *)(lVar18 + 0x4c);
  lVar18 = FUN_18010128e();
  fVar26 = *(float *)(lVar18 + 100);
  lVar18 = FUN_18010128e();
  FUN_1800ffdb5(((((fVar23 - fVar28) - fVar24) - fVar29) - fVar26) - *(float *)(lVar18 + 0x5c));
  uVar14 = 0;
  cVar7 = FUN_180164b8f("##search",&DAT_18035f536,&DAT_180402948,0,0,0);
  if (cVar7 != '\0') {
    DAT_1804183e0 = '\x01';
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_180418544) && (FUN_18023d500(&DAT_180418544), DAT_180418544 == -1)) {
    FUN_18023d710(&LAB_1800da5f6);
    _Init_thread_footer(&DAT_180418544);
  }
  if ((DAT_180402978 != 0) && (cVar7 = FUN_18010759c(0), cVar7 != '\0')) {
    puVar12 = DAT_180402968;
    if (DAT_180402980 < 0x10) {
      puVar12 = &DAT_180402968;
    }
    FUN_180107bf7("Error: %s",puVar12);
  }
  FUN_180119893(0,DAT_1802bb8e0);
  cVar7 = FUN_180159cb6(&DAT_18035f5dd,&DAT_180418508,DAT_1802dbb2c,DAT_1802dbb30);
  if (cVar7 == '\0') {
    if (DAT_1804183e0 != '\x01') {
LAB_1800d74a5:
      local_178 = (undefined8 *****)0x0;
      cVar7 = FUN_180164c18(&DAT_18035f612,4,0x2000747,&local_178,uVar14 & 0xffffffff00000000);
      if (cVar7 != '\0') {
        FUN_18016a395(0,1);
        uVar25 = FUN_18015aacb(DAT_1802dbb40);
        FUN_18016a158(&DAT_18035f594,0x10,uVar25,0);
        uVar25 = FUN_18015aacb(DAT_1802dbb44);
        FUN_18016a158(&DAT_18036cc91,0x10,uVar25,0);
        FUN_18016a158("Name",8,0,0);
        uVar25 = FUN_18015aacb(DAT_1802bb8dc);
        FUN_18016a158("Value",0x10,uVar25,0);
        FUN_18016b3e4();
        uVar13 = FUN_18014e6af(0,DAT_180418510,
                               (ulonglong)((longlong)DAT_1804183d0 - (longlong)DAT_1804183c8) >> 3);
        FUN_18014f7d4(&DAT_180418510,uVar13);
        FUN_1801003f2(&local_178);
        fVar26 = (float)FUN_180116c08();
        lVar18 = FUN_18010128e();
        fVar29 = *(float *)(lVar18 + 0x50);
        lVar18 = FUN_18010128e();
        FUN_1801004b6(&local_178,(ulonglong)((longlong)DAT_1804183d0 - (longlong)DAT_1804183c8) >> 3
                      ,*(float *)(lVar18 + 0x70) + *(float *)(lVar18 + 0x70) +
                       fVar29 + fVar29 + fVar26);
        ppppuVar3 = DAT_1802dbb60;
        uVar4 = DAT_1802dbb30;
        uVar25 = DAT_1802bb8d8;
        while (cVar7 = FUN_180100a32(&local_178), cVar7 != '\0') {
          for (local_12c = (int)(float)local_178; local_12c < local_178._4_4_;
              local_12c = local_12c + 1) {
            FUN_1800dc42c(&DAT_180418348,&local_108,DAT_1804183c8 + local_12c);
            ppppuVar20 = local_108;
            FUN_18016a67b(0,0);
            FUN_18011810d(local_12c);
            FUN_18016a960(0);
            FUN_18014f370((longlong)local_12c);
            uVar27 = FUN_18011a456();
            local_108 = (undefined8 ****)((ulonglong)uVar27 << 0x20);
            uVar9 = FUN_18014f686(&DAT_180418510,local_12c);
            FUN_1801391f6("##multiselectable",uVar9,0x12,&local_108);
            FUN_180119893(0);
            pppppuVar17 = (undefined8 *****)(ppppuVar20 + 3);
            uVar13 = FUN_1800dbb7b(pppppuVar17);
            FUN_1800db986(&DAT_180418388,&local_108,pppppuVar17,uVar13);
            local_119 = piStack_100 != (int *)0x0;
            cVar7 = FUN_180159cb6("##freeze",&local_119,uVar25,uVar4);
            if (cVar7 != '\0') {
              if (local_119 == '\x01') {
                FUN_1800da370(&DAT_180418388,&local_108);
                cVar7 = FUN_18014f686(&DAT_180418510,local_12c);
                if (cVar7 != '\0') {
                  local_128 = (undefined8 ****)0x0;
                  local_118 = (undefined8 *****)((ulonglong)local_118 & 0xffffffff00000000);
                  while (cVar7 = FUN_18014f6a0(&DAT_180418510,&local_128), cVar7 != '\0') {
                    FUN_1800da370(&DAT_180418388,&local_108,
                                  DAT_1804183c8 + ((ulonglong)local_118 & 0xffffffff));
                  }
                }
              }
              else {
                FUN_1800dc352(&DAT_180418388,pppppuVar17);
                cVar7 = FUN_18014f686(&DAT_180418510,local_12c);
                if (cVar7 != '\0') {
                  local_108 = (undefined8 *****)0x0;
                  local_128 = (undefined8 ****)((ulonglong)local_128 & 0xffffffff00000000);
                  while (cVar7 = FUN_18014f6a0(&DAT_180418510,&local_108), cVar7 != '\0') {
                    FUN_1800dc352(&DAT_180418388,DAT_1804183c8 + ((ulonglong)local_128 & 0xffffffff)
                                 );
                  }
                }
              }
            }
            FUN_18016a960(1);
            FUN_18013799d();
            FUN_1800d57fb(&local_108,*pppppuVar17);
            pppppuVar16 = &local_108;
            if (0xf < uStack_f0) {
              pppppuVar16 = (undefined8 *****)local_108;
            }
            FUN_18013309a(pppppuVar16,0);
            FUN_180001ef2(&local_108);
            FUN_18016a960(2);
            if (ppppuVar20[7] < (undefined8 ****)0x10) {
              pppppuVar16 = (undefined8 *****)(ppppuVar20 + 4);
            }
            else {
              pppppuVar16 = (undefined8 *****)ppppuVar20[4];
            }
            FUN_18013309a(pppppuVar16,0);
            FUN_18016a960(3);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c)
                 < DAT_180418548) && (FUN_18023d500(&DAT_180418548), DAT_180418548 == -1)) {
              FUN_18023d710(&LAB_1800da602);
              _Init_thread_footer(&DAT_180418548);
            }
            pppppuVar16 = (undefined8 *****)(ppppuVar20 + 8);
            if (pppppuVar16 != (undefined8 *****)&DAT_180402988) {
              if ((undefined8 ****)0xf < ppppuVar20[0xb]) {
                pppppuVar16 = (undefined8 *****)ppppuVar20[8];
              }
              FUN_180017ca0(&DAT_180402988,pppppuVar16);
            }
            piStack_100 = &local_12c;
            local_108 = pppppuVar17;
            FUN_180111069(&local_128);
            FUN_1800ffdb5((undefined4)local_128);
            uVar9 = 0;
            cVar7 = FUN_180164a20(&DAT_18036b807,&DAT_180402988,0,0,0);
            if (cVar7 != '\0') {
              FUN_1800da60e(&local_108);
            }
            FUN_18011b815(&DAT_18036b809,8);
            local_128 = ppppuVar3;
            FUN_18010ca41(&local_128,4);
            lVar18 = DAT_180419160;
            *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
            uVar10 = FUN_180106d4e(*(undefined8 *)(lVar18 + 0x1608),&DAT_18036b809);
            cVar7 = FUN_18011b34f(uVar10,1);
            if (cVar7 != '\0') {
              FUN_180111069(&local_118);
              uVar10 = local_118._4_4_;
              FUN_180111069(local_184);
              fVar26 = local_184[0];
              FUN_1801023ca(local_18c,&DAT_18035f5d6,0,0,CONCAT44(uVar9,0xbf800000));
              fVar29 = local_18c[0];
              lVar18 = FUN_18010128e();
              local_128 = (undefined8 ****)
                          CONCAT44(uVar10,(fVar26 - fVar29) -
                                          (*(float *)(lVar18 + 0x4c) + *(float *)(lVar18 + 0x4c)));
              cVar7 = FUN_180164b05("##multiline",&DAT_180402988,&local_128,0,0,0);
              if (cVar7 != '\0') {
                FUN_1800da60e(&local_108);
              }
              FUN_180119893(0);
              local_128 = (undefined8 ****)0x0;
              cVar7 = FUN_180134257(&DAT_18035f5d6,&local_128);
              if (cVar7 != '\0') {
                FUN_18011b292();
              }
              FUN_18011b3ef();
            }
            FUN_18011834f();
          }
        }
        uVar13 = FUN_18014ef2d();
        FUN_18014f7d4(&DAT_180418510,uVar13);
        FUN_180168430();
        thunk_FUN_180100412(&local_178);
      }
      FUN_180154c1a();
      FUN_18023d6e0(&DAT_180402720);
      goto LAB_1800d7ace;
    }
  }
  else {
    DAT_1804183e0 = '\x01';
  }
  DAT_180402978 = 0;
  puVar12 = DAT_180402968;
  if (DAT_180402980 < 0x10) {
    puVar12 = &DAT_180402968;
  }
  *(undefined1 *)puVar12 = 0;
  local_150 = '\0';
  local_110 = (undefined *)((ulonglong)local_110 & 0xffffffff00000000);
  if ((DAT_180402958 != 0) && (DAT_180418508 != '\0')) {
    FUN_1800da280(&local_178,&DAT_180402948);
    local_110 = (undefined *)((ulonglong)local_110 & 0xffffffff00000000);
  }
  plVar21 = DAT_180418350;
  local_108 = (undefined8 *****)0x0;
  piStack_100 = (int *)0x0;
  local_f8 = (int *)0x0;
  plVar22 = DAT_180418350;
code_r0x0001800d737c:
  do {
    plVar22 = (longlong *)*plVar22;
    if (plVar22 == plVar21) break;
    if ((DAT_180418500 != '\x01') || (plVar22[6] != 0)) {
      if (DAT_180402958 != 0) {
        if (DAT_180418508 == '\0') {
          lVar18 = FUN_1800da2be(plVar22 + 4,&DAT_180402948,0);
          if (lVar18 == -1) goto code_r0x0001800d737c;
        }
        else {
          cVar7 = FUN_1800da339(plVar22 + 4,&local_178);
          if (cVar7 == '\0') goto code_r0x0001800d737c;
        }
      }
      if (piStack_100 == local_f8) {
        FUN_180052bde(&local_108);
      }
      else {
        *(longlong *)piStack_100 = plVar22[2];
        piStack_100 = piStack_100 + 2;
      }
    }
  } while( true );
  FUN_1800db254(local_108,piStack_100,(longlong)piStack_100 - (longlong)local_108 >> 3);
  piVar1 = DAT_1804183d0;
  pppppuVar17 = DAT_1804183c8;
  piVar2 = piStack_100;
  ppppuVar3 = local_108;
  if (((longlong)piStack_100 - (longlong)local_108 !=
       (longlong)DAT_1804183d0 - (longlong)DAT_1804183c8) ||
     (iVar8 = memcmp(local_108,DAT_1804183c8,(longlong)piStack_100 - (longlong)local_108),
     iVar8 != 0)) {
    piVar5 = DAT_1804183d8;
    local_108 = pppppuVar17;
    piStack_100 = piVar1;
    DAT_1804183d8 = local_f8;
    local_f8 = piVar5;
    DAT_1804183c8 = (undefined8 *****)ppppuVar3;
    DAT_1804183d0 = piVar2;
    FUN_18014f5d6(&DAT_180418510);
  }
  DAT_1804183e0 = '\0';
  FUN_180004cea(&local_108);
  if (local_150 == '\x01') {
    FUN_1800185bc(&local_178);
  }
  goto LAB_1800d74a5;
}

