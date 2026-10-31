/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e2eee */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e2eee(void)

{
  int iVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  longlong ******pppppplVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  HMODULE pHVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  byte bVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *******pppppppuVar16;
  undefined1 *puVar17;
  longlong *******ppppppplVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong *******ppppppplVar21;
  longlong *******ppppppplVar22;
  bool bVar23;
  undefined1 uVar24;
  uint uVar25;
  char *in_stack_ffffffffffff9d80;
  longlong ******local_6268 [3];
  ulonglong local_6250;
  undefined8 ******local_3210;
  longlong lStack_3208;
  longlong local_3200;
  ulonglong uStack_31f8;
  longlong *local_11c0;
  undefined1 local_1b8 [56];
  undefined8 local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 *local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined8 *local_138;
  undefined1 local_130 [32];
  longlong ******local_110 [4];
  undefined8 ******local_f0;
  undefined8 local_e8;
  ulonglong local_d8;
  undefined8 *local_d0;
  undefined8 ******local_c8 [2];
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 ******local_a8;
  longlong lStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 ******local_80 [2];
  undefined8 local_70;
  ulonglong local_68;
  undefined1 local_5a [2];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x1800e2f04;
  local_50 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_180418c60) && (FUN_18023d500(&DAT_180418c60), DAT_180418c60 == -1)) {
    DAT_180418c5d = FUN_1800e6d53();
    _Init_thread_footer(&DAT_180418c60);
  }
  if ((DAT_180418c5d == '\x01') &&
     (iVar19 = DAT_180418c64 + 1, bVar23 = 50000 < DAT_180418c64, DAT_180418c64 = iVar19, bVar23)) {
    pHVar10 = GetModuleHandleW((LPCWSTR)0x0);
    pHVar10[(longlong)DAT_180418c64 * 100].unused = iVar19;
  }
  cVar6 = (**(code **)(*DAT_180418890 + 0x10))();
  if (cVar6 == '\0') {
    return;
  }
  FUN_1800e6dfa();
  (**(code **)(*DAT_180418890 + 0x28))();
  cVar6 = FUN_1800d0016(&DAT_180418c32);
  if (((cVar6 != '\0') &&
      (bVar13 = DAT_180402a01 ^ 1, bVar23 = DAT_180402a01 == 0, DAT_180402a01 = bVar13, bVar23)) &&
     (DAT_180402a00 != '\0')) {
    FUN_180187c98();
  }
  cVar6 = FUN_1800d0016(&DAT_180418c36);
  if (cVar6 == '\0') {
    cVar6 = FUN_1800d01e6(&DAT_180418c36);
    uVar24 = DAT_180418c5c;
    if (cVar6 == '\0') goto code_r0x0001800e301e;
  }
  else {
    DAT_180418c5c = DAT_180418b98;
    uVar24 = 1;
  }
  DAT_180418b98 = uVar24;
  FUN_1800e6044();
