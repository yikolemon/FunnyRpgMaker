/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140078027 */

char * FUN_140078027(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  byte *pbVar14;
  int iVar15;
  uint *puVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  char *local_70;
  int local_68;
  int local_64;
  longlong local_60;
  uint *local_58;
  uint local_50;
  int local_4c;
  char *local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x98);
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  if (*(longlong *)(param_1 + 0x418) == 0) {
    uVar5 = FUN_140074403(param_1,0x19,&local_64,&local_68);
    if ((((char)uVar5 != '\0') ||
        (uVar5 = FUN_140074403(param_1,0x10,&local_64,&local_68), (char)uVar5 != '\0')) ||
       (uVar5 = FUN_140074403(param_1,1,&local_64,&local_68), (char)uVar5 != '\0')) {
      if ((longlong)local_64 == -1) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = FUN_140078546(lVar2,*(longlong **)(param_1 + 0x200),
                               (longlong)local_64 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                               &LAB_1400787ef);
      }
      if (local_68 != -1 && pcVar6 == (char *)0x0) {
        pcVar6 = FUN_1400786b7(*(longlong *)(param_1 + 0x98),*(longlong **)(param_1 + 0x200),
                               (longlong)local_68 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                               &LAB_1400787ef);
      }
      if (pcVar6 != (char *)0x0) {
        sVar7 = strlen(pcVar6);
        uVar12 = (uint)sVar7;
        if (0x5b < uVar12) {
          pcVar6[0x5b] = '\0';
          uVar12 = 0x5b;
        }
        *(char **)(param_1 + 0x418) = pcVar6;
        *(uint *)(param_1 + 0x420) = uVar12;
        goto LAB_14007815b;
      }
    }
