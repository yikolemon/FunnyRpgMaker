/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f2e0c */

void FUN_1800f2e0c(undefined8 *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  float fVar16;
  float fVar17;
  int local_1b0;
  int local_1ac;
  undefined *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  char *local_120;
  int local_118 [2];
  undefined8 *local_110 [2];
  char local_100;
  char local_f8;
  char local_f6;
  char local_f5;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  ulonglong local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  int local_88;
  int local_84 [17];
  
  local_84[1] = -2;
  local_84[2] = -1;
  FUN_1801003f2(&local_1b0);
  fVar16 = (float)FUN_180116c08();
  lVar8 = FUN_18010128e();
  fVar17 = *(float *)(lVar8 + 0x50);
  lVar8 = FUN_18010128e();
  fVar2 = *(float *)(lVar8 + 0x70);
  uVar6 = FUN_18005b757(DAT_180402aa8,(longlong)*(int *)*param_1);
  FUN_1801004b6(&local_1b0,uVar6,fVar2 + fVar2 + fVar17 + fVar17 + fVar16);
  uVar6 = DAT_1802ac570;
  while (cVar5 = FUN_180100a32(&local_1b0), iVar7 = local_1b0, cVar5 != '\0') {
    while (local_84[0] = iVar7, iVar7 < local_1ac) {
      uVar9 = (ulonglong)iVar7;
      FUN_18005b3d5(local_138,DAT_180402aa8,(longlong)*(int *)*param_1,(longlong)*(int *)param_1[1],
                    uVar9);
      FUN_18016a67b(0,0);
      FUN_18016a960(0);
      FUN_18013309a(local_128,0);
      FUN_18016a960(1);
      FUN_180111069(&local_e8);
      FUN_1800ffdb5(local_e8);
      local_178 = &DAT_18035f7f6;
      local_170 = 4;
      FUN_1800054e8(&local_e8,&local_178,local_84);
      if (local_f6 == '\x01') {
        if (local_100 == '\x01') {
          local_88 = 0;
          if (local_f5 == '\x01') {
            local_88 = (local_118[0] / 10000) * 10000;
            local_118[0] = local_118[0] % 10000;
          }
          local_a8 = (undefined8 *)0x0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0xf;
          puVar14 = (undefined8 *)local_110[0][1];
          cVar5 = *(char *)((longlong)puVar14 + 0x19);
          puVar10 = local_110[0];
          while (cVar5 == '\0') {
            if (local_118[0] <= *(int *)(puVar14 + 4)) {
              puVar10 = puVar14;
            }
            puVar14 = (undefined8 *)puVar14[(ulonglong)(*(int *)(puVar14 + 4) < local_118[0]) * 2];
            cVar5 = *(char *)((longlong)puVar14 + 0x19);
          }
          if ((*(char *)((longlong)puVar10 + 0x19) == '\0') &&
             (*(int *)(puVar10 + 4) <= local_118[0])) {
            uVar12 = FUN_18007ac02(local_110,local_118);
            local_168 = "[{}]:{}";
            local_160 = 7;
            FUN_1800f2b14(&local_c8,&local_168,local_118,uVar12);
            FUN_180004c8c(&local_a8);
            local_98 = local_b8;
            uStack_90 = uStack_b0;
            local_a8 = (undefined8 *)CONCAT44(uStack_c4,local_c8);
            local_b8 = 0;
            uStack_b0 = 0xf;
            local_c8 = local_c8 & 0xffffff00;
            FUN_180001ef2(&local_c8);
          }
          else {
            local_158 = "[{}]";
            local_150 = 4;
            FUN_1800054e8(&local_c8,&local_158,local_118);
            FUN_180004c8c(&local_a8);
            local_98 = local_b8;
            uStack_90 = uStack_b0;
            local_a8 = (undefined8 *)CONCAT44(uStack_c4,local_c8);
            local_b8 = 0;
            uStack_b0 = 0xf;
            local_c8 = local_c8 & 0xffffff00;
            FUN_180001ef2(&local_c8);
          }
          puVar14 = &local_a8;
          if (0xf < uStack_90) {
            puVar14 = local_a8;
          }
          puVar13 = &local_e8;
          if (0xf < local_d0) {
            puVar13 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
          }
          cVar5 = FUN_180138722(puVar13,puVar14,0);
          puVar14 = local_110[0];
          if (cVar5 != '\0') {
            local_f0 = (undefined8 *)*local_110[0];
            while (iVar7 = local_118[0], local_f0 != puVar14) {
              piVar1 = (int *)(local_f0 + 4);
              iVar3 = *(int *)(local_f0 + 4);
              local_148 = "[{}]:{}";
              local_140 = 7;
              FUN_1800f2b14(&local_c8,&local_148,piVar1,local_f0 + 5);
              puVar15 = &local_c8;
              if (0xf < uStack_b0) {
                puVar15 = (uint *)CONCAT44(uStack_c4,local_c8);
              }
              uVar9 = uVar9 & 0xffffffff00000000;
              cVar5 = FUN_180159e6b(*piVar1,puVar15,iVar3 == iVar7,0,uVar9);
              FUN_180001ef2(&local_c8);
              if (cVar5 != '\0') {
                uVar9 = CONCAT44((int)(uVar9 >> 0x20),*piVar1 + local_88);
                FUN_18005ba93(DAT_180402aa8,(longlong)*(int *)*param_1,(longlong)*(int *)param_1[1],
                              (longlong)local_84[0],uVar9,&DAT_1803861e4);
              }
              if (iVar3 == iVar7) {
                FUN_18011732f();
              }
              FUN_180016c4c(&local_f0);
            }
            FUN_180138f6c();
          }
          FUN_180001ef2(&local_a8);
        }
        else {
          puVar13 = &local_e8;
          if (0xf < local_d0) {
            puVar13 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
          }
          cVar5 = FUN_18013d731(puVar13,local_118,uVar6,0,uVar9 & 0xffffffff00000000,&DAT_18036b4b0,
                                0);
          if (cVar5 != '\0') {
            FUN_18005ba93(DAT_180402aa8,(longlong)*(int *)*param_1,(longlong)*(int *)param_1[1],
                          (longlong)local_84[0],local_118[0],&DAT_1803861e4);
          }
        }
      }
      else if (local_f8 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2c) < DAT_180418e0c) &&
           (FUN_18023d500(&DAT_180418e0c), DAT_180418e0c == -1)) {
          FUN_18023d710(&LAB_1800f37b8);
          _Init_thread_footer(&DAT_180418e0c);
        }
        pcVar4 = local_120;
        sVar11 = strlen(local_120);
        FUN_180017ca0(&DAT_180402d60,pcVar4,sVar11);
        fVar17 = (float)FUN_180116c08();
        lVar8 = FUN_18010128e();
        local_a8 = (undefined8 *)
                   ((ulonglong)(uint)(*(float *)(lVar8 + 0x50) + *(float *)(lVar8 + 0x50) + fVar17)
                   << 0x20);
        puVar13 = &local_e8;
        if (0xf < local_d0) {
          puVar13 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
        }
        FUN_180164b05(puVar13,&DAT_180402d60,&local_a8,0x200,0,0);
      }
      FUN_180001ef2(&local_e8);
      FUN_180068060(local_110);
      iVar7 = local_84[0] + 1;
    }
  }
  thunk_FUN_180100412(&local_1b0);
  return;
}

