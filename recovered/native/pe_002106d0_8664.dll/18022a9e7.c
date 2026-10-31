/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022a9e7 */

char * FUN_18022a9e7(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  size_t sVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  int iVar13;
  uint *puVar14;
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
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar2 = *(longlong *)(param_1 + 0x2e0);
  if (*(longlong *)(param_1 + 0x418) == 0) {
    cVar3 = FUN_180226dc3(param_1,0x19,&local_64,&local_68);
    if (((cVar3 != '\0') || (cVar3 = FUN_180226dc3(param_1,0x10,&local_64,&local_68), cVar3 != '\0')
        ) || (cVar3 = FUN_180226dc3(param_1,1,&local_64,&local_68), cVar3 != '\0')) {
      if ((longlong)local_64 == -1) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = (char *)FUN_18022af06(uVar1,*(undefined8 *)(param_1 + 0x200),
                                       (longlong)local_64 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                                       &LAB_18022b1af);
      }
      if (local_68 != -1 && pcVar5 == (char *)0x0) {
        pcVar5 = (char *)FUN_18022b077(*(undefined8 *)(param_1 + 0x98),
                                       *(undefined8 *)(param_1 + 0x200),
                                       (longlong)local_68 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                                       &LAB_18022b1af);
      }
      if (pcVar5 != (char *)0x0) {
        sVar6 = strlen(pcVar5);
        uVar10 = (uint)sVar6;
        if (0x5b < uVar10) {
          pcVar5[0x5b] = '\0';
          uVar10 = 0x5b;
        }
        *(char **)(param_1 + 0x418) = pcVar5;
        *(uint *)(param_1 + 0x420) = uVar10;
        goto LAB_18022ab1b;
      }
    }
LAB_18022acd4:
    pcVar5 = (char *)0x0;
  }
  else {
LAB_18022ab1b:
    local_78 = &local_60;
    (**(code **)(lVar2 + 0x88))(param_1,&local_50,&local_58,0);
    uVar10 = *(uint *)(param_1 + 4) & 0x7fff0000;
    if ((uVar10 == 0) || ((*(byte *)(param_1 + 9) & 0x80) != 0)) {
LAB_18022aca1:
      lVar2 = *(longlong *)(local_60 + 0x10);
      pcVar5 = (char *)FUN_1801cc006(uVar1,local_50 * 0x11 + *(int *)(param_1 + 0x420) + 1,&local_4c
                                    );
      if (local_4c != 0) goto LAB_18022acd4;
      FUN_1802a8de0(pcVar5,*(undefined8 *)(param_1 + 0x418));
      pcVar12 = pcVar5 + *(uint *)(param_1 + 0x420);
      if (local_50 != 0) {
        puVar14 = (uint *)(lVar2 + 0x14);
        uVar10 = 0;
        do {
          if (*local_58 != puVar14[-2]) {
            *pcVar12 = '_';
            pcVar12 = (char *)FUN_18022b1ca(*local_58,pcVar12 + 1);
            uVar4 = *puVar14;
            iVar9 = (int)uVar4 >> 0x18;
            if ((iVar9 != 0x20) &&
               (iVar9 - 0x61U < 0x1a || (iVar9 - 0x41U < 0x1a || iVar9 - 0x30U < 10))) {
              *pcVar12 = (char)(uVar4 >> 0x18);
              pcVar12 = pcVar12 + 1;
              uVar4 = *puVar14;
            }
            iVar9 = (uVar4 >> 0x10) << 0x18;
            if ((iVar9 != 0x20000000) &&
               (iVar9 = iVar9 >> 0x18,
               iVar9 - 0x61U < 0x1a || (iVar9 - 0x41U < 0x1a || iVar9 - 0x30U < 10))) {
              *pcVar12 = (char)(uVar4 >> 0x10);
              pcVar12 = pcVar12 + 1;
              uVar4 = *puVar14;
            }
            iVar9 = (uVar4 >> 8) << 0x18;
            if ((iVar9 != 0x20000000) &&
               (iVar9 = iVar9 >> 0x18,
               iVar9 - 0x61U < 0x1a || (iVar9 - 0x41U < 0x1a || iVar9 - 0x30U < 10))) {
              *pcVar12 = (char)(uVar4 >> 8);
              pcVar12 = pcVar12 + 1;
              uVar4 = *puVar14;
            }
            if ((uVar4 << 0x18 != 0x20000000) &&
               (iVar9 = (int)(uVar4 << 0x18) >> 0x18,
               iVar9 - 0x61U < 0x1a || (iVar9 - 0x41U < 0x1a || iVar9 - 0x30U < 10))) {
              *pcVar12 = (char)uVar4;
              pcVar12 = pcVar12 + 1;
            }
          }
          uVar10 = uVar10 + 1;
          local_58 = local_58 + 1;
          puVar14 = puVar14 + 8;
        } while (uVar10 < local_50);
      }
      *pcVar12 = '\0';
      pcVar12 = pcVar12 + 1;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x2d0);
      lVar7 = *(longlong *)(local_60 + 0x18);
      lVar11 = ((ulonglong)(uVar10 >> 0x10) - 1) * 0x10;
      iVar9 = *(int *)(lVar7 + 0xc + lVar11);
      local_48 = (char *)0x0;
      if (iVar9 == 6 || iVar9 - 0x100U < 0x7f00) {
        (**(code **)(lVar2 + 0x158))(param_1,iVar9,&local_48);
        pcVar5 = local_48;
        if (local_48 == (char *)0x0) {
          lVar7 = *(longlong *)(local_60 + 0x18);
          goto LAB_18022abce;
        }
        sVar6 = strlen(local_48);
        pcVar12 = pcVar5 + sVar6 + 1;
      }
      else {
LAB_18022abce:
        (**(code **)(lVar2 + 0x158))(param_1,*(undefined2 *)(lVar7 + 8 + lVar11),&local_70);
        if (local_70 == (char *)0x0) goto LAB_18022aca1;
        iVar9 = *(int *)(param_1 + 0x420);
        sVar6 = strlen(local_70);
        pcVar5 = (char *)FUN_1801cc006(uVar1,iVar9 + (int)sVar6 + 2,&local_4c);
        if (local_4c != 0) goto LAB_18022acd4;
        FUN_1802a8de0(pcVar5,*(undefined8 *)(param_1 + 0x418));
        pcVar12 = pcVar5 + (ulonglong)*(uint *)(param_1 + 0x420) + 1;
        pcVar5[*(uint *)(param_1 + 0x420)] = '-';
        cVar3 = *local_70;
        pcVar8 = local_70;
        while (cVar3 != '\0') {
          pcVar8 = pcVar8 + 1;
          iVar9 = (int)cVar3;
          if (iVar9 - 0x61U < 0x1a || (iVar9 - 0x41U < 0x1a || iVar9 - 0x30U < 10)) {
            *pcVar12 = cVar3;
            pcVar12 = pcVar12 + 1;
          }
          cVar3 = *pcVar8;
        }
        *pcVar12 = '\0';
        pcVar12 = pcVar12 + 1;
        FUN_1801c9b65(uVar1,local_70);
      }
    }
    if (0x7f < (longlong)pcVar12 - (longlong)pcVar5) {
      FUN_18022b32f(pcVar5,(longlong)pcVar12 - (longlong)pcVar5 & 0xffffffff,&local_48);
      pcVar12 = pcVar5 + *(uint *)(param_1 + 0x420);
      pcVar8 = pcVar12 + 0x20;
      *pcVar12 = '-';
      puVar14 = &local_3c;
      pcVar12[0x21] = '.';
      pcVar12[0x22] = '.';
      pcVar12[0x23] = '.';
      pcVar12[0x24] = '\0';
      iVar9 = 0;
      do {
        uVar10 = *puVar14;
        iVar13 = 8;
        do {
          *pcVar8 = "0123456789ABCDEF"[uVar10 & 0xf];
          pcVar8 = pcVar8 + -1;
          uVar10 = uVar10 >> 4;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        iVar9 = iVar9 + 1;
        puVar14 = puVar14 + -1;
      } while (iVar9 != 4);
    }
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_98)) {
    return pcVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_98);
}

