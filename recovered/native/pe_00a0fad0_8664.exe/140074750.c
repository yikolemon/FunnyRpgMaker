/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140074750 */

void FUN_140074750(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  char *pcVar11;
  int *piVar12;
  char ******ppppppcVar13;
  undefined8 ******ppppppuVar14;
  longlong lVar15;
  bool bVar16;
  undefined8 in_stack_fffffffffffffbf8;
  undefined4 uVar18;
  ulonglong uVar17;
  undefined1 local_3f0 [8];
  longlong local_3e8;
  undefined1 local_2e0 [56];
  undefined8 local_2a8;
  int local_2a0 [2];
  undefined8 local_298;
  undefined1 local_230 [24];
  char *****local_218;
  longlong local_210;
  longlong local_208;
  ulonglong local_200;
  longlong local_1f8;
  undefined8 *****local_1a8 [3];
  ulonglong local_190;
  char *****local_188 [3];
  ulonglong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *****local_148 [2];
  longlong local_138;
  ulonglong local_130;
  undefined1 local_128 [16];
  char *****local_118;
  char ***local_110;
  char ***pppcStack_108;
  ulonglong local_100;
  undefined1 local_e0 [24];
  code *local_c8;
  longlong local_c0;
  char *****local_b8;
  char ***pppcStack_b0;
  char ***pppcStack_a8;
  undefined8 local_a0;
  char *****local_90;
  char ****local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 local_6c;
  undefined1 local_6b;
  char local_6a;
  char local_69;
  undefined8 local_68;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffbf8 >> 0x20);
  local_68 = 0xfffffffffffffffe;
  local_c0 = param_1;
  FUN_14005759c(&local_218,&DAT_1401cc178,0);
  FUN_140007025();
  local_118 = (char *****)0xffff00000000;
  ppppppcVar13 = &local_218;
  if (7 < local_200) {
    ppppppcVar13 = (char ******)local_218;
  }
  uVar5 = FUN_1400dcbb0(ppppppcVar13,local_3f0,3,0xffffffff);
  local_110 = (char ***)CONCAT44(local_110._4_4_,uVar5);
  FUN_140007276(&local_118,uVar5,local_3f0);
  iVar2 = (int)local_110;
  local_298 = FUN_140007025();
  local_2a0[0] = iVar2;
  iVar6 = (int)local_118;
  if ((int)local_118 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",local_2a0,&local_218);
    }
    bVar16 = true;
    local_6a = '\0';
  }
  else {
    FUN_140007025();
    if (iVar6 == 1) {
      local_6a = '\0';
      bVar16 = true;
    }
    else {
      local_6b = 1;
      FUN_14005759c(local_1a8,&DAT_1401cc178,0);
      local_69 = 0;
      local_6a = 1;
      ppppppuVar14 = local_1a8;
      if (7 < local_190) {
        ppppppuVar14 = (undefined8 ******)local_1a8[0];
      }
      iVar6 = FUN_1400dcbb0(ppppppuVar14,local_3f0,9,0xffffffff);
      if (iVar6 != 0) {
        local_69 = 1;
        local_6a = 1;
                    /* WARNING: Subroutine does not return */
        FUN_140041f39("file_size",iVar6,local_1a8);
      }
      bVar16 = local_3e8 == 0;
      local_6a = '\x01';
    }
  }
  local_69 = local_6a;
  if (local_6a != '\0') {
    FUN_140005690(local_1a8);
  }
  FUN_140005690(&local_218);
  if (!bVar16) {
    uVar17 = CONCAT44(uVar18,1);
    FUN_14003e638(local_3f0,&DAT_1401cc178,1,0x40,uVar17);
    local_2a8 = 0;
    FUN_1400575e4(local_128,local_3f0,local_2e0,1,uVar17 & 0xffffffffffffff00);
    cVar3 = FUN_14007876a(local_128,&DAT_14016ec8e);
    if (cVar3 != '\0') {
      local_150 = FUN_140057b3c(local_128,&DAT_14016ec8e);
      FUN_1400787be(&local_150,&local_218);
      FUN_140078870(&local_150,local_2a0);
      local_c0 = local_c0 + 8;
      while( true ) {
        cVar3 = FUN_14006b9e2(&local_218,local_2a0);
        if (cVar3 != '\0') break;
        uVar7 = thunk_FUN_14007a0e0(&local_218);
        uVar8 = thunk_FUN_140078920(&local_218);
        cVar3 = FUN_14007876a(uVar8,"mode");
        if (cVar3 != '\0') {
          cVar3 = FUN_14007876a(uVar8,"key");
          if (cVar3 != '\0') {
            uVar9 = FUN_140057b3c(uVar8,"mode");
            FUN_14007a24a(uVar9,local_148);
            lVar1 = local_138;
            local_c8 = (code *)0x0;
            ppppppuVar14 = local_148;
            if (0xf < local_130) {
              ppppppuVar14 = (undefined8 ******)local_148[0];
            }
            if (local_138 != 0) {
              lVar15 = 0;
              do {
                iVar6 = tolower((uint)*(byte *)((longlong)ppppppuVar14 + lVar15));
                *(char *)((longlong)ppppppuVar14 + lVar15) = (char)iVar6;
                lVar15 = lVar15 + 1;
              } while (lVar1 != lVar15);
            }
            cVar3 = FUN_14000d7b8(local_148,&DAT_140170cd3);
            pcVar10 = FUN_1400b200c;
            if (cVar3 == '\0') {
              cVar3 = FUN_14000d7b8(local_148,&DAT_140170c28);
              pcVar10 = FUN_1400b423a;
              if (cVar3 == '\0') {
                cVar3 = FUN_14000d7b8(local_148,&DAT_140170b33);
                pcVar10 = FUN_1400b9e18;
                if (cVar3 == '\0') {
LAB_140074f78:
                  FUN_140006fbc(&local_118,"Invalid mode: ",local_148);
                  FUN_14000b166(local_230,&local_118);
                    /* WARNING: Subroutine does not return */
                  FUN_140106270(local_230,&DAT_14017a4d8);
                }
              }
            }
            local_88 = (char ****)0x0;
            puStack_80 = (undefined1 *)0x0;
            local_78 = (undefined1 *)0x0;
            local_c8 = pcVar10;
            pcVar11 = (char *)FUN_140057b3c(uVar8,"key");
            if (*pcVar11 == '\x02') {
              local_118 = (char *****)FUN_140057b3c(uVar8,"key");
              local_110 = (char ***)0x0;
              pppcStack_108 = (char ***)0x0;
              local_100 = 0x8000000000000000;
              cVar3 = *(char *)local_118;
              if (cVar3 == '\0') {
                local_100 = 1;
              }
              else if (cVar3 == '\x02') {
                pppcStack_108 = *local_118[1];
              }
              else if (cVar3 == '\x01') {
                local_110 = *local_118[1];
              }
              else {
                local_100 = 0;
              }
              pppcStack_b0 = (char ***)0x0;
              pppcStack_a8 = (char ***)0x0;
              local_a0 = 0x8000000000000000;
              local_b8 = local_118;
              if (*(char *)local_118 == '\x02') {
                pppcStack_a8 = local_118[1][1];
              }
              else if (*(char *)local_118 == '\x01') {
                pppcStack_b0 = local_118[1][1];
              }
              else {
                local_a0 = 1;
              }
              while( true ) {
                cVar3 = FUN_14006b9e2(&local_118,&local_b8);
                if (cVar3 != '\0') break;
                uVar8 = FUN_140078920(&local_118);
                FUN_140078a2e(local_188,uVar8,&local_6c);
                piVar12 = (int *)FUN_140113dd4();
                ppppppcVar13 = local_188;
                if (0xf < local_170) {
                  ppppppcVar13 = (char ******)local_188[0];
                }
                *piVar12 = 0;
                uVar4 = FUN_14011b9c4(ppppppcVar13,&local_90,0x10);
                if (ppppppcVar13 == (char ******)local_90) {
                  FUN_1400d9cd0("invalid stoul argument");
                  goto LAB_140074f78;
                }
                if (*piVar12 == 0x22) {
                    /* WARNING: Subroutine does not return */
                  FUN_1400d9d30("stoul argument out of range");
                }
                local_90 = (char *****)CONCAT71(local_90._1_7_,uVar4);
                if (puStack_80 == local_78) {
                  FUN_1400660b8(&local_88,puStack_80,&local_90);
                }
                else {
                  *puStack_80 = uVar4;
                  puStack_80 = puStack_80 + 1;
                }
                FUN_1400017de(local_188);
                if (*(char *)local_118 == '\x02') {
                  pppcStack_108 = pppcStack_108 + 2;
                }
                else if (*(char *)local_118 == '\x01') {
                  local_110 = local_110 + 6;
                }
                else {
                  local_100 = local_100 + 1;
                }
              }
              if (puStack_80[-1] != '\0') {
                local_118 = (char *****)((ulonglong)local_118 & 0xffffffffffffff00);
                if (puStack_80 == local_78) {
                  FUN_1400660b8(&local_88,puStack_80,&local_118);
                }
                else {
                  *puStack_80 = 0;
                  puStack_80 = puStack_80 + 1;
                }
              }
            }
            else {
              uVar8 = FUN_140057b3c(uVar8,"key");
              FUN_14007a24a(uVar8,&local_118);
              local_188[0] = (char *****)&local_118;
              if (0xf < local_100) {
                local_188[0] = local_118;
              }
              local_b8 = (char *****)0x0;
              pppcStack_b0 = (char ***)0x0;
              pppcStack_a8 = (char ***)0x0;
              local_90 = (char *****)((longlong)local_188[0] + (longlong)pppcStack_108);
              FUN_14005872a(&local_b8,pppcStack_108,local_188,&local_90);
              FUN_140016e5c(&local_88);
              local_88 = (char ****)local_b8;
              puStack_80 = (undefined1 *)pppcStack_b0;
              local_78 = (undefined1 *)pppcStack_a8;
              local_b8 = (char *****)0x0;
              pppcStack_b0 = (char ***)0x0;
              pppcStack_a8 = (char ***)0x0;
              FUN_140016e5c(&local_b8);
              local_b8 = (char *****)((ulonglong)local_b8 & 0xffffffffffffff00);
              if (puStack_80 == local_78) {
                FUN_1400660b8(&local_88,puStack_80,&local_b8);
              }
              else {
                *puStack_80 = 0;
                puStack_80 = puStack_80 + 1;
              }
              FUN_1400017de(&local_118);
            }
            local_188[0] = (char *****)((ulonglong)local_188[0] & 0xffffffffffff0000);
            local_b8 = (char *****)0x0;
            local_168 = 0;
            uStack_160 = 0;
            local_158 = 0;
            FUN_14005872a(&local_168,(longlong)puStack_80 - (longlong)local_88,&local_88,&puStack_80
                         );
            FUN_14007441c(&local_118,uVar7,local_188,&local_c8,&local_b8,&local_168);
            FUN_140079616(local_c0,&local_118);
            FUN_140016e5c(local_e0);
            FUN_1400017de(&local_118);
            FUN_140016e5c(&local_88);
            FUN_1400017de(local_148);
          }
        }
        if (*(char *)local_218 == '\x02') {
          local_208 = local_208 + 0x10;
        }
        else if (*(char *)local_218 == '\x01') {
          local_210 = local_210 + 0x30;
        }
        else {
          local_200 = local_200 + 1;
        }
        local_1f8 = local_1f8 + 1;
      }
      FUN_140078a96(local_2a0);
      FUN_140078a96(&local_218);
    }
    FUN_1400578a6(local_128);
    FUN_14003e690(local_3f0);
  }
  return;
}

