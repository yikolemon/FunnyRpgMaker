/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021a0ae */

char * __fastcall FUN_1021a0ae(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uStack_4c;
  int iStack_48;
  char *pcStack_44;
  char *pcStack_40;
  int local_3c;
  int local_38;
  int local_34;
  uint *local_30;
  uint local_2c;
  int iStack_28;
  char *apcStack_24 [3];
  uint auStack_18 [2];
  
  auStack_18[1] = DAT_10388d00 ^ (uint)&uStack_4c;
  uVar11 = *(uint *)(param_1 + 100);
  iVar6 = *(int *)(param_1 + 0x224);
  if (*(int *)(param_1 + 0x2e8) == 0) {
    cVar2 = FUN_10216a0f(param_1,0x19,&local_38,&local_3c);
    if (((cVar2 != '\0') || (cVar2 = FUN_10216a0f(param_1,0x10,&local_38,&local_3c), cVar2 != '\0'))
       || (cVar2 = FUN_10216a0f(param_1,1,&local_38,&local_3c), cVar2 != '\0')) {
      if (local_38 == -1) {
        pcVar3 = (char *)0x0;
      }
      else {
        pcVar3 = (char *)FUN_1021a56b(local_38 * 0x14 + *(int *)(param_1 + 0x164),&LAB_1021a7d1);
      }
      if (local_3c != -1 && pcVar3 == (char *)0x0) {
        pcVar3 = (char *)FUN_1021a6b2(local_3c * 0x14 + *(int *)(param_1 + 0x164),&LAB_1021a7d1);
      }
      if (pcVar3 != (char *)0x0) {
        sVar4 = _strlen(pcVar3);
        if (0x5b < sVar4) {
          pcVar3[0x5b] = '\0';
          sVar4 = 0x5b;
        }
        *(char **)(param_1 + 0x2e8) = pcVar3;
        *(size_t *)(param_1 + 0x2ec) = sVar4;
        goto LAB_1021a1b6;
      }
    }
LAB_1021a35f:
    pcVar5 = (char *)0x0;
  }
  else {
LAB_1021a1b6:
    (**(code **)(iVar6 + 0x44))(param_1,&local_2c,&local_30,0,&local_34);
    uVar7 = *(uint *)(param_1 + 4) & 0x7fff0000;
    if ((uVar7 == 0) || ((*(byte *)(param_1 + 9) & 0x80) != 0)) {
LAB_1021a330:
      iVar6 = *(int *)(local_34 + 0xc);
      pcVar5 = (char *)FUN_101c21f6(uVar11,*(int *)(param_1 + 0x2ec) + local_2c * 0x11 + 1,
                                    &iStack_28);
      if (iStack_28 != 0) goto LAB_1021a35f;
      FUN_10270510(pcVar5,*(undefined4 *)(param_1 + 0x2e8));
      pcVar3 = pcVar5 + *(int *)(param_1 + 0x2ec);
      iStack_48 = param_1;
      pcStack_44 = pcVar5;
      if (local_2c != 0) {
        puVar8 = (uint *)(iVar6 + 0x10);
        uVar11 = 0;
        do {
          if (*local_30 != puVar8[-2]) {
            *pcVar3 = '_';
            pcVar3 = (char *)FUN_1021a7f0();
            uVar7 = *puVar8;
            iVar6 = (int)uVar7 >> 0x18;
            if ((iVar6 != 0x20) &&
               (iVar6 - 0x61U < 0x1a || (iVar6 - 0x41U < 0x1a || iVar6 - 0x30U < 10))) {
              *pcVar3 = (char)(uVar7 >> 0x18);
              pcVar3 = pcVar3 + 1;
              uVar7 = *puVar8;
            }
            iVar6 = (uVar7 >> 0x10) << 0x18;
            if ((iVar6 != 0x20000000) &&
               (iVar6 = iVar6 >> 0x18, uStack_4c = uVar7,
               iVar6 - 0x61U < 0x1a || (iVar6 - 0x41U < 0x1a || iVar6 - 0x30U < 10))) {
              *pcVar3 = (char)(uVar7 >> 0x10);
              pcVar3 = pcVar3 + 1;
              uVar7 = *puVar8;
            }
            iVar6 = (uVar7 >> 8) << 0x18;
            if ((iVar6 != 0x20000000) &&
               (iVar6 = iVar6 >> 0x18, uStack_4c = uVar7,
               iVar6 - 0x61U < 0x1a || (iVar6 - 0x41U < 0x1a || iVar6 - 0x30U < 10))) {
              *pcVar3 = (char)(uVar7 >> 8);
              pcVar3 = pcVar3 + 1;
              uVar7 = *puVar8;
            }
            if ((uVar7 << 0x18 != 0x20000000) &&
               (iVar6 = (int)(uVar7 << 0x18) >> 0x18,
               iVar6 - 0x61U < 0x1a || (iVar6 - 0x41U < 0x1a || iVar6 - 0x30U < 10))) {
              *pcVar3 = (char)uVar7;
              pcVar3 = pcVar3 + 1;
            }
          }
          uVar11 = uVar11 + 1;
          local_30 = local_30 + 1;
          puVar8 = puVar8 + 6;
        } while (uVar11 < local_2c);
      }
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x21c);
      uVar7 = uVar7 >> 0x10;
      iVar10 = *(int *)(local_34 + 0x10);
      iVar1 = *(int *)(iVar10 + -4 + uVar7 * 0xc);
      apcStack_24[0] = (char *)0x0;
      uStack_4c = uVar11;
      if (iVar1 == 6 || iVar1 - 0x100U < 0x7f00) {
        iStack_48 = param_1;
        (**(code **)(iVar6 + 0xac))(param_1,iVar1,apcStack_24);
        pcVar3 = apcStack_24[0];
        if (apcStack_24[0] == (char *)0x0) {
          iVar10 = *(int *)(local_34 + 0x10);
          param_1 = iStack_48;
          goto LAB_1021a25d;
        }
        sVar4 = _strlen(apcStack_24[0]);
        pcStack_44 = pcVar3;
        pcVar3 = pcVar3 + sVar4 + 1;
      }
      else {
LAB_1021a25d:
        (**(code **)(iVar6 + 0xac))
                  (param_1,*(undefined2 *)(iVar10 + 4 + (uVar7 - 1) * 0xc),&pcStack_40);
        uVar11 = uStack_4c;
        if (pcStack_40 == (char *)0x0) goto LAB_1021a330;
        iVar6 = *(int *)(param_1 + 0x2ec);
        sVar4 = _strlen(pcStack_40);
        pcVar5 = (char *)FUN_101c21f6(uStack_4c,sVar4 + iVar6 + 2,&iStack_28);
        if (iStack_28 != 0) goto LAB_1021a35f;
        FUN_10270510(pcVar5,*(undefined4 *)(param_1 + 0x2e8));
        pcVar3 = pcVar5 + *(int *)(param_1 + 0x2ec) + 1;
        pcVar5[*(int *)(param_1 + 0x2ec)] = '-';
        cVar2 = *pcStack_40;
        pcVar9 = pcStack_40;
        while (cVar2 != '\0') {
          pcVar9 = pcVar9 + 1;
          iVar6 = (int)cVar2;
          if (iVar6 - 0x61U < 0x1a || (iVar6 - 0x41U < 0x1a || iVar6 - 0x30U < 10)) {
            *pcVar3 = cVar2;
            pcVar3 = pcVar3 + 1;
          }
          cVar2 = *pcVar9;
        }
        *pcVar3 = '\0';
        pcVar3 = pcVar3 + 1;
        iStack_48 = param_1;
        pcStack_44 = pcVar5;
        FUN_101c0017(uStack_4c,pcStack_40);
      }
    }
    pcVar5 = pcStack_44;
    if (0x7f < (int)pcVar3 - (int)pcStack_44) {
      FUN_1021a923(apcStack_24);
      pcVar3 = pcVar5 + *(int *)(iStack_48 + 0x2ec);
      pcVar9 = pcVar3 + 0x20;
      *pcVar3 = '-';
      puVar8 = auStack_18;
      pcVar3[0x21] = '.';
      pcVar3[0x22] = '.';
      pcVar3[0x23] = '.';
      pcVar3[0x24] = '\0';
      iVar6 = 0;
      do {
        uVar11 = *puVar8;
        iVar10 = 0;
        do {
          pcVar9[iVar10] = "0123456789ABCDEF"[uVar11 & 0xf];
          uVar11 = uVar11 >> 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != -8);
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + -1;
        pcVar9 = pcVar9 + -8;
      } while (iVar6 != 4);
    }
  }
  if (DAT_10388d00 == (auStack_18[1] ^ (uint)&uStack_4c)) {
    return pcVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

