/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140109670 */

undefined8
FUN_140109670(undefined8 param_1,ushort param_2,uint *param_3,longlong *param_4,longlong *param_5,
             undefined **param_6,char param_7)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  undefined8 uVar11;
  short *psVar12;
  bool bVar13;
  bool bVar14;
  int local_res10 [2];
  int local_38 [4];
  
  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      __tzset();
      lVar7 = FUN_1401228e4();
      psVar10 = *(short **)((ulonglong)(-(uint)(param_3[8] != 0) & 8) + lVar7);
      lVar7 = *param_5;
      while( true ) {
        if (lVar7 == 0) {
          return 1;
        }
        sVar1 = *psVar10;
        if (sVar1 == 0) break;
        psVar10 = psVar10 + 1;
        *(short *)*param_4 = sVar1;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      return 1;
    }
    if (param_2 < 0x4e) {
      if (param_2 == 0x4d) {
        uVar8 = param_3[1];
        bVar13 = uVar8 < 0x3b;
        bVar14 = uVar8 == 0x3b;
LAB_1401097ee:
        if (!bVar13 && !bVar14) {
LAB_140109a9c:
          puVar6 = (undefined4 *)FUN_140113dd4();
          *puVar6 = 0x16;
          FUN_140120ee8();
          return 0;
        }
        goto LAB_140109723;
      }
      if (param_2 == 0x25) {
        psVar10 = &DAT_140174958;
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      if (param_2 == 0x41) {
        if (param_3[6] < 7) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[6] + 0x33];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_140109a9c;
      }
      if (param_2 == 0x42) {
        if (param_3[4] < 0xc) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[4] + 0x46];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_140109a9c;
      }
      if (param_2 == 0x43) {
        if (9999 < param_3[5] + 0x76c) goto LAB_140109a9c;
        uVar8 = (int)(param_3[5] + 0x76c) / 100;
LAB_140109723:
        uVar11 = 2;
LAB_14010972f:
        FUN_140109428(uVar8,uVar11);
        return 1;
      }
      if (param_2 == 0x44) {
        cVar2 = FUN_140109670(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_140109848;
        psVar12 = &DAT_140174930;
        lVar7 = *param_5;
        for (psVar10 = &DAT_140174930; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_140109670(param_1,100,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_140109848;
        lVar7 = *param_5;
        for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
          *(short *)*param_4 = *psVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        uVar11 = 0x79;
      }
      else {
        if (param_2 != 0x46) {
          if (param_2 == 0x47) {
            uVar8 = param_3[5];
            if (9999 < uVar8 + 0x76c) goto LAB_140109a9c;
            iVar4 = FUN_140109578(uVar8,param_3[6],param_3[7]);
            if (iVar4 == 0) {
              uVar8 = uVar8 - 1;
            }
            else if (iVar4 < 1) {
              uVar8 = uVar8 + 1;
            }
            uVar8 = uVar8 + 0x76c;
LAB_140109f93:
            uVar11 = 4;
            goto LAB_14010972f;
          }
          if (param_2 == 0x48) {
            uVar8 = param_3[2];
            bVar13 = uVar8 < 0x17;
            bVar14 = uVar8 == 0x17;
            goto LAB_1401097ee;
          }
          if (param_2 != 0x49) {
            return 0;
          }
          if (0x17 < param_3[2]) goto LAB_140109a9c;
          uVar8 = (int)param_3[2] % 0xc;
          if (uVar8 == 0) {
            uVar8 = 0xc;
          }
          goto LAB_140109723;
        }
        cVar2 = FUN_140109670(param_1,0x59,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_140109848;
        psVar12 = &DAT_140174938;
        lVar7 = *param_5;
        for (psVar10 = &DAT_140174938; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_140109670(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_140109848;
        lVar7 = *param_5;
        for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
          *(short *)*param_4 = *psVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        uVar11 = 100;
      }
    }
    else if (param_2 == 0x52) {
      cVar2 = FUN_140109670(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_140109848;
      lVar7 = *param_5;
      for (psVar10 = &DAT_14017492c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      uVar11 = 0x4d;
    }
    else {
      if (param_2 == 0x53) {
        uVar8 = *param_3;
        bVar13 = uVar8 < 0x3c;
        bVar14 = uVar8 == 0x3c;
        goto LAB_1401097ee;
      }
      if (param_2 != 0x54) {
        if (param_2 != 0x55) {
          if (param_2 == 0x56) {
            uVar8 = param_3[6];
            uVar9 = param_3[5];
            uVar5 = FUN_140109578(uVar9,uVar8,param_3[7]);
            if (uVar5 == 0) {
              bVar3 = __crt_time_is_leap_year<>(uVar9 - 1);
              uVar8 = FUN_140109578(uVar9 - 1,(uVar8 - param_3[7]) + 7,bVar3 + 0x16d);
            }
            else {
              uVar8 = 1;
              if (0 < (int)uVar5) {
                uVar8 = uVar5;
              }
            }
            goto LAB_140109723;
          }
          if (param_2 != 0x57) {
            if (param_2 != 0x58) {
              if (param_2 != 0x59) {
                return 0;
              }
              uVar8 = param_3[5] + 0x76c;
              if (9999 < uVar8) goto LAB_140109a9c;
              goto LAB_140109f93;
            }
            goto LAB_1401099ef;
          }
        }
        uVar9 = param_3[6];
        if (6 < uVar9) goto LAB_140109a9c;
        if (param_2 == 0x57) {
          if (uVar9 == 0) {
            uVar9 = 6;
          }
          else {
            uVar9 = uVar9 - 1;
          }
        }
        uVar5 = param_3[7];
        if (0x16d < uVar5) goto LAB_140109a9c;
        uVar8 = 0;
        if (((int)uVar9 <= (int)uVar5) && (uVar8 = (int)uVar5 / 7, (int)uVar9 <= (int)uVar5 % 7)) {
          uVar8 = (int)uVar5 / 7 + 1;
        }
        goto LAB_140109723;
      }
      cVar2 = FUN_140109670(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_140109848;
      psVar12 = &DAT_14017492c;
      lVar7 = *param_5;
      for (psVar10 = &DAT_14017492c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_140109670(param_1,0x4d,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_140109848;
      lVar7 = *param_5;
      for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
        *(short *)*param_4 = *psVar12;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      uVar11 = 0x53;
    }
LAB_140109981:
    cVar2 = FUN_140109670(param_1,uVar11,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    if (param_2 < 0x6f) {
      if (param_2 == 0x6e) {
        psVar10 = &DAT_140174960;
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      if (param_2 == 0x61) {
        if (param_3[6] < 7) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[6] + 0x2c];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_140109a9c;
      }
      if (param_2 == 0x62) {
LAB_1401099fe:
        if (param_3[4] < 0xc) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[4] + 0x3a];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_140109a9c;
      }
      if (param_2 != 99) {
        if (param_2 == 100) {
          uVar8 = param_3[3];
          bVar13 = uVar8 - 1 < 0x1e;
          bVar14 = uVar8 - 1 == 0x1e;
          goto LAB_1401097ee;
        }
        if (param_2 == 0x65) {
          uVar8 = param_3[3];
          if (0x1e < param_3[3] - 1) goto LAB_140109a9c;
        }
        else if (param_2 == 0x67) {
          uVar8 = param_3[5];
          if (9999 < uVar8 + 0x76c) goto LAB_140109a9c;
          iVar4 = FUN_140109578(uVar8,param_3[6],param_3[7]);
          if (iVar4 == 0) {
            uVar8 = uVar8 - 1;
          }
          else if (iVar4 < 1) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (int)(uVar8 + 0x76c) % 100;
        }
        else {
          if (param_2 == 0x68) goto LAB_1401099fe;
          if (param_2 == 0x6a) {
            if (param_3[7] < 0x16e) {
              uVar8 = param_3[7] + 1;
              uVar11 = 3;
              goto LAB_14010972f;
            }
            goto LAB_140109a9c;
          }
          if (param_2 != 0x6d) {
            return 0;
          }
          if (0xb < param_3[4]) goto LAB_140109a9c;
          uVar8 = param_3[4] + 1;
        }
        goto LAB_140109723;
      }
      if ((param_6 != &PTR_DAT_140168590) || (param_7 != '\0')) {
        cVar2 = FUN_14010a54c(param_1,param_7,param_3,param_4,param_5,param_6);
        if (cVar2 == '\0') goto LAB_140109848;
        lVar7 = *param_5;
        for (psVar10 = &DAT_14017495c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
LAB_1401099ef:
        param_7 = '\x02';
        goto LAB_1401099f4;
      }
      cVar2 = FUN_140109670(param_1,0x61,param_3,param_4,param_5,&PTR_DAT_140168590,0);
      if (cVar2 == '\0') goto LAB_140109848;
      psVar12 = &DAT_14017495c;
      lVar7 = *param_5;
      for (psVar10 = &DAT_14017495c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_140109670(param_1,0x62,param_3,param_4,param_5,&PTR_DAT_140168590,0);
      if (cVar2 == '\0') goto LAB_140109848;
      lVar7 = *param_5;
      for (psVar10 = &DAT_14017495c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_140109670(param_1,0x65,param_3,param_4,param_5,&PTR_DAT_140168590,0);
      if (cVar2 == '\0') goto LAB_140109848;
      lVar7 = *param_5;
      for (psVar10 = &DAT_14017495c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_140109670(param_1,0x54,param_3,param_4,param_5,&PTR_DAT_140168590,0);
      if (cVar2 == '\0') goto LAB_140109848;
      lVar7 = *param_5;
      for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
        *(short *)*param_4 = *psVar12;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      param_7 = '\0';
      uVar11 = 0x59;
      goto LAB_140109981;
    }
    if (param_2 == 0x70) {
      if (param_3[2] < 0x18) {
        if ((int)param_3[2] < 0xc) {
          psVar10 = (short *)param_6[0x52];
        }
        else {
          psVar10 = (short *)param_6[0x53];
        }
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      goto LAB_140109a9c;
    }
    if (param_2 == 0x72) {
      if (param_6 == &PTR_DAT_140168590) {
        cVar2 = FUN_140109670(param_1,0x49,param_3,param_4,param_5,&PTR_DAT_140168590,param_7);
        if (cVar2 == '\0') goto LAB_140109848;
        psVar12 = &DAT_14017492c;
        lVar7 = *param_5;
        for (psVar10 = &DAT_14017492c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_140109670(param_1,0x4d,param_3,param_4,param_5,&PTR_DAT_140168590,param_7);
        if (cVar2 == '\0') goto LAB_140109848;
        lVar7 = *param_5;
        for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
          *(short *)*param_4 = *psVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_140109670(param_1,0x53,param_3,param_4,param_5,&PTR_DAT_140168590,param_7);
        if (cVar2 == '\0') goto LAB_140109848;
        lVar7 = *param_5;
        for (psVar10 = &DAT_14017495c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        uVar11 = 0x70;
      }
      else {
        uVar11 = 0x58;
      }
      goto LAB_140109981;
    }
    if (param_2 == 0x74) {
      psVar10 = &DAT_140174964;
      lVar7 = *param_5;
      while( true ) {
        if (lVar7 == 0) {
          return 1;
        }
        sVar1 = *psVar10;
        if (sVar1 == 0) break;
        psVar10 = psVar10 + 1;
        *(short *)*param_4 = sVar1;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      return 1;
    }
    if ((param_2 == 0x75) || (param_2 == 0x77)) {
      uVar8 = param_3[6];
      if (6 < uVar8) goto LAB_140109a9c;
      if ((uVar8 == 0) && (param_2 == 0x75)) {
        uVar8 = 7;
      }
      uVar11 = 1;
      goto LAB_14010972f;
    }
    if (param_2 != 0x78) {
      if (param_2 != 0x79) {
        if (param_2 != 0x7a) {
          return 0;
        }
        __tzset();
        local_res10[0] = 0;
        iVar4 = FUN_1401228b4(local_res10);
        if (iVar4 == 0) {
          if (param_3[8] != 0) {
            local_38[0] = 0;
            iVar4 = FUN_140122884(local_38);
            if (iVar4 != 0) goto LAB_140109a9c;
            local_res10[0] = local_res10[0] + local_38[0];
          }
          psVar10 = &DAT_140174938;
          iVar4 = -local_res10[0];
          if (-local_res10[0] < 0) {
            iVar4 = local_res10[0];
          }
          uVar8 = (iVar4 / 0x3c) % 0x3c;
          if (local_res10[0] < 1) {
            psVar10 = &DAT_140174954;
          }
          lVar7 = *param_5;
          for (; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
            *(short *)*param_4 = *psVar10;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          FUN_140109428((iVar4 / 0x3c) / 0x3c,2,param_4,param_5,0x30);
          uVar11 = 2;
          goto LAB_14010972f;
        }
        goto LAB_140109a9c;
      }
      if (9999 < param_3[5] + 0x76c) goto LAB_140109a9c;
      uVar8 = (int)(param_3[5] + 0x76c) % 100;
      goto LAB_140109723;
    }
LAB_1401099f4:
    cVar2 = FUN_14010a54c(param_1,param_7,param_3,param_4,param_5,param_6);
  }
  if (cVar2 != '\0') {
    return 1;
  }
LAB_140109848:
  puVar6 = (undefined4 *)FUN_140113dd4();
  *puVar6 = 0x16;
  return 0;
}