LAB_140078314:
    pcVar6 = (char *)0x0;
  }
  else {
LAB_14007815b:
    local_78 = &local_60;
    (**(code **)(lVar3 + 0x88))(param_1,&local_50,&local_58,0);
    uVar12 = *(uint *)(param_1 + 4) & 0x7fff0000;
    if ((uVar12 == 0) || ((*(byte *)(param_1 + 9) & 0x80) != 0)) {
LAB_1400782e1:
      lVar3 = *(longlong *)(local_60 + 0x10);
      pcVar6 = (char *)FUN_14001e961(lVar2,local_50 * 0x11 + *(int *)(param_1 + 0x420) + 1,&local_4c
                                    );
      if (local_4c != 0) goto LAB_140078314;
      FUN_1400b4040((longlong)pcVar6,*(ulonglong **)(param_1 + 0x418));
      pbVar14 = (byte *)(pcVar6 + *(uint *)(param_1 + 0x420));
      if (local_50 != 0) {
        puVar16 = (uint *)(lVar3 + 0x14);
        uVar12 = 0;
        do {
          if (*local_58 != puVar16[-2]) {
            *pbVar14 = 0x5f;
            pbVar14 = FUN_14007880a(*local_58,pbVar14 + 1);
            uVar4 = *puVar16;
            iVar11 = (int)uVar4 >> 0x18;
            if ((iVar11 != 0x20) &&
               (iVar11 - 0x61U < 0x1a || (iVar11 - 0x41U < 0x1a || iVar11 - 0x30U < 10))) {
              *pbVar14 = (byte)(uVar4 >> 0x18);
              pbVar14 = pbVar14 + 1;
              uVar4 = *puVar16;
            }
            iVar11 = (uVar4 >> 0x10) << 0x18;
            if ((iVar11 != 0x20000000) &&
               (iVar11 = iVar11 >> 0x18,
               iVar11 - 0x61U < 0x1a || (iVar11 - 0x41U < 0x1a || iVar11 - 0x30U < 10))) {
              *pbVar14 = (byte)(uVar4 >> 0x10);
              pbVar14 = pbVar14 + 1;
              uVar4 = *puVar16;
            }
            iVar11 = (uVar4 >> 8) << 0x18;
            if ((iVar11 != 0x20000000) &&
               (iVar11 = iVar11 >> 0x18,
               iVar11 - 0x61U < 0x1a || (iVar11 - 0x41U < 0x1a || iVar11 - 0x30U < 10))) {
              *pbVar14 = (byte)(uVar4 >> 8);
              pbVar14 = pbVar14 + 1;
              uVar4 = *puVar16;
            }
            if ((uVar4 << 0x18 != 0x20000000) &&
               (iVar11 = (int)(uVar4 << 0x18) >> 0x18,
               iVar11 - 0x61U < 0x1a || (iVar11 - 0x41U < 0x1a || iVar11 - 0x30U < 10))) {
              *pbVar14 = (byte)uVar4;
              pbVar14 = pbVar14 + 1;
            }
          }
          uVar12 = uVar12 + 1;
          local_58 = local_58 + 1;
          puVar16 = puVar16 + 8;
        } while (uVar12 < local_50);
      }
      *pbVar14 = 0;
      pbVar14 = pbVar14 + 1;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x2d0);
      lVar8 = *(longlong *)(local_60 + 0x18);
      lVar13 = ((ulonglong)(uVar12 >> 0x10) - 1) * 0x10;
      iVar11 = *(int *)(lVar8 + 0xc + lVar13);
      local_48 = (char *)0x0;
      if (iVar11 == 6 || iVar11 - 0x100U < 0x7f00) {
        (**(code **)(lVar3 + 0x158))(param_1,iVar11,&local_48);
        pcVar6 = local_48;
        if (local_48 == (char *)0x0) {
          lVar8 = *(longlong *)(local_60 + 0x18);
          goto LAB_14007820e;
        }
        sVar7 = strlen(local_48);
        pbVar14 = (byte *)(pcVar6 + sVar7 + 1);
      }
      else {
LAB_14007820e:
        (**(code **)(lVar3 + 0x158))(param_1,*(undefined2 *)(lVar8 + 8 + lVar13),&local_70);
        if (local_70 == (char *)0x0) goto LAB_1400782e1;
        iVar11 = *(int *)(param_1 + 0x420);
        sVar7 = strlen(local_70);
        pcVar6 = (char *)FUN_14001e961(lVar2,iVar11 + (int)sVar7 + 2,&local_4c);
        if (local_4c != 0) goto LAB_140078314;
        FUN_1400b4040((longlong)pcVar6,*(ulonglong **)(param_1 + 0x418));
        pcVar9 = pcVar6 + (ulonglong)*(uint *)(param_1 + 0x420) + 1;
        pcVar6[*(uint *)(param_1 + 0x420)] = '-';
        cVar1 = *local_70;
        pcVar10 = local_70;
        while (cVar1 != '\0') {
          pcVar10 = pcVar10 + 1;
          iVar11 = (int)cVar1;
          if (iVar11 - 0x61U < 0x1a || (iVar11 - 0x41U < 0x1a || iVar11 - 0x30U < 10)) {
            *pcVar9 = cVar1;
            pcVar9 = pcVar9 + 1;
          }
          cVar1 = *pcVar10;
        }
        *pcVar9 = '\0';
        pbVar14 = (byte *)(pcVar9 + 1);
        FUN_14001c53d(lVar2,(longlong)local_70);
      }
    }
    if (0x7f < (longlong)pbVar14 - (longlong)pcVar6) {
      FUN_14007896f((longlong)pcVar6,(uint)((longlong)pbVar14 - (longlong)pcVar6),(int *)&local_48);
      pcVar9 = pcVar6 + *(uint *)(param_1 + 0x420);
      pcVar10 = pcVar9 + 0x20;
      *pcVar9 = '-';
      puVar16 = &local_3c;
      pcVar9[0x21] = '.';
      pcVar9[0x22] = '.';
      pcVar9[0x23] = '.';
      pcVar9[0x24] = '\0';
      iVar11 = 0;
      do {
        uVar12 = *puVar16;
        iVar15 = 8;
        do {
          *pcVar10 = "0123456789ABCDEF"[uVar12 & 0xf];
          pcVar10 = pcVar10 + -1;
          uVar12 = uVar12 >> 4;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        iVar11 = iVar11 + 1;
        puVar16 = puVar16 + -1;
      } while (iVar11 != 4);
    }
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_98)) {
    return pcVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_98);
}