code_r0x0001800e301e:
  if (DAT_180402a01 == 1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180418c68) && (FUN_18023d500(&DAT_180418c68), DAT_180418c68 == -1)) {
      FUN_1800e6e7e();
      _Init_thread_footer(&DAT_180418c68);
    }
    uVar11 = (**(code **)(*DAT_180418890 + 8))();
    cVar6 = FUN_18010ca66(uVar11,&DAT_180402a01,0x80000);
    if (cVar6 != '\0') {
      cVar6 = FUN_1801525a2(&DAT_18035f5fa,0);
      if (cVar6 != '\0') {
        cVar6 = FUN_180153cc1(&DAT_18035f049,0,0);
        if (cVar6 != '\0') {
          (**(code **)(*DAT_180418890 + 0x30))();
          cVar6 = FUN_180159cb6(&DAT_18035f4c5,&DAT_180418b98,DAT_1802dbb2c,DAT_1802dbb30);
          if (cVar6 != '\0') {
            FUN_1800e6044();
            FUN_1800e2378();
          }
          FUN_180119893(0,DAT_1802bb8e0);
          FUN_180111069(&local_3210);
          FUN_1800ffdb5((int)local_3210);
          in_stack_ffffffffffff9d80 = "%.2f";
          cVar6 = FUN_18013d2c2("##globalspeed",&DAT_180418b9c,DAT_1802dbb38,DAT_1802dc268,
                                0x42c80000,"%.2f",0);
          if (cVar6 != '\0') {
            FUN_1800e6044();
            FUN_1800e2378();
          }
          FUN_180154c1a();
        }
        (**(code **)(*DAT_180418890 + 0x38))();
        cVar6 = FUN_180153cc1(&DAT_18035f5b3,0,0);
        if (cVar6 != '\0') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
               DAT_180418c88) && (FUN_18023d500(&DAT_180418c88), DAT_180418c88 == -1)) {
            FUN_18023d710(&LAB_1800e6f3c);
            _Init_thread_footer(&DAT_180418c88);
          }
          FUN_1801380f1(&DAT_18035f77b);
          local_3210 = (undefined8 ******)0x0;
          FUN_180101bbb(0x11,&local_3210);
          local_3210 = (undefined8 ******)0x0;
          uVar25 = 0;
          cVar6 = FUN_180164c18(&DAT_18035f77b,2,0x8000,&local_3210,0);
          if (cVar6 != '\0') {
            FUN_18016a67b(0,0);
            FUN_18016a960(0);
            FUN_18013799d();
            FUN_18013309a(&DAT_18035f6ca,0);
            FUN_180119893(0,DAT_1802bb8e0);
            FUN_1800e90f4(&DAT_180417b68,&local_3210,&DAT_180418b00);
            cVar6 = FUN_180138722(&DAT_18035f6c8,local_3210[5],0);
            ppppppuVar3 = DAT_180417b68;
            if (cVar6 != '\0') {
              ppppppuVar2 = (undefined8 ******)*DAT_180417b68;
              iVar19 = DAT_180418b00;
              while (local_3210 = ppppppuVar2, DAT_180418b00 = iVar19, ppppppuVar2 != ppppppuVar3) {
                iVar1 = *(int *)(ppppppuVar2 + 4);
                uVar25 = 0;
                cVar6 = FUN_180159e6b(iVar1,ppppppuVar2[5],iVar1 == iVar19,0,0);
                if (cVar6 != '\0') {
                  DAT_180418b00 = *(int *)(ppppppuVar2 + 4);
                  FUN_1800e2378();
                }
                if (iVar1 == iVar19) {
                  FUN_18011732f();
                }
                FUN_180016c4c(&local_3210);
                ppppppuVar2 = local_3210;
                iVar19 = DAT_180418b00;
              }
              FUN_180138f6c();
            }
            FUN_18016a960(1);
            FUN_18013309a(&DAT_18035f5b3,0);
            FUN_180119893(0,DAT_1802bb8e0);
            FUN_1800e90f4(&DAT_180417b68,&local_3210,&DAT_180418b04);
            cVar6 = FUN_180138722(&DAT_18035f5b1,local_3210[5],0);
            ppppppuVar3 = DAT_180417b68;
            if (cVar6 != '\0') {
              ppppppuVar2 = (undefined8 ******)*DAT_180417b68;
              iVar19 = DAT_180418b04;
              while (local_3210 = ppppppuVar2, DAT_180418b04 = iVar19, ppppppuVar2 != ppppppuVar3) {
                iVar1 = *(int *)(ppppppuVar2 + 4);
                uVar25 = 0;
                cVar6 = FUN_180159e6b(iVar1,ppppppuVar2[5],iVar1 == iVar19,0,0);
                if (cVar6 != '\0') {
                  DAT_180418b04 = *(int *)(ppppppuVar2 + 4);
                  FUN_1800e2378();
                }
                if (iVar1 == iVar19) {
                  FUN_18011732f();
                }
                FUN_180016c4c(&local_3210);
                ppppppuVar2 = local_3210;
                iVar19 = DAT_180418b04;
              }
              FUN_180138f6c();
            }
            FUN_180168430();
          }
          FUN_180101ccb(1);
          FUN_1801380f1(&DAT_18035f2b8);
          if (DAT_1804189c0 == 0) {
            if (DAT_1804189a8 == '\0') {
              FUN_180111069(local_6268);
              local_3210 = (undefined8 ******)((ulonglong)local_6268[0] & 0xffffffff);
              cVar6 = FUN_180134257(&DAT_18035f6bb);
              if (cVar6 != '\0') {
                (**(code **)(*DAT_180418890 + 0x48))();
              }
            }
            else if (DAT_1804189a9 == '\0') {
              FUN_180111069(local_6268);
              local_3210 = (undefined8 ******)((ulonglong)local_6268[0] & 0xffffffff);
              FUN_180136e21(DAT_1804189ac,&local_3210,&DAT_18035f6b5);
            }
            else {
              FUN_180111069(local_6268);
              local_3210 = (undefined8 ******)((ulonglong)local_6268[0] & 0xffffffff);
              cVar6 = FUN_180134257(&DAT_18035f26c);
              if (cVar6 != '\0') {
                FUN_18011ac8e(&DAT_18035f26c,0);
              }
              cVar6 = FUN_18011b56a(&DAT_18035f26c,0);
              if (cVar6 != '\0') {
                FUN_1801380f1(&DAT_18035f5ed);
                local_a8 = (undefined8 *******)0x0;
                lStack_a0 = 0;
                local_98 = 0;
                uStack_90 = 0xf;
                FUN_1800e1c68(local_6268);
                local_110[0] = (longlong ******)local_6268;
                cVar6 = FUN_180151e9c(&DAT_18035f2b2,1);
                if (cVar6 != '\0') {
                  local_3210 = (undefined8 *******)0x0;
                  cVar6 = FUN_1801391f6(&DAT_18035f2a5,0,0);
                  if (cVar6 != '\0') {
                    FUN_1800e705e(&DAT_1804188a0,local_80);
                    in_stack_ffffffffffff9d80 =
                         (char *)((ulonglong)in_stack_ffffffffffff9d80 & 0xffffffff00000000);
                    uVar25 = uVar25 & 0xffffff00;
                    FUN_18007fd5c(local_80,&local_3210,4,0x20,uVar25,in_stack_ffffffffffff9d80);
                    FUN_180004c8c(&local_a8);
                    local_98 = local_3200;
                    uStack_90 = uStack_31f8;
                    local_a8 = local_3210;
                    lStack_a0 = lStack_3208;
                    local_3200 = 0;
                    uStack_31f8 = 0xf;
                    local_3210 = (undefined8 ******)((ulonglong)local_3210 & 0xffffffffffffff00);
                    FUN_180001ef2(&local_3210);
                    FUN_18007ff6e(local_80);
                  }
                  local_3210 = (undefined8 *******)0x0;
                  cVar6 = FUN_1801391f6(&DAT_18035f285,0,0);
                  if (cVar6 != '\0') {
                    FUN_1800e70ce(local_110);
                    FUN_1800e705e(local_6268,local_80);
                    in_stack_ffffffffffff9d80 =
                         (char *)((ulonglong)in_stack_ffffffffffff9d80 & 0xffffffff00000000);
                    uVar25 = uVar25 & 0xffffff00;
                    FUN_18007fd5c(local_80,&local_3210,4,0x20,uVar25,in_stack_ffffffffffff9d80);
                    FUN_180004c8c(&local_a8);
                    local_98 = local_3200;
                    uStack_90 = uStack_31f8;
                    local_a8 = local_3210;
                    lStack_a0 = lStack_3208;
                    local_3200 = 0;
                    uStack_31f8 = 0xf;
                    local_3210 = (undefined8 ******)((ulonglong)local_3210 & 0xffffffffffffff00);
                    FUN_180001ef2(&local_3210);
                    FUN_18007ff6e(local_80);
                  }
                  FUN_180151ea6();
                }
                cVar6 = FUN_180151e9c(&DAT_18035f25f,1);
                if (cVar6 != '\0') {
                  local_3210 = (undefined8 *******)0x0;
                  cVar6 = FUN_1801391f6(&DAT_18035f2a5,0,0);
                  if (cVar6 != '\0') {
                    FUN_1800e769c(&DAT_1804188a0,local_80);
                    in_stack_ffffffffffff9d80 =
                         (char *)((ulonglong)in_stack_ffffffffffff9d80 & 0xffffffff00000000);
                    uVar25 = uVar25 & 0xffffff00;
                    FUN_18007fd5c(local_80,&local_3210,4,0x20,uVar25,in_stack_ffffffffffff9d80);
                    FUN_180004c8c(&local_a8);
                    local_98 = local_3200;
                    uStack_90 = uStack_31f8;
                    local_a8 = local_3210;
                    lStack_a0 = lStack_3208;
                    local_3200 = 0;
                    uStack_31f8 = 0xf;
                    local_3210 = (undefined8 ******)((ulonglong)local_3210 & 0xffffffffffffff00);
                    FUN_180001ef2(&local_3210);
                    FUN_18007ff6e(local_80);
                  }
                  local_3210 = (undefined8 *******)0x0;
                  cVar6 = FUN_1801391f6(&DAT_18035f285,0,0);
                  if (cVar6 != '\0') {
                    FUN_1800e70ce(local_110);
                    FUN_1800e769c(local_6268,local_80);
                    in_stack_ffffffffffff9d80 =
                         (char *)((ulonglong)in_stack_ffffffffffff9d80 & 0xffffffff00000000);
                    FUN_18007fd5c(local_80,&local_3210,4,0x20,uVar25 & 0xffffff00,
                                  in_stack_ffffffffffff9d80);
                    FUN_180004c8c(&local_a8);
                    local_98 = local_3200;
                    uStack_90 = uStack_31f8;
                    local_a8 = local_3210;
                    lStack_a0 = lStack_3208;
                    local_3200 = 0;
                    uStack_31f8 = 0xf;
                    local_3210 = (undefined8 ******)((ulonglong)local_3210 & 0xffffffffffffff00);
                    FUN_180001ef2(&local_3210);
                    FUN_18007ff6e(local_80);
                  }
                  FUN_180151ea6();
                }
                if (local_98 != 0) {
                  FUN_180001e04(&local_3210,"FunnyGameTranslations.json",0);
                  FUN_1800c8ca5(local_130,0);
                  FUN_18006d722(&local_f0,local_130);
                  FUN_180001bd8(&local_f0,local_c8);
                  FUN_180001c90(local_80,local_c8,&local_3210);
                  FUN_180001e4c(local_c8);
                  FUN_180001e4c(&local_f0);
                  FUN_1800010ec(local_130);
                  FUN_180001e4c(&local_3210);
                  local_3210 = local_a8;
                  if (uStack_90 < 0x10) {
                    local_3210 = &local_a8;
                  }
                  lStack_3208 = local_98;
                  FUN_1800e6bbb(local_80);
                  FUN_1800b489a(local_80,local_c8,&local_3210);
                  pppppppuVar16 = local_c8;
                  if (0xf < local_b0) {
                    pppppppuVar16 = (undefined8 *******)local_c8[0];
                  }
                  FUN_1800e6fba(&local_3210,1,&DAT_1803641a1,pppppppuVar16);
                  FUN_1800e6f54(&DAT_180418b08,&local_3210);
                  FUN_1800e5430(&local_3210);
                  FUN_180001ef2(local_c8);
                  FUN_180001e4c(local_80);
                }
                FUN_18011b3ef();
                FUN_1800e1e52(local_6268);
                FUN_180001ef2(&local_a8);
              }
            }
          }
          else {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c)
                 < DAT_180418c8c) && (FUN_18023d500(&DAT_180418c8c), DAT_180418c8c == -1)) {
              FUN_18023d710(&LAB_1800e6f48);
              _Init_thread_footer(&DAT_180418c8c);
            }
            cVar6 = FUN_18001ba14(&DAT_180402a08,&DAT_1804189b0);
            if (cVar6 == '\0') {
              puVar15 = &DAT_1804189b0;
              if (0xf < DAT_1804189c8) {
                puVar15 = DAT_1804189b0;
              }
              FUN_180017ca0(&DAT_180402a08,puVar15,DAT_1804189c0);
              puVar15 = &DAT_180402a08;
              if (0xf < DAT_180402a20) {
                puVar15 = DAT_180402a08;
              }
              FUN_1800e6fba(&local_3210,3,"%s",puVar15);
              FUN_1800e6f54(&DAT_180418b08,&local_3210);
              FUN_1800e5430(&local_3210);
            }
            FUN_180116580(DAT_1804189a8);
            FUN_180111069(local_6268);
            local_3210 = (undefined8 ******)((ulonglong)local_6268[0] & 0xffffffff);
            puVar14 = &DAT_18035f6a2;
            if (DAT_1804189a8 != '\0') {
              puVar14 = &DAT_18035f37b;
            }
            cVar6 = FUN_180134257(puVar14);
            if (cVar6 != '\0') {
              _DAT_180402a18 = 0;
              puVar15 = DAT_180402a08;
              if (DAT_180402a20 < 0x10) {
                puVar15 = &DAT_180402a08;
              }
              *(undefined1 *)puVar15 = 0;
              DAT_1804189c0 = 0;
              puVar15 = DAT_1804189b0;
              if (DAT_1804189c8 < 0x10) {
                puVar15 = &DAT_1804189b0;
              }
              *(undefined1 *)puVar15 = 0;
              (**(code **)(*DAT_180418890 + 0x48))();
            }
            cVar6 = FUN_18010759c(0x400);
            if (cVar6 != '\0') {
              puVar15 = DAT_1804189b0;
              if (DAT_1804189c8 < 0x10) {
                puVar15 = &DAT_1804189b0;
              }
              FUN_180107bf7("%s",puVar15);
            }
            FUN_180116676();
          }
          FUN_180111069(local_6268);
          local_3210 = (undefined8 ******)((ulonglong)local_6268[0] & 0xffffffff);
          cVar6 = FUN_180134257(&DAT_18035f27f);
          if (cVar6 != '\0') {
            FUN_18011ac8e(&DAT_18035f27f,0);
            puVar15 = DAT_180418c78;
            puVar20 = DAT_180418c70;
            if (DAT_180418c70 != DAT_180418c78) {
              do {
                FUN_180001e4c(puVar20);
                puVar20 = puVar20 + 4;
              } while (puVar20 != puVar15);
              DAT_180418c78 = DAT_180418c70;
            }
            FUN_1800c8ca5(&local_a8,0);
            FUN_18006d722(local_6268,&local_a8);
            FUN_180001bd8(local_6268,&local_3210);
            FUN_18006a88a(local_c8,&local_3210);
            FUN_180001e4c(&local_3210);
            FUN_180001e4c(local_6268);
            FUN_1800010ec(&local_a8);
            FUN_1800e7900(local_178,local_c8);
            FUN_1800e787a(local_6268,local_178);
            FUN_1800e7900(local_168,local_c8);
            FUN_1800e7961(&local_f0,local_168);
            while (cVar6 = FUN_18006cd79(local_6268,&local_f0), pppppplVar4 = local_6268[0],
                  cVar6 == '\0') {
              FUN_18006cd84(local_6268[0],&local_3210);
              iVar19 = (int)local_3210;
              uVar24 = (int)local_3210 == 2;
              if ((bool)uVar24) {
                local_56 = 1;
                FUN_18006acce(pppppplVar4 + 4,local_80);
                local_3210 = local_80;
                if (7 < local_68) {
                  local_3210 = local_80[0];
                }
                lStack_3208 = local_70;
                local_51 = 1;
                local_52 = 1;
                FUN_18000560c(&local_a8,&local_3210);
                local_57 = 1;
                local_58 = 0;
                local_3210 = &local_a8;
                if (0xf < uStack_90) {
                  local_3210 = local_a8;
                }
                lStack_3208 = local_98;
                cVar6 = FUN_1800af1de(&local_3210,".json");
              }
              else {
                cVar6 = '\0';
              }
              local_58 = uVar24;
              local_57 = uVar24;
              uVar5 = uVar24;
              if (iVar19 == 2) {
                FUN_180001ef2(&local_a8);
                local_52 = uVar24;
                local_51 = uVar24;
                FUN_180001e4c(local_80);
                uVar24 = local_52;
                uVar5 = local_51;
              }
              local_51 = uVar5;
              local_52 = uVar24;
              if (cVar6 != '\0') {
                FUN_1800eb692(&DAT_180418c70,pppppplVar4 + 4);
              }
              FUN_18006ab46(local_6268);
            }
            FUN_1800578f2(&local_f0);
            FUN_1800578f2(local_6268);
            FUN_1800578f2(local_c8);
          }
          cVar6 = FUN_18011b56a(&DAT_18035f27f,0);
          if (cVar6 != '\0') {
            FUN_1801380f1(&DAT_18035f31c);
            local_138 = DAT_180418c78;
            puVar15 = DAT_180418c70;
            while (puVar15 != local_138) {
              local_d0 = puVar15;
              FUN_18006acce(puVar15,local_c8);
              local_f0 = local_c8;
              if (7 < local_b0) {
                local_f0 = local_c8[0];
              }
              local_e8 = local_b8;
              FUN_18000560c(local_6268,&local_f0,&local_158);
              ppppppplVar21 = local_6268;
              if (0xf < local_6250) {
                ppppppplVar21 = (longlong *******)local_6268[0];
              }
              local_158 = local_d0;
              if (7 < (ulonglong)local_d0[3]) {
                local_158 = (undefined8 *)*local_d0;
              }
              local_150 = local_d0[2];
              FUN_18000560c(&local_f0,&local_158);
              pppppppuVar16 = &local_f0;
              if (0xf < local_d8) {
                pppppppuVar16 = (undefined8 *******)local_f0;
              }
              uVar9 = FUN_18011837d(pppppppuVar16);
              cVar6 = FUN_180159e6b(uVar9,ppppppplVar21,0,0,0);
              FUN_180001ef2(&local_f0);
              FUN_180001ef2(local_6268);
              FUN_180001e4c(local_c8);
              if (cVar6 != '\0') {
                local_180 = 0;
                local_54 = 1;
                FUN_1800e54c8(local_130,local_d0);
                local_53 = 0;
                in_stack_ffffffffffff9d80 =
                     (char *)((ulonglong)in_stack_ffffffffffff9d80 & 0xffffffffffffff00);
                FUN_18001347a(local_148,local_130,local_1b8,0,1,in_stack_ffffffffffff9d80);
                FUN_1800e79dc(local_148);
                FUN_1800137c6(local_148);
                local_53 = 0;
                FUN_180001ef2(local_130);
                local_54 = 0;
                local_55 = 0;
                FUN_1800b489a(local_d0,local_110,local_5a);
                FUN_1800e6fba(&local_3210,1);
                FUN_1800e6f54(&DAT_180418b08);
                if (local_11c0 != (longlong *)0x0) {
                  (**(code **)(*local_11c0 + 0x20))();
                  local_11c0 = (longlong *)0x0;
                }
                FUN_180001ef2(local_110);
              }
              puVar15 = local_d0 + 4;
            }
            FUN_18011b3ef();
          }
          FUN_180154c1a();
        }
        cVar6 = FUN_180153cc1(&DAT_18035f1e4,0,0);
        if (cVar6 != '\0') {
          FUN_1801380f1(&DAT_18035f78a);
          cVar6 = FUN_18013d2c2(&DAT_18035f038,&DAT_1804039d4,DAT_1802dc26c,DAT_1802dbb2c,0x40000000
                                ,"%.3f",0);
          if (cVar6 != '\0') {
            FUN_180159fd0();
            FUN_1800e2378();
          }
          cVar6 = FUN_180148378(&DAT_18035f0eb,&DAT_1804039c0,0x40000);
          if (cVar6 != '\0') {
            FUN_180159fd0();
            FUN_1800e2378();
          }
          cVar6 = FUN_180159cb6(&DAT_18035f51d,&DAT_1804191e0,DAT_1802dbb2c,DAT_1802dbb30);
          if (cVar6 != '\0') {
            FUN_180159fd0();
            FUN_1800e2378();
          }
          if ((DAT_180402a00 == '\x01') &&
             (cVar6 = FUN_180159cb6(&DAT_18035f3c9,&DAT_180404370,DAT_1802dbb2c,DAT_1802dbb30),
             cVar6 != '\0')) {
            FUN_1800e2378();
          }
          cVar6 = (**(code **)(*DAT_180418890 + 0x18))();
          if (cVar6 != '\0') {
            cVar6 = FUN_180159cb6(&DAT_18035f3d6,&DAT_180418ba0,DAT_1802dbb2c,DAT_1802dbb30);
            if (cVar6 != '\0') {
              FUN_1800e2378();
            }
            FUN_18011ab06("%s",&DAT_18035f66d);
          }
          FUN_1801380f1(&DAT_18035f209);
          cVar6 = FUN_1800d0511(&DAT_18035f41c,&DAT_180418c32);
          cVar7 = FUN_1800d0511(&DAT_18035f4b9,&DAT_180418c36);
          cVar8 = (**(code **)(*DAT_180418890 + 0x40))();
          if (((cVar6 != '\0') || (cVar7 != '\0')) || (cVar8 != '\0')) {
            FUN_1800e2378();
          }
          FUN_1801380f1(&DAT_18035f58d);
          puVar12 = _DAT_180418ba8;
          if (DAT_180418bc0 < 0x10) {
            puVar12 = &DAT_180418ba8;
          }
          puVar17 = &DAT_18035f3b8;
          if (DAT_180418bb8 != 0) {
            puVar17 = puVar12;
          }
          cVar6 = FUN_180138722(&DAT_18035f587,puVar17,0);
          if (cVar6 != '\0') {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c)
                 < DAT_180418ca0) && (FUN_18023d500(&DAT_180418ca0), DAT_180418ca0 == -1)) {
              FUN_1800e85a8();
              FUN_18023d710(FUN_1800e86bf);
              _Init_thread_footer(&DAT_180418ca0);
            }
            cVar6 = FUN_180159e6b(0xffffffff,&DAT_18035f3b8,DAT_180418bb8 == 0,0,0);
            if (cVar6 != '\0') {
              DAT_180418bb8 = 0;
              puVar12 = _DAT_180418ba8;
              if (DAT_180418bc0 < 0x10) {
                puVar12 = &DAT_180418ba8;
              }
              *puVar12 = 0;
              FUN_1800e2378();
            }
            if (DAT_180418bb8 == 0) {
              FUN_18011732f();
            }
            ppppppplVar21 = DAT_180418c90;
            local_6268[0] = *DAT_180418c90;
            if ((longlong *******)local_6268[0] != DAT_180418c90) {
              iVar19 = 0;
              do {
                pppppplVar4 = local_6268[0];
                ppppppplVar22 = (longlong *******)(local_6268[0] + 4);
                uVar9 = FUN_18001ba14(ppppppplVar22,&DAT_180418ba8);
                ppppppplVar18 = ppppppplVar22;
                if ((longlong ******)0xf < pppppplVar4[7]) {
                  ppppppplVar18 = (longlong *******)pppppplVar4[4];
                }
                cVar6 = FUN_180159e6b(iVar19,ppppppplVar18,uVar9,0,0);
                if (cVar6 != '\0') {
                  if (ppppppplVar22 != (longlong *******)&DAT_180418ba8) {
                    if ((longlong ******)0xf < pppppplVar4[7]) {
                      ppppppplVar22 = (longlong *******)pppppplVar4[4];
                    }
                    FUN_180017ca0(&DAT_180418ba8,ppppppplVar22,pppppplVar4[6]);
                  }
                  FUN_1800e2378();
                }
                if ((char)uVar9 != '\0') {
                  FUN_18011732f();
                }
                FUN_180016c4c(local_6268);
                iVar19 = iVar19 + 1;
              } while ((longlong *******)local_6268[0] != ppppppplVar21);
            }
            FUN_180138f6c();
          }
          FUN_180154c1a();
        }
        FUN_180152a30();
      }
      FUN_1800e86f2(&DAT_180418b08);
    }
    FUN_18010f900();
  }
  return;
}

