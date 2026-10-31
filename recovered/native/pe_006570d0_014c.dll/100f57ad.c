/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f57ad */

/* WARNING: Type propagation algorithm not settling */

int FUN_100f57ad(undefined4 param_1,undefined8 *param_2,char *param_3,uint param_4,int param_5,
                uint param_6)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined8 *puVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  uint uVar24;
  char *pcVar25;
  undefined8 *local_58;
  char *local_54;
  undefined8 *local_50;
  undefined8 *local_4c;
  undefined8 *local_44;
  
  iVar5 = FUN_100f6e4b(param_1,0x4020);
  if ((int)param_6 < 2) {
    param_6 = 1;
  }
  if (0x10000 < (int)param_6) {
    param_6 = 0x10001;
  }
  iVar6 = FUN_100f578c(param_4);
  local_44 = param_2;
  if (param_5 < iVar6) {
    if ((int)param_4 < 0x1000b) {
      if (0x7e000000 < param_4) {
        return 0;
      }
      if (param_4 == 0) {
        if (param_5 < 1) {
          return 0;
        }
LAB_100f63d4:
        *param_3 = '\0';
        return 1;
      }
      uVar24 = *(uint *)(iVar5 + 0x4008);
      *(int *)(iVar5 + 0x4010) = *(int *)(iVar5 + 0x4010) + param_4;
      *(uint *)(iVar5 + 0x4008) = uVar24 + param_4;
      pcVar16 = param_3 + param_5;
      *(undefined4 *)(iVar5 + 0x400c) = 3;
      pcVar25 = param_3;
      if (0xc < param_4) {
        iVar12 = (int)param_2 - uVar24;
        puVar13 = (undefined8 *)((int)param_2 + (param_4 - 0xb));
        iVar6 = FUN_100f759d();
        *(short *)(iVar5 + ((uint)(iVar6 * -0x61c8864f) >> 0x13) * 2) = (short)uVar24;
        puVar18 = (undefined8 *)((int)param_2 + 1);
        iVar6 = FUN_100f759d();
        pcVar11 = (char *)((int)param_2 + (param_4 - 8));
        local_54 = param_3;
LAB_100f6455:
        uVar20 = 1;
        local_4c = (undefined8 *)(param_6 << 6);
        do {
          puVar7 = puVar18;
          puVar18 = (undefined8 *)((int)puVar7 + uVar20);
          pcVar25 = local_54;
          if (puVar13 < puVar18) goto LAB_100f6c1a;
          uVar20 = (uint)local_4c >> 6;
          local_4c = (undefined8 *)((int)local_4c + 1);
          uVar21 = (uint)(iVar6 * -0x61c8864f) >> 0x13;
          uVar15 = (uint)*(ushort *)(iVar5 + uVar21 * 2);
          sVar2 = (short)iVar12;
          local_58 = (undefined8 *)(iVar12 + uVar15);
          iVar6 = FUN_100f759d();
          *(short *)(iVar5 + uVar21 * 2) = (short)puVar7 - sVar2;
          iVar9 = FUN_100f759d();
          iVar10 = FUN_100f759d();
        } while (iVar9 != iVar10);
        local_50 = puVar7;
        if ((uVar15 != uVar24 && -1 < (int)(uVar15 - uVar24)) &&
           (*(char *)((int)puVar7 + -1) == *(char *)((int)local_58 + -1))) {
          puVar18 = (undefined8 *)((int)param_2 + uVar15 + ~uVar24);
          puVar17 = (undefined8 *)((int)puVar7 + -1);
          local_4c = (undefined8 *)((int)puVar7 + -1);
          do {
            puVar7 = puVar17;
            local_58 = puVar18;
            local_50 = local_4c;
            if ((local_58 <= param_2) || (local_4c <= local_44)) break;
            pcVar25 = (char *)((int)local_4c + -1);
            puVar18 = (undefined8 *)((int)local_58 + -1);
            puVar17 = (undefined8 *)((int)puVar7 + -1);
            local_4c = (undefined8 *)((int)local_4c + -1);
          } while (*pcVar25 == *(char *)((int)local_58 + -1));
        }
        uVar20 = (int)puVar7 - (int)local_44;
        if (pcVar16 < local_54 + uVar20 / 0xff + uVar20 + 9) {
          return 0;
        }
        pcVar25 = local_54 + 1;
        if (uVar20 < 0xf) {
          *local_54 = (char)uVar20 << 4;
        }
        else {
          uVar15 = uVar20 - 0xf;
          *local_54 = -0x10;
          if (0xfe < uVar15) {
            uVar15 = (uVar20 - 0x10e) / 0xff;
            _memset(pcVar25,0xff,uVar15 + 1);
            pcVar25 = local_54 + uVar15 + 2;
            uVar15 = (uVar20 + uVar15 * -0xff) - 0x10e;
          }
          *pcVar25 = (char)uVar15;
          pcVar25 = pcVar25 + 1;
        }
        pcVar14 = pcVar25 + uVar20;
        do {
          *(undefined8 *)pcVar25 = *local_44;
          pcVar25 = pcVar25 + 8;
          local_44 = local_44 + 1;
        } while (pcVar25 < pcVar14);
        do {
          thunk_FUN_100f75a8();
          pcVar25 = (char *)((int)local_58 + 4);
          pcVar22 = (char *)((int)local_50 + 4);
          pcVar23 = pcVar22;
          if (pcVar22 < pcVar11) {
            iVar6 = FUN_100f759d();
            iVar9 = FUN_100f759d();
            if (iVar6 == iVar9) {
              pcVar25 = (char *)(local_58 + 1);
              pcVar23 = (char *)(local_50 + 1);
              goto LAB_100f660c;
            }
            pcVar23 = (char *)FUN_100f75ac();
          }
          else {
LAB_100f660c:
            if (pcVar23 < pcVar11) {
              pcVar19 = pcVar23 + (-4 - (int)local_50);
              do {
                iVar6 = FUN_100f759d();
                iVar9 = FUN_100f759d();
                if (iVar6 != iVar9) {
                  iVar6 = FUN_100f75ac();
                  pcVar23 = pcVar19 + iVar6;
                  goto LAB_100f6691;
                }
                pcVar23 = pcVar23 + 4;
                pcVar25 = pcVar25 + 4;
                pcVar19 = pcVar19 + 4;
              } while (pcVar23 < pcVar11);
            }
            if (pcVar23 < (char *)((int)param_2 + (param_4 - 6))) {
              sVar3 = FUN_100f75b3();
              sVar4 = FUN_100f75b3();
              if (sVar3 == sVar4) {
                pcVar23 = pcVar23 + 2;
                pcVar25 = pcVar25 + 2;
              }
            }
            if (pcVar23 < (char *)((int)param_2 + (param_4 - 5))) {
              pcVar23 = pcVar23 + (*pcVar25 == *pcVar23);
            }
            pcVar23 = pcVar23 + -(int)pcVar22;
          }
LAB_100f6691:
          if (pcVar16 < pcVar14 + (uint)(pcVar23 + 0xf0) / 0xff + 8) {
            return 0;
          }
          pcVar25 = pcVar14 + 2;
          if (pcVar23 < (char *)0xf) {
            *local_54 = *local_54 + (char)pcVar23;
          }
          else {
            *local_54 = *local_54 + '\x0f';
            pcVar22 = pcVar23 + -0xf;
            FUN_100f75a5();
            if ((char *)0x3fb < pcVar22) {
              pcVar14 = pcVar14 + 6;
              do {
                pcVar25 = pcVar14;
                FUN_100f75a5();
                pcVar22 = pcVar22 + -0x3fc;
                pcVar14 = pcVar25 + 4;
              } while ((char *)0x3fb < pcVar22);
            }
            uVar20 = (uint)((int)pcVar22 * 0x8081) >> 0x17;
            pcVar14 = pcVar25 + uVar20;
            pcVar25 = pcVar14 + 1;
            *pcVar14 = (char)pcVar22 + (char)uVar20;
          }
          local_44 = (undefined8 *)((int)local_50 + (int)(pcVar23 + 4));
          if (puVar13 <= local_44) break;
          iVar6 = FUN_100f759d();
          *(short *)(iVar5 + ((uint)(iVar6 * -0x61c8864f) >> 0x13) * 2) =
               ((short)((int)local_50 + (int)pcVar23) + 2) - sVar2;
          iVar6 = FUN_100f759d();
          uVar20 = (uint)(iVar6 * -0x61c8864f) >> 0x13;
          local_58 = (undefined8 *)((uint)*(ushort *)(iVar5 + uVar20 * 2) + iVar12);
          *(short *)(iVar5 + uVar20 * 2) = (short)local_44 - sVar2;
          iVar6 = FUN_100f759d();
          iVar9 = FUN_100f759d();
          local_54 = pcVar25;
          if (iVar6 != iVar9) goto code_r0x100f6796;
          pcVar14 = pcVar25 + 1;
          *pcVar25 = '\0';
          local_50 = local_44;
        } while( true );
      }
LAB_100f6c1a:
      uVar24 = (int)param_2 + (param_4 - (int)local_44);
      if (pcVar16 < pcVar25 + uVar24 + (uVar24 + 0xf0) / 0xff + 1) {
        return 0;
      }
      pcVar16 = pcVar25 + 1;
      if (uVar24 < 0xf) {
        *pcVar25 = (char)uVar24 << 4;
      }
      else {
        uVar20 = uVar24 + -0xf;
        *pcVar25 = -0x10;
        if (0xfe < uVar20) {
          uVar20 = (uVar24 + -0x10e) / 0xff;
          _memset(pcVar16,0xff,uVar20 + 1);
          pcVar16 = pcVar25 + uVar20 + 2;
          pcVar25 = pcVar25 + uVar20 + 1;
          uVar20 = uVar24 + uVar20 * -0xff + -0x10e;
        }
        *pcVar16 = (char)uVar20;
        pcVar16 = pcVar25 + 2;
      }
LAB_100f6d7e:
      FUN_1025b2d0(pcVar16,local_44,uVar24);
      pcVar16 = pcVar16 + uVar24;
LAB_100f6e21:
      return (int)pcVar16 - (int)param_3;
    }
    if (param_4 < 0x7e000001) {
      iVar6 = *(int *)(iVar5 + 0x4008);
      *(int *)(iVar5 + 0x4010) = *(int *)(iVar5 + 0x4010) + param_4;
      *(uint *)(iVar5 + 0x4008) = iVar6 + param_4;
      *(uint *)(iVar5 + 0x400c) = (param_2 < (undefined8 *)0x10000) + 1;
      iVar12 = FUN_100f759d();
      uVar24 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
      if (param_2 < (undefined8 *)0x10000) {
        *(int *)(iVar5 + uVar24 * 4) = iVar6;
      }
      else {
        *(undefined8 **)(iVar5 + uVar24 * 4) = param_2;
      }
      iVar6 = (int)param_2 - iVar6;
      pcVar25 = param_3 + param_5;
      puVar13 = (undefined8 *)((int)param_2 + (param_4 - 0xb));
      puVar18 = (undefined8 *)((int)param_2 + 1);
      iVar12 = FUN_100f759d();
      uVar24 = param_6 * 0x40 + 1;
      pcVar16 = (char *)((int)param_2 + (param_4 - 8));
      local_54 = param_3;
LAB_100f5a57:
      uVar20 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
      puVar7 = (undefined8 *)((int)puVar18 + 1);
      if (param_2 < (undefined8 *)0x10000) {
        uVar15 = param_6;
        uVar21 = uVar24;
        if (puVar7 <= puVar13) {
          do {
            puVar17 = puVar7;
            iVar12 = *(int *)(iVar5 + uVar20 * 4);
            iVar9 = FUN_100f759d();
            *(int *)(iVar5 + uVar20 * 4) = (int)puVar18 - iVar6;
            if ((uint)((int)puVar18 - iVar6) <= iVar12 + 0xffffU) {
              puVar7 = (undefined8 *)(iVar12 + iVar6);
              iVar12 = FUN_100f759d();
              iVar10 = FUN_100f759d();
              if (iVar12 == iVar10) goto LAB_100f5ba1;
            }
            uVar20 = (uint)(iVar9 * -0x61c8864f) >> 0x14;
            puVar7 = (undefined8 *)((int)puVar17 + uVar15);
            uVar15 = uVar21 >> 6;
            uVar21 = uVar21 + 1;
            puVar18 = puVar17;
            if (puVar13 < puVar7) break;
          } while( true );
        }
      }
      else {
        uVar15 = param_6;
        uVar21 = uVar24;
        if (puVar7 <= puVar13) {
          do {
            puVar17 = puVar7;
            puVar7 = (undefined8 *)FUN_100f7599();
            iVar12 = FUN_100f759d();
            *(undefined8 **)(iVar5 + uVar20 * 4) = puVar18;
            if (puVar18 <= (undefined8 *)((int)puVar7 + 0xffff)) {
              iVar9 = FUN_100f759d();
              iVar10 = FUN_100f759d();
              if (iVar9 == iVar10) goto LAB_100f5ba1;
            }
            uVar20 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
            puVar7 = (undefined8 *)((int)puVar17 + uVar15);
            uVar15 = uVar21 >> 6;
            uVar21 = uVar21 + 1;
            puVar18 = puVar17;
            if (puVar13 < puVar7) break;
          } while( true );
        }
      }
LAB_100f6cbc:
      uVar24 = (int)param_2 + (param_4 - (int)local_44);
      if (local_54 + uVar24 + (uVar24 + 0xf0) / 0xff + 1 <= pcVar25) {
        pcVar16 = local_54 + 1;
        if (uVar24 < 0xf) {
          *local_54 = (char)uVar24 << 4;
        }
        else {
          uVar20 = uVar24 + -0xf;
          *local_54 = -0x10;
          if (0xfe < uVar20) {
            uVar20 = (uVar24 + -0x10e) / 0xff;
            _memset(pcVar16,0xff,uVar20 + 1);
            pcVar16 = local_54 + uVar20 + 2;
            local_54 = local_54 + uVar20 + 1;
            uVar20 = uVar24 + uVar20 * -0xff + -0x10e;
          }
          *pcVar16 = (char)uVar20;
          pcVar16 = local_54 + 2;
        }
        goto LAB_100f6d7e;
      }
    }
  }
  else if ((int)param_4 < 0x1000b) {
    if (param_4 < 0x7e000001) {
      if (param_4 == 0) goto LAB_100f63d4;
      uVar24 = *(uint *)(iVar5 + 0x4008);
      *(int *)(iVar5 + 0x4010) = *(int *)(iVar5 + 0x4010) + param_4;
      *(uint *)(iVar5 + 0x4008) = uVar24 + param_4;
      *(undefined4 *)(iVar5 + 0x400c) = 3;
      local_54 = param_3;
      if (0xc < param_4) {
        iVar6 = (int)param_2 - uVar24;
        puVar18 = (undefined8 *)((int)param_2 + (param_4 - 0xb));
        iVar12 = FUN_100f759d();
        *(short *)(iVar5 + ((uint)(iVar12 * -0x61c8864f) >> 0x13) * 2) = (short)uVar24;
        iVar12 = FUN_100f759d();
        pcVar16 = (char *)((int)param_2 + (param_4 - 8));
LAB_100f688d:
        uVar20 = 1;
        puVar13 = (undefined8 *)((int)local_44 + 1);
        local_58 = (undefined8 *)(param_6 << 6);
        do {
          puVar7 = puVar13;
          puVar13 = (undefined8 *)((int)puVar7 + uVar20);
          if (puVar18 < puVar13) goto LAB_100f58c8;
          uVar20 = (uint)local_58 >> 6;
          local_58 = (undefined8 *)((int)local_58 + 1);
          uVar21 = (uint)(iVar12 * -0x61c8864f) >> 0x13;
          uVar15 = (uint)*(ushort *)(iVar5 + uVar21 * 2);
          sVar2 = (short)iVar6;
          local_50 = (undefined8 *)(iVar6 + uVar15);
          iVar12 = FUN_100f759d();
          *(short *)(iVar5 + uVar21 * 2) = (short)puVar7 - sVar2;
          iVar9 = FUN_100f759d();
          iVar10 = FUN_100f759d();
        } while (iVar9 != iVar10);
        puVar13 = puVar7;
        if ((uVar15 != uVar24 && -1 < (int)(uVar15 - uVar24)) &&
           (*(char *)((int)puVar7 + -1) == *(char *)((int)local_50 + -1))) {
          puVar17 = (undefined8 *)((int)puVar7 + -1);
          puVar8 = (undefined8 *)((int)param_2 + uVar15 + ~uVar24);
          local_58 = (undefined8 *)((int)puVar7 + -1);
          do {
            local_50 = puVar8;
            puVar7 = puVar17;
            puVar13 = local_58;
            if ((local_50 <= param_2) || (local_58 <= local_44)) break;
            pcVar25 = (char *)((int)local_58 + -1);
            puVar17 = (undefined8 *)((int)puVar7 + -1);
            puVar8 = (undefined8 *)((int)local_50 + -1);
            local_58 = (undefined8 *)((int)local_58 + -1);
          } while (*pcVar25 == *(char *)((int)local_50 + -1));
        }
        uVar20 = (int)puVar7 - (int)local_44;
        pcVar25 = local_54 + 1;
        if (uVar20 < 0xf) {
          *local_54 = (char)uVar20 << 4;
        }
        else {
          uVar15 = uVar20 - 0xf;
          *local_54 = -0x10;
          if (0xfe < uVar15) {
            uVar15 = (uVar20 - 0x10e) / 0xff;
            _memset(pcVar25,0xff,uVar15 + 1);
            pcVar25 = local_54 + uVar15 + 2;
            uVar15 = (uVar20 + uVar15 * -0xff) - 0x10e;
          }
          *pcVar25 = (char)uVar15;
          pcVar25 = pcVar25 + 1;
        }
        pcVar11 = pcVar25 + uVar20;
        do {
          *(undefined8 *)pcVar25 = *local_44;
          pcVar25 = pcVar25 + 8;
          local_44 = local_44 + 1;
        } while (pcVar25 < pcVar11);
        do {
          thunk_FUN_100f75a8();
          pcVar25 = pcVar11 + 2;
          pcVar22 = (char *)((int)local_50 + 4);
          pcVar14 = (char *)((int)puVar13 + 4);
          pcVar23 = pcVar14;
          if (pcVar14 < pcVar16) {
            iVar12 = FUN_100f759d();
            iVar9 = FUN_100f759d();
            if (iVar12 == iVar9) {
              pcVar22 = (char *)(local_50 + 1);
              pcVar23 = (char *)(puVar13 + 1);
              goto LAB_100f6a64;
            }
            uVar20 = FUN_100f75ac();
            puVar13 = (undefined8 *)((int)puVar13 + uVar20 + 4);
LAB_100f6b17:
            *local_54 = *local_54 + (char)uVar20;
          }
          else {
LAB_100f6a64:
            for (; pcVar23 < pcVar16; pcVar23 = pcVar23 + 4) {
              iVar12 = FUN_100f759d();
              iVar9 = FUN_100f759d();
              if (iVar12 != iVar9) {
                iVar12 = FUN_100f75ac();
                pcVar23 = pcVar23 + iVar12;
                goto LAB_100f6ab1;
              }
              pcVar22 = pcVar22 + 4;
            }
            if (pcVar23 < (char *)((int)param_2 + (param_4 - 6))) {
              sVar3 = FUN_100f75b3();
              sVar4 = FUN_100f75b3();
              if (sVar3 == sVar4) {
                pcVar23 = pcVar23 + 2;
                pcVar22 = pcVar22 + 2;
              }
            }
            if (pcVar23 < (char *)((int)param_2 + (param_4 - 5))) {
              pcVar23 = pcVar23 + (*pcVar22 == *pcVar23);
            }
LAB_100f6ab1:
            uVar20 = (int)pcVar23 - (int)pcVar14;
            puVar13 = (undefined8 *)((int)puVar13 + uVar20 + 4);
            if (uVar20 < 0xf) goto LAB_100f6b17;
            *local_54 = *local_54 + '\x0f';
            uVar20 = uVar20 - 0xf;
            FUN_100f75a5();
            if (0x3fb < uVar20) {
              pcVar11 = pcVar11 + 6;
              do {
                pcVar25 = pcVar11;
                FUN_100f75a5();
                uVar20 = uVar20 - 0x3fc;
                pcVar11 = pcVar25 + 4;
              } while (0x3fb < uVar20);
            }
            uVar15 = uVar20 * 0x8081 >> 0x17;
            pcVar11 = pcVar25 + uVar15;
            pcVar25 = pcVar11 + 1;
            *pcVar11 = (char)uVar20 + (char)uVar15;
          }
          local_54 = pcVar25;
          local_44 = puVar13;
          if (puVar18 <= puVar13) break;
          iVar12 = FUN_100f759d();
          *(short *)(iVar5 + ((uint)(iVar12 * -0x61c8864f) >> 0x13) * 2) =
               ((short)puVar13 + -2) - sVar2;
          iVar12 = FUN_100f759d();
          uVar20 = (uint)(iVar12 * -0x61c8864f) >> 0x13;
          local_50 = (undefined8 *)((uint)*(ushort *)(iVar5 + uVar20 * 2) + iVar6);
          *(short *)(iVar5 + uVar20 * 2) = (short)puVar13 - sVar2;
          iVar12 = FUN_100f759d();
          iVar9 = FUN_100f759d();
          if (iVar12 != iVar9) goto code_r0x100f6b8b;
          pcVar11 = pcVar25 + 1;
          *pcVar25 = '\0';
        } while( true );
      }
LAB_100f58c8:
      uVar24 = (int)param_2 + (param_4 - (int)local_44);
      pcVar16 = local_54 + 1;
      if (uVar24 < 0xf) {
        *local_54 = (char)uVar24 << 4;
      }
      else {
        uVar20 = uVar24 + -0xf;
        *local_54 = -0x10;
        if (0xfe < uVar20) {
          uVar20 = (uVar24 + -0x10e) / 0xff;
          _memset(local_54 + 1,0xff,uVar20 + 1);
          pcVar16 = local_54 + uVar20 + 2;
          local_54 = local_54 + uVar20 + 1;
          uVar20 = uVar24 + uVar20 * -0xff + -0x10e;
        }
        *pcVar16 = (char)uVar20;
        pcVar16 = local_54 + 2;
      }
      goto LAB_100f6d7e;
    }
  }
  else if (param_4 < 0x7e000001) {
    iVar6 = *(int *)(iVar5 + 0x4008);
    *(int *)(iVar5 + 0x4010) = *(int *)(iVar5 + 0x4010) + param_4;
    *(uint *)(iVar5 + 0x4008) = iVar6 + param_4;
    *(uint *)(iVar5 + 0x400c) = (param_2 < (undefined8 *)0x10000) + 1;
    iVar12 = FUN_100f759d();
    uVar24 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
    if (param_2 < (undefined8 *)0x10000) {
      *(int *)(iVar5 + uVar24 * 4) = iVar6;
    }
    else {
      *(undefined8 **)(iVar5 + uVar24 * 4) = param_2;
    }
    iVar6 = (int)param_2 - iVar6;
    puVar13 = (undefined8 *)((int)param_2 + (param_4 - 0xb));
    iVar12 = FUN_100f759d();
    uVar24 = param_6 * 0x40 + 1;
    pcVar16 = (char *)((int)param_2 + (param_4 - 8));
    local_54 = param_3;
    puVar18 = param_2;
LAB_100f5f6a:
    puVar17 = (undefined8 *)((int)puVar18 + 1);
    uVar20 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
    puVar7 = (undefined8 *)((int)puVar18 + 2);
    if (param_2 < (undefined8 *)0x10000) {
      uVar15 = param_6;
      uVar21 = uVar24;
      if (puVar7 <= puVar13) {
        do {
          puVar8 = puVar7;
          iVar12 = *(int *)(iVar5 + uVar20 * 4);
          iVar9 = FUN_100f759d();
          *(int *)(iVar5 + uVar20 * 4) = (int)puVar17 - iVar6;
          if ((uint)((int)puVar17 - iVar6) <= iVar12 + 0xffffU) {
            puVar7 = (undefined8 *)(iVar12 + iVar6);
            iVar12 = FUN_100f759d();
            iVar10 = FUN_100f759d();
            if (iVar12 == iVar10) goto LAB_100f60a2;
          }
          uVar20 = (uint)(iVar9 * -0x61c8864f) >> 0x14;
          puVar7 = (undefined8 *)((int)puVar8 + uVar15);
          uVar15 = uVar21 >> 6;
          puVar17 = puVar8;
          uVar21 = uVar21 + 1;
          if (puVar13 < puVar7) break;
        } while( true );
      }
    }
    else {
      uVar15 = param_6;
      uVar21 = uVar24;
      if (puVar7 <= puVar13) {
        do {
          puVar8 = puVar7;
          puVar7 = (undefined8 *)FUN_100f7599();
          iVar12 = FUN_100f759d();
          *(undefined8 **)(iVar5 + uVar20 * 4) = puVar17;
          if (puVar17 <= (undefined8 *)((int)puVar7 + 0xffff)) {
            iVar9 = FUN_100f759d();
            iVar10 = FUN_100f759d();
            if (iVar9 == iVar10) goto LAB_100f60a2;
          }
          uVar20 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
          puVar7 = (undefined8 *)((int)puVar8 + uVar15);
          uVar15 = uVar21 >> 6;
          puVar17 = puVar8;
          uVar21 = uVar21 + 1;
          if (puVar13 < puVar7) break;
        } while( true );
      }
    }
LAB_100f6d96:
    uVar24 = (int)param_2 + (param_4 - (int)puVar18);
    pcVar16 = local_54 + 1;
    if (uVar24 < 0xf) {
      *local_54 = (char)uVar24 << 4;
    }
    else {
      uVar20 = uVar24 + -0xf;
      *local_54 = -0x10;
      pcVar25 = pcVar16;
      if (0xfe < uVar20) {
        uVar20 = (uVar24 + -0x10e) / 0xff;
        _memset(pcVar16,0xff,uVar20 + 1);
        pcVar25 = local_54 + uVar20 + 2;
        local_54 = local_54 + uVar20 + 1;
        uVar20 = uVar24 + uVar20 * -0xff + -0x10e;
      }
      pcVar16 = local_54 + 2;
      *pcVar25 = (char)uVar20;
    }
    FUN_1025b2d0(pcVar16,puVar18,uVar24);
    pcVar16 = pcVar16 + uVar24;
    goto LAB_100f6e21;
  }
  return 0;
