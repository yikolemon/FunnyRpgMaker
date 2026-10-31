/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f066a */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f066a(longlong *param_1)

{
  double dVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_ffffffffffffce98;
  ulonglong uVar16;
  undefined8 local_3160;
  int local_3158;
  undefined8 ***local_3148;
  undefined1 local_3138 [16];
  longlong *local_3128;
  longlong local_1148 [7];
  longlong *local_1110;
  undefined8 local_108 [4];
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 ***local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 ***local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x1800f0680;
  local_70 = 0xfffffffffffffffe;
  local_d8 = PTR_DAT_1802dc460;
  local_e8._0_4_ = PTR_DAT_1802dc450._0_4_;
  local_e8._4_4_ = PTR_DAT_1802dc450._4_4_;
  uStack_e0 = PTR_DAT_1802dc458._0_4_;
  uStack_dc = PTR_DAT_1802dc458._4_4_;
  local_a0 = param_1;
  cVar5 = FUN_180153cc1(&DAT_18035f223,0,0);
  if (cVar5 != '\0') {
    lVar13 = 0;
    fVar14 = 0.0;
    do {
      in_stack_ffffffffffffce98 =
           CONCAT44((int)((ulonglong)in_stack_ffffffffffffce98 >> 0x20),0xbf800000);
      FUN_1801023ca(&local_3160,*(undefined8 *)((longlong)&local_e8 + lVar13),0,0,
                    in_stack_ffffffffffffce98);
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffce98 >> 0x20);
      fVar15 = (float)local_3160;
      if ((float)local_3160 <= fVar14) {
        fVar15 = fVar14;
      }
      lVar13 = lVar13 + 8;
      fVar14 = fVar15;
    } while (lVar13 != 0x18);
    fVar14 = (float)FUN_180116c08();
    lVar13 = FUN_18010128e();
    fVar14 = *(float *)(lVar13 + 0x4c) * DAT_1802dbb3c + fVar14 + fVar15;
    fVar15 = (float)FUN_18015aacb(DAT_1802bb8dc);
    if (fVar14 <= fVar15) {
      fVar14 = fVar15;
    }
    FUN_1800ffdb5(fVar14);
    uVar16 = CONCAT44(uVar6,0xffffffff);
    FUN_18013995e("##select_database",&DAT_180402aa8,&local_e8,3,uVar16);
    lVar13 = FUN_18005bba2();
    if (lVar13 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180418d40) && (FUN_18023d500(&DAT_180418d40), DAT_180418d40 == -1)) {
        FUN_1800f1a82(&DAT_180418d30);
        FUN_18023d710(FUN_1800f1b17);
        _Init_thread_footer(&DAT_180418d40);
      }
      FUN_1800f229c(&DAT_180418d30,&local_3160,&DAT_180402aa8);
      puVar11 = local_3160;
      ppppuVar9 = (undefined8 ****)(local_3160 + 5);
      FUN_1800f264c(local_3160 + 7,&local_3160,ppppuVar9);
      puVar3 = local_3160;
      FUN_180119893(0,DAT_1802bb8e0);
      local_3160 = (undefined8 *)0x0;
      cVar5 = FUN_180134257(&DAT_18035f76e,&local_3160);
      if (cVar5 != '\0') {
        DAT_180418d26 = '\0';
      }
      FUN_180119f0f(0);
      uVar6 = FUN_18011837d("dockspace");
      lVar13 = FUN_18010128e();
      fVar14 = *(float *)(lVar13 + 0x14);
      FUN_180111069(&local_98);
      local_3160 = (undefined8 *)
                   CONCAT44((float)((ulonglong)local_98 >> 0x20) + 0.0,SUB84(local_98,0) + fVar14);
      FUN_180121774(uVar6,&local_3160,0x40,0);
      cVar5 = FUN_18010ca66(&DAT_18035f636,0,0);
      if (cVar5 != '\0') {
        local_98 = ppppuVar9;
        uStack_90 = puVar11 + 6;
        FUN_1800f1b4a(&local_3160);
        FUN_18005b913(&local_3160);
        if (local_3128 != (longlong *)0x0) {
          (**(code **)(*local_3128 + 0x20))(local_3128,local_3128 != &local_3160);
        }
      }
      FUN_18010f900();
      cVar5 = FUN_18010ca66(&DAT_18035f315,0,0);
      if (cVar5 != '\0') {
        FUN_1801166df(0);
        FUN_18013309a(puVar11[6],0);
        FUN_1801167a4();
      }
      FUN_18010f900();
      cVar5 = FUN_18010ca66(&DAT_18035f250,0,0);
      if (cVar5 != '\0') {
        local_98 = ppppuVar9;
        uStack_90 = puVar3 + 4;
        FUN_1800f1bdc(&local_3160);
        FUN_18005b913(&local_3160);
        if (local_3128 != (longlong *)0x0) {
          (**(code **)(*local_3128 + 0x20))(local_3128,local_3128 != &local_3160);
        }
      }
      FUN_18010f900();
      cVar5 = FUN_18010ca66(&DAT_18035f1fc,0,0);
      if (cVar5 != '\0') {
        local_3160 = (undefined8 *)0x0;
        cVar5 = FUN_180164c18(&DAT_18035f1fc,2,0x8000,&local_3160,uVar16 & 0xffffffff00000000);
        if (cVar5 != '\0') {
          local_98 = ppppuVar9;
          uStack_90 = puVar3 + 4;
          FUN_1800f1c6e(&local_3160);
          FUN_18005b913(&local_3160);
          if (local_3128 != (longlong *)0x0) {
            (**(code **)(*local_3128 + 0x20))(local_3128,local_3128 != &local_3160);
          }
          FUN_180168430();
        }
      }
      FUN_18010f900();
      if (DAT_180418d26 == '\0') {
        DAT_180418d26 = '\x01';
        FUN_1800e2378();
        FUN_1800f1d00(uVar6);
      }
    }
    else {
      FUN_180111069(&local_98);
      local_3160 = (undefined8 *)((ulonglong)local_98 & 0xffffffff);
      dVar1 = (double)FUN_180107f34();
      FUN_180136e21((uint)(float)dVar1 ^ _DAT_1802b0ce0,&local_3160,lVar13);
    }
    FUN_180154c1a();
  }
  cVar5 = FUN_180153cc1(&DAT_18035f230,0,0);
  if (cVar5 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180418d44) && (FUN_18023d500(&DAT_180418d44), DAT_180418d44 == -1)) {
      FUN_18023d710(&LAB_1800f1e1f);
      _Init_thread_footer(&DAT_180418d44);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180418d68) {
      FUN_18023d500(&DAT_180418d68);
      if (DAT_180418d68 == -1) {
        FUN_18023d710(&LAB_1800f1e2b);
        _Init_thread_footer(&DAT_180418d68);
      }
    }
    FUN_180116580(DAT_180418d48);
    FUN_180164a20(&DAT_18035f6e8,&DAT_180402ab0,0,0,0);
    FUN_180116676();
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180116580(DAT_180418d49);
    if (DAT_180418d48 == '\x01') {
      local_3160 = (undefined8 *)0x0;
      cVar5 = FUN_180134257(&DAT_18035f659);
      if (cVar5 != '\0') {
        DAT_180418d49 = 1;
      }
    }
    else {
      FUN_180116580(DAT_180402ac0 == 0);
      local_3160 = (undefined8 *)0x0;
      cVar5 = FUN_180134257(&DAT_18035f3ef);
      lVar13 = DAT_180418d58;
      if (cVar5 != '\0') {
        DAT_180418d48 = '\x01';
        DAT_180418d49 = 0;
        lVar7 = DAT_180418d50;
        if (DAT_180418d50 != DAT_180418d58) {
          do {
            FUN_180001ef2(lVar7);
            lVar7 = lVar7 + 0x20;
          } while (lVar7 != lVar13);
          DAT_180418d58 = DAT_180418d50;
        }
        FUN_1800f37c4(&local_3160,&local_98);
        FUN_180021bf6(&local_3160);
        if (local_3158 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18028c2e0();
        }
      }
      FUN_180116676();
    }
    FUN_180116676();
    FUN_180044980(&DAT_180402ad0);
    FUN_1801003f2(&local_3160);
    fVar14 = (float)FUN_180116c08();
    lVar13 = FUN_18010128e();
    FUN_1801004b6(&local_3160,(ulonglong)(DAT_180418d58 - DAT_180418d50) >> 5,
                  fVar14 + *(float *)(lVar13 + 0x60));
    while (cVar5 = FUN_180100a32(&local_3160), cVar5 != '\0') {
      for (iVar12 = (int)(float)local_3160; iVar12 < local_3160._4_4_; iVar12 = iVar12 + 1) {
        lVar13 = (longlong)iVar12 * 0x20;
        FUN_180003216(&local_98,DAT_180418d50 + lVar13);
        lVar7 = FUN_180014660(&local_98);
        if (lVar7 != -1) {
          uVar8 = FUN_180014660(&local_98,"\n",0);
          FUN_180073262(local_108,&local_98,0,uVar8,&local_c0);
          FUN_180020b6a(&local_c0);
          FUN_180004c8c(&local_98);
          local_88 = (undefined4)local_b0;
          uStack_84 = local_b0._4_4_;
          uStack_80 = (undefined4)uStack_a8;
          uStack_7c = uStack_a8._4_4_;
          local_98 = local_c0;
          uStack_90 = (undefined8 *)CONCAT44(uStack_b4,uStack_b8);
          local_b0 = 0;
          uStack_a8 = 0xf;
          local_c0 = (undefined8 ***)((ulonglong)local_c0 & 0xffffffffffffff00);
          FUN_180001ef2(&local_c0);
          FUN_180001ef2(local_108);
        }
        ppppuVar9 = &local_98;
        if (0xf < CONCAT44(uStack_7c,uStack_80)) {
          ppppuVar9 = (undefined8 ****)local_98;
        }
        FUN_18013309a(ppppuVar9);
        cVar5 = FUN_18011aab1();
        if (cVar5 != '\0') {
          if (*(ulonglong *)(DAT_180418d50 + 0x18 + lVar13) < 0x10) {
            lVar13 = DAT_180418d50 + lVar13;
          }
          else {
            lVar13 = *(longlong *)(DAT_180418d50 + lVar13);
          }
          FUN_18013309a(lVar13);
          thunk_FUN_18010f900();
        }
        FUN_180001ef2(&local_98);
      }
    }
    FUN_180154c1a();
    thunk_FUN_180100412(&local_3160);
    FUN_18023d6e0(&DAT_180402ad0);
  }
  cVar5 = FUN_180153cc1(&DAT_18035f031,0,0);
  if (cVar5 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180418e00) && (FUN_18023d500(&DAT_180418e00), DAT_180418e00 == -1)) {
      FUN_1800f1e38(&DAT_180418d70);
      FUN_18023d710(FUN_1800f1f22);
      _Init_thread_footer(&DAT_180418e00);
    }
    if (DAT_1804189c0 == 0) {
      if (DAT_1804189a8 == '\0') {
        FUN_180111069(&local_98);
        local_3160 = (undefined8 *)((ulonglong)local_98 & 0xffffffff);
        cVar5 = FUN_180134257(&DAT_18035f009);
        if (cVar5 != '\0') {
          (**(code **)(*local_a0 + 0x48))();
        }
      }
      else if (DAT_1804189a9 == '\0') {
        FUN_180111069(&local_98);
        local_3160 = (undefined8 *)((ulonglong)local_98 & 0xffffffff);
        FUN_180136e21(DAT_1804189ac,&local_3160,&DAT_18035f003);
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2c) < DAT_180418e08) &&
           (FUN_18023d500(&DAT_180418e08), DAT_180418e08 == -1)) {
          FUN_18023d710(&LAB_1800f1fbc);
          _Init_thread_footer(&DAT_180418e08);
        }
        FUN_18013799d();
        FUN_18013309a(&DAT_18035f016,0);
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180111069(&local_3160);
        FUN_1800ffdb5((float)local_3160);
        puVar11 = DAT_180402b48;
        if (DAT_180402b60 < 0x10) {
          puVar11 = &DAT_180402b48;
        }
        cVar5 = FUN_180138722("##selectmap",puVar11,0);
        if (cVar5 != '\0') {
          ppppuVar9 = (undefined8 ****)FUN_18005b68d(0,0);
          local_98 = (undefined8 ****)0x0;
          if (ppppuVar9 != (undefined8 ****)0x0) {
            do {
              uVar16 = 0;
              FUN_18005b3d5(&local_3160,0,0,local_98,0);
              pppuVar4 = local_3148;
              FUN_180068060(local_3138);
              local_c0 = pppuVar4;
              lVar13 = FUN_1800623da(&DAT_180418ca8);
              if (lVar13 != DAT_180418ca8) {
                local_108[0] = FUN_18005b224(0,0,local_98);
                local_d0 = "{:04d} : {}";
                local_c8 = 0xb;
                FUN_1800f1fc8(&local_3160,&local_d0,&local_98,local_108);
                pppuVar4 = local_98;
                ppppuVar2 = DAT_180402b40;
                puVar11 = &local_3160;
                if ((undefined8 ****)0xf < local_3148) {
                  puVar11 = local_3160;
                }
                cVar5 = FUN_180159e6b((ulonglong)local_98 & 0xffffffff,puVar11,
                                      DAT_180402b40 == (undefined8 ****)local_98,0,
                                      uVar16 & 0xffffffff00000000);
                if (cVar5 != '\0') {
                  DAT_180402b40 = (undefined8 ****)local_98;
                  puVar11 = &local_3160;
                  if ((undefined8 ****)0xf < local_3148) {
                    puVar11 = local_3160;
                  }
                  FUN_180017ca0(&DAT_180402b48,puVar11);
                  FUN_1800ef255(lVar13 + 0x40);
                }
                if (ppppuVar2 == (undefined8 ****)pppuVar4) {
                  FUN_18011732f();
                }
                FUN_180001ef2(&local_3160);
              }
              local_98 = (undefined8 ***)((longlong)local_98 + 1);
            } while (local_98 < ppppuVar9);
          }
          FUN_180138f6c();
        }
        FUN_1800ef277();
      }
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180418e04) && (FUN_18023d500(&DAT_180418e04), DAT_180418e04 == -1)) {
        FUN_18023d710(&LAB_1800f1fb0);
        _Init_thread_footer(&DAT_180418e04);
      }
      cVar5 = FUN_18001ba14(&DAT_180402b20,&DAT_1804189b0);
      if (cVar5 == '\0') {
        puVar11 = &DAT_1804189b0;
        if (0xf < DAT_1804189c8) {
          puVar11 = DAT_1804189b0;
        }
        FUN_180017ca0(&DAT_180402b20,puVar11,DAT_1804189c0);
        puVar11 = &DAT_180402b20;
        if (0xf < DAT_180402b38) {
          puVar11 = DAT_180402b20;
        }
        FUN_1800e6fba(&local_3160,3,"%s",puVar11);
        FUN_1800e6f54(&DAT_180418d70,&local_3160);
        if (local_1110 != (longlong *)0x0) {
          (**(code **)(*local_1110 + 0x20))(local_1110,local_1110 != local_1148);
        }
      }
      FUN_180116580(DAT_1804189a8);
      FUN_180111069(&local_98);
      local_3160 = (undefined8 *)((ulonglong)local_98 & 0xffffffff);
      puVar10 = &DAT_18035efe0;
      if (DAT_1804189a8 != '\0') {
        puVar10 = &DAT_18035f368;
      }
      cVar5 = FUN_180134257(puVar10);
      if (cVar5 != '\0') {
        _DAT_180402b30 = 0;
        puVar11 = DAT_180402b20;
        if (DAT_180402b38 < 0x10) {
          puVar11 = &DAT_180402b20;
        }
        *(undefined1 *)puVar11 = 0;
        DAT_1804189c0 = 0;
        puVar11 = DAT_1804189b0;
        if (DAT_1804189c8 < 0x10) {
          puVar11 = &DAT_1804189b0;
        }
        *(undefined1 *)puVar11 = 0;
        (**(code **)(*local_a0 + 0x48))();
      }
      cVar5 = FUN_18010759c(0x400);
      if (cVar5 != '\0') {
        puVar11 = DAT_1804189b0;
        if (DAT_1804189c8 < 0x10) {
          puVar11 = &DAT_1804189b0;
        }
        FUN_180107bf7("%s",puVar11);
      }
      FUN_180116676();
    }
    FUN_1800e86f2(&DAT_180418d70);
    FUN_180154c1a();
  }
  return;
}

