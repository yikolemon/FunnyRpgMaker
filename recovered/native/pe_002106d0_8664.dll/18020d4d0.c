/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020d4d0 */

uint FUN_18020d4d0(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined8 uVar10;
  char *pcVar11;
  short sVar12;
  short sVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_98 [32];
  char *local_78;
  uint *local_70;
  undefined4 *local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar10 = *(undefined8 *)(param_2 + 0x26);
  uVar4 = -param_3;
  if ((int)-param_3 < 0) {
    uVar4 = param_3;
  }
  local_4c = FUN_18020dbba(param_2,param_3);
  uVar15 = 0;
  if ((int)param_3 < 0 && local_4c == 0) goto LAB_18020d6d9;
  uVar2 = local_4c;
  uVar15 = local_4c;
  if ((char)local_4c == '\x02') {
    puVar6 = (undefined4 *)FUN_1801c9a4b(uVar10,0xb8,&local_4c);
    *(undefined4 **)(param_2 + 0x36) = puVar6;
    uVar15 = local_4c;
    if (local_4c != 0) goto LAB_18020d6d9;
    *param_2 = 1;
    *puVar6 = 0;
    puVar6[0x2a] = *(undefined4 *)(param_1 + 8);
    local_4c = FUN_18020e3ac(puVar6,param_1);
    if (local_4c == 0 && -1 < (int)param_3) {
      uVar2 = 6;
      uVar15 = uVar4 & 0xffff;
      goto joined_r0x00018020d5af;
    }
    uVar15 = 0;
    uVar2 = local_4c;
    if (local_4c == 0) goto LAB_18020d6d9;
  }
  else {
joined_r0x00018020d5af:
    if (uVar15 == 0) {
      lVar1 = *(longlong *)(param_2 + 0x36);
      uVar15 = 3;
      uVar2 = uVar15;
      if (*(short *)(lVar1 + 0x60) != 0) {
        param_2[1] = uVar4 & 0xffff;
        uVar4 = param_2[2];
        param_2[2] = uVar4 | 0x12;
        if (*(short *)(lVar1 + 100) == *(short *)(lVar1 + 0x66)) {
          param_2[2] = uVar4 | 0x16;
        }
        if (*(char *)(lVar1 + 0x56) != '\0') {
          *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 1;
        }
        if (799 < *(ushort *)(lVar1 + 0x5a)) {
          *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
        }
        psVar7 = (short *)FUN_1801cc006(uVar10,0x10,&local_4c);
        *(short **)(param_2 + 0xc) = psVar7;
        uVar2 = local_4c;
        if (local_4c == 0) {
          param_2[10] = 1;
          psVar7[1] = *(short *)(lVar1 + 100);
          *psVar7 = *(short *)(lVar1 + 0x54) + *(short *)(lVar1 + 0x60);
          iVar3 = (uint)*(ushort *)(lVar1 + 0x4a) << 6;
          *(int *)(psVar7 + 2) = iVar3;
          sVar13 = *(short *)(lVar1 + 0x4e);
          if (sVar13 == 0) {
            sVar13 = 0x48;
          }
          sVar12 = (short)*(undefined4 *)(lVar1 + 0x4c);
          if (sVar12 == 0) {
            sVar12 = 0x48;
          }
          iVar3 = FUN_1801cb4a4(iVar3,sVar12,0x48);
          uVar4 = iVar3 + 0x20U & 0xffffffc0;
          *(uint *)(psVar7 + 6) = uVar4;
          iVar3 = (uint)*(ushort *)(lVar1 + 0x60) << 6;
          if (iVar3 < (int)uVar4) {
            *(int *)(psVar7 + 6) = iVar3;
            uVar5 = FUN_1801cb4a4(iVar3,0x48,sVar12);
            *(undefined4 *)(psVar7 + 2) = uVar5;
          }
          else {
            uVar5 = *(undefined4 *)(psVar7 + 2);
          }
          iVar3 = FUN_1801cb4a4(uVar5,sVar13,0x48);
          *(uint *)(psVar7 + 4) = iVar3 + 0x20U & 0xffffffc0;
          local_58 = 0;
          if (*(char *)(lVar1 + 0x5c) == 'M') {
            local_58 = 0x161726d6e;
          }
          local_60 = param_2;
          local_4c = FUN_1801cc9a6(&DAT_18033ba88,0,&local_60,0);
          uVar2 = local_4c;
          if ((local_4c == 0) &&
             (uVar2 = uVar15, *(byte *)(lVar1 + 0x68) <= *(byte *)(lVar1 + 0x69))) {
            param_2[4] = (byte)(*(byte *)(lVar1 + 0x69) - *(byte *)(lVar1 + 0x68)) + 2;
            if (*(uint *)(lVar1 + 0x74) < *(uint *)(lVar1 + 8)) {
              lVar14 = (ulonglong)*(uint *)(lVar1 + 8) - (ulonglong)*(uint *)(lVar1 + 0x74);
              iVar3 = (int)lVar14 + 1;
              uVar8 = FUN_1801cc006(uVar10,iVar3,&local_4c);
              *(undefined8 *)(lVar1 + 0xb0) = uVar8;
              uVar2 = local_4c;
              if (local_4c == 0) {
                FUN_1802a82f0(uVar8,(ulonglong)*(uint *)(lVar1 + 0x74) + *(longlong *)(lVar1 + 0xa0)
                              ,lVar14);
                *(undefined1 *)(*(longlong *)(lVar1 + 0xb0) + lVar14) = 0;
                pcVar11 = *(char **)(lVar1 + 0xb0);
                sVar9 = strlen(pcVar11);
                local_78 = pcVar11;
                local_70 = &local_4c;
                uVar10 = FUN_1801cc8d6(uVar10,1,iVar3,(int)sVar9 + 1);
                *(undefined8 *)(lVar1 + 0xb0) = uVar10;
                uVar2 = local_4c;
                if (local_4c == 0) {
                  *(undefined8 *)(param_2 + 6) = uVar10;
                  *(char **)(param_2 + 8) = "Regular";
                  uVar4 = param_2[3];
                  if ((uVar4 & 2) == 0) {
                    uVar15 = 0;
                    if ((uVar4 & 1) != 0) {
                      *(char **)(param_2 + 8) = "Italic";
                      uVar15 = 0;
                    }
                  }
                  else {
                    if ((uVar4 & 1) == 0) {
                      pcVar11 = "Bold";
                    }
                    else {
                      pcVar11 = "Bold Italic";
                    }
                    *(char **)(param_2 + 8) = pcVar11;
                    uVar15 = 0;
                  }
                  goto LAB_18020d6d9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_4c = uVar2;
  FUN_18020d881(param_2);
  uVar15 = local_4c;
LAB_18020d6d9:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return uVar15;
}