LAB_100f60a2:
  if ((param_2 < puVar7) &&
     (puVar8 = puVar17, puVar1 = puVar7, *(char *)((int)puVar17 + -1) == *(char *)((int)puVar7 + -1)
     )) {
    while( true ) {
      puVar7 = (undefined8 *)((int)puVar1 + -1);
      puVar17 = (undefined8 *)((int)puVar8 + -1);
      if (puVar7 <= param_2) break;
      if ((puVar17 <= puVar18) ||
         (pcVar25 = (char *)((int)puVar8 + -2), pcVar11 = (char *)((int)puVar1 + -2),
         puVar8 = puVar17, puVar1 = puVar7, *pcVar25 != *pcVar11)) break;
    }
  }
  uVar20 = (int)puVar17 - (int)puVar18;
  pcVar25 = local_54 + 1;
  if (uVar20 < 0xf) {
    *local_54 = (char)uVar20 << 4;
  }
  else {
    uVar15 = uVar20 - 0xf;
    *local_54 = -0x10;
    if (0xfe < uVar15) {
      uVar15 = (uVar20 - 0x10e) / 0xff;
      _memset(pcVar25,0xff,uVar15 + 1);
      pcVar25 = local_54 + uVar15 + 2;
      uVar15 = (uVar20 + uVar15 * -0xff) - 0x10e;
    }
    *pcVar25 = (char)uVar15;
    pcVar25 = pcVar25 + 1;
  }
  pcVar11 = pcVar25 + uVar20;
  do {
    *(undefined8 *)pcVar25 = *puVar18;
    pcVar25 = pcVar25 + 8;
    puVar18 = puVar18 + 1;
  } while (pcVar25 < pcVar11);
  do {
    thunk_FUN_100f75a8();
    pcVar25 = pcVar11 + 2;
    pcVar14 = (char *)((int)puVar7 + 4);
    pcVar23 = (char *)((int)puVar17 + 4);
    pcVar22 = pcVar23;
    if (pcVar23 < pcVar16) {
      iVar12 = FUN_100f759d();
      iVar9 = FUN_100f759d();
      if (iVar12 == iVar9) {
        pcVar14 = (char *)(puVar7 + 1);
        pcVar22 = (char *)(puVar17 + 1);
        goto LAB_100f619c;
      }
      uVar20 = FUN_100f75ac();
      puVar17 = (undefined8 *)((int)puVar17 + uVar20 + 4);
LAB_100f6256:
      *local_54 = *local_54 + (char)uVar20;
      local_54 = pcVar25;
    }
    else {
LAB_100f619c:
      for (; pcVar22 < pcVar16; pcVar22 = pcVar22 + 4) {
        iVar12 = FUN_100f759d();
        iVar9 = FUN_100f759d();
        if (iVar12 != iVar9) {
          iVar12 = FUN_100f75ac();
          pcVar22 = pcVar22 + iVar12;
          goto LAB_100f61f9;
        }
        pcVar14 = pcVar14 + 4;
      }
      if (pcVar22 < (char *)((int)param_2 + (param_4 - 6))) {
        sVar2 = FUN_100f75b3();
        sVar3 = FUN_100f75b3();
        if (sVar2 == sVar3) {
          pcVar22 = pcVar22 + 2;
          pcVar14 = pcVar14 + 2;
        }
      }
      if (pcVar22 < (char *)((int)param_2 + (param_4 - 5))) {
        pcVar22 = pcVar22 + (*pcVar14 == *pcVar22);
      }
LAB_100f61f9:
      uVar20 = (int)pcVar22 - (int)pcVar23;
      puVar17 = (undefined8 *)((int)puVar17 + uVar20 + 4);
      if (uVar20 < 0xf) goto LAB_100f6256;
      *local_54 = *local_54 + '\x0f';
      uVar20 = uVar20 - 0xf;
      FUN_100f75a5();
      if (0x3fb < uVar20) {
        pcVar11 = pcVar11 + 6;
        do {
          pcVar25 = pcVar11;
          FUN_100f75a5();
          uVar20 = uVar20 - 0x3fc;
          pcVar11 = pcVar25 + 4;
        } while (0x3fb < uVar20);
      }
      uVar15 = uVar20 * 0x8081 >> 0x17;
      pcVar25[uVar15] = (char)uVar20 + (char)uVar15;
      local_54 = pcVar25 + uVar15 + 1;
    }
    puVar18 = puVar17;
    if (puVar13 <= puVar17) goto LAB_100f6d96;
    iVar12 = FUN_100f759d();
    uVar20 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
    if (param_2 < (undefined8 *)0x10000) {
      *(int *)(iVar5 + uVar20 * 4) = ((int)puVar17 + -2) - iVar6;
      iVar12 = FUN_100f759d();
      uVar20 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
      iVar12 = *(int *)(iVar5 + uVar20 * 4);
      *(int *)(iVar5 + uVar20 * 4) = (int)puVar17 - iVar6;
      if (iVar12 + 0xffffU < (uint)((int)puVar17 - iVar6)) break;
      puVar7 = (undefined8 *)(iVar12 + iVar6);
    }
    else {
      *(int *)(iVar5 + uVar20 * 4) = (int)puVar17 + -2;
      iVar12 = FUN_100f759d();
      puVar7 = (undefined8 *)FUN_100f7599();
      *(undefined8 **)(iVar5 + ((uint)(iVar12 * -0x61c8864f) >> 0x14) * 4) = puVar17;
      if ((undefined8 *)((int)puVar7 + 0xffff) < puVar17) break;
    }
    iVar12 = FUN_100f759d();
    iVar9 = FUN_100f759d();
    if (iVar12 != iVar9) break;
    pcVar11 = local_54 + 1;
    *local_54 = '\0';
  } while( true );
  iVar12 = FUN_100f759d();
  goto LAB_100f5f6a;
