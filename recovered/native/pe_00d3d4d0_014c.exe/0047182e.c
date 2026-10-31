/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047182e */

uint * __fastcall FUN_0047182e(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  size_t sVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  uint uStack_4c;
  int iStack_48;
  uint *puStack_44;
  char *pcStack_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint *local_30;
  uint local_2c;
  int iStack_28;
  uint *apuStack_24 [3];
  uint auStack_18 [2];
  
  auStack_18[1] = DAT_0050e8c0 ^ (uint)&uStack_4c;
  uVar15 = *(uint *)(param_1 + 100);
  iVar10 = *(int *)(param_1 + 0x224);
  if (*(int *)(param_1 + 0x2e8) == 0) {
    bVar4 = FUN_0046e18f(param_1,0x19,&local_38,&local_3c);
    if (((bVar4) || (bVar4 = FUN_0046e18f(param_1,0x10,&local_38,&local_3c), bVar4)) ||
       (bVar4 = FUN_0046e18f(param_1,1,&local_38,&local_3c), bVar4)) {
      if (local_38 == 0xffffffff) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = FUN_00471ceb(uVar15,*(int **)(param_1 + 0x170),
                              local_38 * 0x14 + *(int *)(param_1 + 0x164),&LAB_00471f51);
      }
      if (local_3c != 0xffffffff && pcVar5 == (char *)0x0) {
        pcVar5 = FUN_00471e32(*(int *)(param_1 + 100),*(int **)(param_1 + 0x170),
                              local_3c * 0x14 + *(int *)(param_1 + 0x164),&LAB_00471f51);
      }
      if (pcVar5 != (char *)0x0) {
        sVar6 = _strlen(pcVar5);
        if (0x5b < sVar6) {
          pcVar5[0x5b] = '\0';
          sVar6 = 0x5b;
        }
        *(char **)(param_1 + 0x2e8) = pcVar5;
        *(size_t *)(param_1 + 0x2ec) = sVar6;
        goto LAB_00471936;
      }
    }
LAB_00471adf:
    puVar7 = (uint *)0x0;
  }
  else {
LAB_00471936:
    (**(code **)(iVar10 + 0x44))(param_1,&local_2c,&local_30,0,&local_34);
    uVar11 = *(uint *)(param_1 + 4) & 0x7fff0000;
    if ((uVar11 == 0) || ((*(byte *)(param_1 + 9) & 0x80) != 0)) {
LAB_00471ab0:
      iVar10 = *(int *)(local_34 + 0xc);
      puVar7 = (uint *)FUN_0041e773(uVar15,*(int *)(param_1 + 0x2ec) + local_2c * 0x11 + 1,
                                    &iStack_28);
      if (iStack_28 != 0) goto LAB_00471adf;
      FUN_00492f10(puVar7,*(uint **)(param_1 + 0x2e8));
      pbVar12 = (byte *)(*(int *)(param_1 + 0x2ec) + (int)puVar7);
      iStack_48 = param_1;
      puStack_44 = puVar7;
      if (local_2c != 0) {
        puVar7 = (uint *)(iVar10 + 0x10);
        uVar15 = 0;
        do {
          if (*local_30 != puVar7[-2]) {
            *pbVar12 = 0x5f;
            pbVar12 = FUN_00471f70(*local_30,pbVar12 + 1);
            uVar11 = *puVar7;
            iVar10 = (int)uVar11 >> 0x18;
            if ((iVar10 != 0x20) &&
               (iVar10 - 0x61U < 0x1a || (iVar10 - 0x41U < 0x1a || iVar10 - 0x30U < 10))) {
              *pbVar12 = (byte)(uVar11 >> 0x18);
              pbVar12 = pbVar12 + 1;
              uVar11 = *puVar7;
            }
            iVar10 = (uVar11 >> 0x10) << 0x18;
            if ((iVar10 != 0x20000000) &&
               (iVar10 = iVar10 >> 0x18, uStack_4c = uVar11,
               iVar10 - 0x61U < 0x1a || (iVar10 - 0x41U < 0x1a || iVar10 - 0x30U < 10))) {
              *pbVar12 = (byte)(uVar11 >> 0x10);
              pbVar12 = pbVar12 + 1;
              uVar11 = *puVar7;
            }
            iVar10 = (uVar11 >> 8) << 0x18;
            if ((iVar10 != 0x20000000) &&
               (iVar10 = iVar10 >> 0x18, uStack_4c = uVar11,
               iVar10 - 0x61U < 0x1a || (iVar10 - 0x41U < 0x1a || iVar10 - 0x30U < 10))) {
              *pbVar12 = (byte)(uVar11 >> 8);
              pbVar12 = pbVar12 + 1;
              uVar11 = *puVar7;
            }
            if ((uVar11 << 0x18 != 0x20000000) &&
               (iVar10 = (int)(uVar11 << 0x18) >> 0x18,
               iVar10 - 0x61U < 0x1a || (iVar10 - 0x41U < 0x1a || iVar10 - 0x30U < 10))) {
              *pbVar12 = (byte)uVar11;
              pbVar12 = pbVar12 + 1;
            }
          }
          uVar15 = uVar15 + 1;
          local_30 = local_30 + 1;
          puVar7 = puVar7 + 6;
        } while (uVar15 < local_2c);
      }
      *pbVar12 = 0;
      pbVar12 = pbVar12 + 1;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x21c);
      uVar11 = uVar11 >> 0x10;
      iVar14 = *(int *)(local_34 + 0x10);
      iVar3 = *(int *)(iVar14 + -4 + uVar11 * 0xc);
      apuStack_24[0] = (uint *)0x0;
      uStack_4c = uVar15;
      if (iVar3 == 6 || iVar3 - 0x100U < 0x7f00) {
        iStack_48 = param_1;
        (**(code **)(iVar10 + 0xac))(param_1,iVar3,apuStack_24);
        puVar7 = apuStack_24[0];
        if (apuStack_24[0] == (uint *)0x0) {
          iVar14 = *(int *)(local_34 + 0x10);
          param_1 = iStack_48;
          goto LAB_004719dd;
        }
        sVar6 = _strlen((char *)apuStack_24[0]);
        puStack_44 = puVar7;
        pbVar12 = (byte *)((int)puVar7 + sVar6 + 1);
      }
      else {
LAB_004719dd:
        (**(code **)(iVar10 + 0xac))
                  (param_1,*(undefined2 *)(iVar14 + 4 + (uVar11 - 1) * 0xc),&pcStack_40);
        uVar15 = uStack_4c;
        if (pcStack_40 == (char *)0x0) goto LAB_00471ab0;
        iVar10 = *(int *)(param_1 + 0x2ec);
        sVar6 = _strlen(pcStack_40);
        puVar7 = (uint *)FUN_0041e773(uStack_4c,sVar6 + iVar10 + 2,&iStack_28);
        if (iStack_28 != 0) goto LAB_00471adf;
        FUN_00492f10(puVar7,*(uint **)(param_1 + 0x2e8));
        pcVar5 = (char *)((int)puVar7 + *(int *)(param_1 + 0x2ec) + 1);
        *(undefined1 *)((int)puVar7 + *(int *)(param_1 + 0x2ec)) = 0x2d;
        cVar2 = *pcStack_40;
        pcVar8 = pcStack_40;
        while (cVar2 != '\0') {
          pcVar8 = pcVar8 + 1;
          iVar10 = (int)cVar2;
          if (iVar10 - 0x61U < 0x1a || (iVar10 - 0x41U < 0x1a || iVar10 - 0x30U < 10)) {
            *pcVar5 = cVar2;
            pcVar5 = pcVar5 + 1;
          }
          cVar2 = *pcVar8;
        }
        *pcVar5 = '\0';
        pbVar12 = (byte *)(pcVar5 + 1);
        iStack_48 = param_1;
        puStack_44 = puVar7;
        FUN_0041c607(uStack_4c,(int)pcStack_40);
      }
    }
    puVar7 = puStack_44;
    if (0x7f < (int)pbVar12 - (int)puStack_44) {
      FUN_004720a3((int)puStack_44,(int)pbVar12 - (int)puStack_44,(int *)apuStack_24);
      puVar1 = (undefined1 *)((int)puVar7 + *(int *)(iStack_48 + 0x2ec));
      puVar13 = puVar1 + 0x20;
      *puVar1 = 0x2d;
      puVar9 = auStack_18;
      *(undefined4 *)(puVar1 + 0x21) = 0x2e2e2e;
      iVar10 = 0;
      do {
        uVar15 = *puVar9;
        iVar14 = 0;
        do {
          puVar13[iVar14] = "0123456789ABCDEF"[uVar15 & 0xf];
          uVar15 = uVar15 >> 4;
          iVar14 = iVar14 + -1;
        } while (iVar14 != -8);
        iVar10 = iVar10 + 1;
        puVar9 = puVar9 + -1;
        puVar13 = puVar13 + -8;
      } while (iVar10 != 4);
    }
  }
  if (DAT_0050e8c0 == (auStack_18[1] ^ (uint)&uStack_4c)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(auStack_18[1] ^ (uint)&uStack_4c);
}