code_r0x100f6b8b:
  iVar12 = FUN_100f759d();
  goto LAB_100f688d;
code_r0x100f6796:
  puVar18 = (undefined8 *)((int)local_50 + (int)pcVar23 + 5);
  iVar6 = FUN_100f759d();
  goto LAB_100f6455;
LAB_100f5ba1:
  if ((param_2 < puVar7) &&
     (puVar17 = puVar18, puVar8 = puVar7,
     *(char *)((int)puVar18 + -1) == *(char *)((int)puVar7 + -1))) {
    while( true ) {
      puVar7 = (undefined8 *)((int)puVar8 + -1);
      puVar18 = (undefined8 *)((int)puVar17 + -1);
      if (puVar7 <= param_2) break;
      if ((puVar18 <= local_44) ||
         (pcVar11 = (char *)((int)puVar17 + -2), pcVar14 = (char *)((int)puVar8 + -2),
         puVar17 = puVar18, puVar8 = puVar7, *pcVar11 != *pcVar14)) break;
    }
  }
  uVar20 = (int)puVar18 - (int)local_44;
  if (pcVar25 < local_54 + uVar20 / 0xff + uVar20 + 9) {
    return 0;
  }
  pcVar11 = local_54 + 1;
  if (uVar20 < 0xf) {
    *local_54 = (char)uVar20 << 4;
  }
  else {
    uVar15 = uVar20 - 0xf;
    *local_54 = -0x10;
    if (0xfe < uVar15) {
      uVar15 = (uVar20 - 0x10e) / 0xff;
      _memset(pcVar11,0xff,uVar15 + 1);
      pcVar11 = local_54 + uVar15 + 2;
      uVar15 = (uVar20 + uVar15 * -0xff) - 0x10e;
    }
    *pcVar11 = (char)uVar15;
    pcVar11 = pcVar11 + 1;
  }
  pcVar14 = pcVar11 + uVar20;
  do {
    *(undefined8 *)pcVar11 = *local_44;
    pcVar11 = pcVar11 + 8;
    local_44 = local_44 + 1;
  } while (pcVar11 < pcVar14);
  do {
    thunk_FUN_100f75a8();
    pcVar11 = (char *)((int)puVar7 + 4);
    pcVar23 = (char *)((int)puVar18 + 4);
    pcVar22 = pcVar23;
    if (pcVar23 < pcVar16) {
      iVar12 = FUN_100f759d();
      iVar9 = FUN_100f759d();
      if (iVar12 == iVar9) {
        pcVar11 = (char *)(puVar7 + 1);
        pcVar22 = (char *)(puVar18 + 1);
        goto LAB_100f5cb2;
      }
      pcVar22 = (char *)FUN_100f75ac();
    }
    else {
LAB_100f5cb2:
      if (pcVar22 < pcVar16) {
        pcVar19 = pcVar22 + (-4 - (int)puVar18);
        do {
          iVar12 = FUN_100f759d();
          iVar9 = FUN_100f759d();
          if (iVar12 != iVar9) {
            iVar12 = FUN_100f75ac();
            pcVar22 = pcVar19 + iVar12;
            goto LAB_100f5d40;
          }
          pcVar22 = pcVar22 + 4;
          pcVar11 = pcVar11 + 4;
          pcVar19 = pcVar19 + 4;
        } while (pcVar22 < pcVar16);
      }
      if (pcVar22 < (char *)((int)param_2 + (param_4 - 6))) {
        sVar2 = FUN_100f75b3();
        sVar3 = FUN_100f75b3();
        if (sVar2 == sVar3) {
          pcVar22 = pcVar22 + 2;
          pcVar11 = pcVar11 + 2;
        }
      }
      if (pcVar22 < (char *)((int)param_2 + (param_4 - 5))) {
        pcVar22 = pcVar22 + (*pcVar11 == *pcVar22);
      }
      pcVar22 = pcVar22 + -(int)pcVar23;
    }
LAB_100f5d40:
    if (pcVar25 < pcVar14 + (uint)(pcVar22 + 0xf0) / 0xff + 8) {
      return 0;
    }
    pcVar11 = pcVar14 + 2;
    if (pcVar22 < (char *)0xf) {
      *local_54 = *local_54 + (char)pcVar22;
      local_54 = pcVar11;
    }
    else {
      *local_54 = *local_54 + '\x0f';
      pcVar23 = pcVar22 + -0xf;
      FUN_100f75a5();
      if ((char *)0x3fb < pcVar23) {
        pcVar14 = pcVar14 + 6;
        do {
          pcVar11 = pcVar14;
          FUN_100f75a5();
          pcVar23 = pcVar23 + -0x3fc;
          pcVar14 = pcVar11 + 4;
        } while ((char *)0x3fb < pcVar23);
      }
      uVar20 = (uint)((int)pcVar23 * 0x8081) >> 0x17;
      pcVar11[uVar20] = (char)pcVar23 + (char)uVar20;
      local_54 = pcVar11 + uVar20 + 1;
    }
    local_44 = (undefined8 *)((int)puVar18 + (int)(pcVar22 + 4));
    if (puVar13 <= local_44) goto LAB_100f6cbc;
    iVar12 = FUN_100f759d();
    uVar20 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
    if (param_2 < (undefined8 *)0x10000) {
      *(int *)(iVar5 + uVar20 * 4) = ((int)puVar18 + (int)(pcVar22 + 2)) - iVar6;
      iVar12 = FUN_100f759d();
      uVar20 = (uint)(iVar12 * -0x61c8864f) >> 0x14;
      iVar12 = *(int *)(iVar5 + uVar20 * 4);
      *(int *)(iVar5 + uVar20 * 4) = (int)local_44 - iVar6;
      if (iVar12 + 0xffffU < (uint)((int)local_44 - iVar6)) break;
      puVar7 = (undefined8 *)(iVar12 + iVar6);
    }
    else {
      *(int *)(iVar5 + uVar20 * 4) = (int)puVar18 + (int)(pcVar22 + 2);
      iVar12 = FUN_100f759d();
      puVar7 = (undefined8 *)FUN_100f7599();
      *(undefined8 **)(iVar5 + ((uint)(iVar12 * -0x61c8864f) >> 0x14) * 4) = local_44;
      if ((undefined8 *)((int)puVar7 + 0xffff) < local_44) break;
    }
    iVar12 = FUN_100f759d();
    iVar9 = FUN_100f759d();
    if (iVar12 != iVar9) break;
    pcVar14 = local_54 + 1;
    *local_54 = '\0';
    puVar18 = local_44;
  } while( true );
  puVar18 = (undefined8 *)((int)puVar18 + (int)(pcVar22 + 5));
  iVar12 = FUN_100f759d();
  goto LAB_100f5a57;
}

