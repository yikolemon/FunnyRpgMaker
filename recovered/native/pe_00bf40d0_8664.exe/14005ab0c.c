/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005ab0c */

uint FUN_14005ab0c(longlong *param_1,uint *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  short *psVar7;
  undefined8 *puVar8;
  size_t sVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  undefined1 auStackY_98 [32];
  uint *local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  lVar10 = *(longlong *)(param_2 + 0x26);
  uVar3 = -param_3;
  if ((int)-param_3 < 0) {
    uVar3 = param_3;
  }
  local_4c = FUN_14005b1f6(param_2,param_3);
  uVar4 = 0;
  if ((int)param_3 < 0 && local_4c == 0) goto LAB_14005ad15;
  uVar14 = local_4c;
  uVar4 = local_4c;
  if ((char)local_4c == '\x02') {
    pauVar5 = FUN_14001c423(lVar10,0xb8,(int *)&local_4c);
    *(undefined1 (**) [32])(param_2 + 0x36) = pauVar5;
    uVar4 = local_4c;
    if (local_4c != 0) goto LAB_14005ad15;
    *param_2 = 1;
    *(undefined4 *)*pauVar5 = 0;
    *(int *)(pauVar5[5] + 8) = (int)param_1[1];
    uVar6 = FUN_14005b9e8((uint *)pauVar5,param_1);
    local_4c = (uint)uVar6;
    if (local_4c == 0 && -1 < (int)param_3) {
      uVar14 = 6;
      uVar4 = uVar3 & 0xffff;
      goto joined_r0x00014005abeb;
    }
    uVar4 = 0;
    uVar14 = local_4c;
    if (local_4c == 0) goto LAB_14005ad15;
  }
  else {
joined_r0x00014005abeb:
    if (uVar4 == 0) {
      lVar1 = *(longlong *)(param_2 + 0x36);
      uVar4 = 3;
      uVar14 = uVar4;
      if (*(short *)(lVar1 + 0x60) != 0) {
        param_2[1] = uVar3 & 0xffff;
        uVar3 = param_2[2];
        param_2[2] = uVar3 | 0x12;
        if (*(short *)(lVar1 + 100) == *(short *)(lVar1 + 0x66)) {
          param_2[2] = uVar3 | 0x16;
        }
        if (*(char *)(lVar1 + 0x56) != '\0') {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
        }
        if (799 < *(ushort *)(lVar1 + 0x5a)) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
        }
        psVar7 = (short *)FUN_14001e961(lVar10,0x10,(int *)&local_4c);
        *(short **)(param_2 + 0xc) = psVar7;
        uVar14 = local_4c;
        if (local_4c == 0) {
          param_2[10] = 1;
          psVar7[1] = *(short *)(lVar1 + 100);
          *psVar7 = *(short *)(lVar1 + 0x54) + *(short *)(lVar1 + 0x60);
          uVar3 = (uint)*(ushort *)(lVar1 + 0x4a) << 6;
          *(uint *)(psVar7 + 2) = uVar3;
          uVar14 = (uint)*(ushort *)(lVar1 + 0x4e);
          if (*(ushort *)(lVar1 + 0x4e) == 0) {
            uVar14 = 0x48;
          }
          uVar13 = (ushort)*(undefined4 *)(lVar1 + 0x4c);
          if (uVar13 == 0) {
            uVar13 = 0x48;
          }
          iVar2 = FUN_14001de7c(uVar3,(uint)uVar13,0x48);
          uVar3 = iVar2 + 0x20U & 0xffffffc0;
          *(uint *)(psVar7 + 6) = uVar3;
          uVar12 = (uint)*(ushort *)(lVar1 + 0x60) * 0x40;
          if ((int)uVar12 < (int)uVar3) {
            *(uint *)(psVar7 + 6) = uVar12;
            uVar3 = FUN_14001de7c(uVar12,0x48,(uint)uVar13);
            *(uint *)(psVar7 + 2) = uVar3;
          }
          else {
            uVar3 = *(uint *)(psVar7 + 2);
          }
          iVar2 = FUN_14001de7c(uVar3,uVar14,0x48);
          *(uint *)(psVar7 + 4) = iVar2 + 0x20U & 0xffffffc0;
          local_58 = 0;
          if (*(char *)(lVar1 + 0x5c) == 'M') {
            local_58 = 0x161726d6e;
          }
          local_60 = param_2;
          local_4c = FUN_14001f301((uint *)&DAT_1400f8bb8,0,(longlong *)&local_60,(undefined8 *)0x0)
          ;
          uVar14 = local_4c;
          if ((local_4c == 0) &&
             (uVar14 = uVar4, *(byte *)(lVar1 + 0x68) <= *(byte *)(lVar1 + 0x69))) {
            param_2[4] = (byte)(*(byte *)(lVar1 + 0x69) - *(byte *)(lVar1 + 0x68)) + 2;
            if (*(uint *)(lVar1 + 0x74) < *(uint *)(lVar1 + 8)) {
              uVar6 = (ulonglong)*(uint *)(lVar1 + 8) - (ulonglong)*(uint *)(lVar1 + 0x74);
              uVar3 = (int)uVar6 + 1;
              puVar8 = (undefined8 *)FUN_14001e961(lVar10,uVar3,(int *)&local_4c);
              *(undefined8 **)(lVar1 + 0xb0) = puVar8;
              uVar14 = local_4c;
              if (local_4c == 0) {
                FUN_1400b3550(puVar8,(undefined8 *)
                                     ((ulonglong)*(uint *)(lVar1 + 0x74) +
                                     *(longlong *)(lVar1 + 0xa0)),uVar6);
                *(undefined1 *)(*(longlong *)(lVar1 + 0xb0) + uVar6) = 0;
                pcVar11 = *(char **)(lVar1 + 0xb0);
                sVar9 = strlen(pcVar11);
                lVar10 = FUN_14001f231(lVar10,1,uVar3,(int)sVar9 + 1,(longlong)pcVar11,
                                       (int *)&local_4c);
                *(longlong *)(lVar1 + 0xb0) = lVar10;
                uVar14 = local_4c;
                if (local_4c == 0) {
                  *(longlong *)(param_2 + 6) = lVar10;
                  *(char **)(param_2 + 8) = "Regular";
                  uVar3 = param_2[3];
                  if ((uVar3 & 2) == 0) {
                    uVar4 = 0;
                    if ((uVar3 & 1) != 0) {
                      *(char **)(param_2 + 8) = "Italic";
                    }
                  }
                  else {
                    if ((uVar3 & 1) == 0) {
                      pcVar11 = "Bold";
                    }
                    else {
                      pcVar11 = "Bold Italic";
                    }
                    *(char **)(param_2 + 8) = pcVar11;
                    uVar4 = 0;
                  }
                  goto LAB_14005ad15;
                }
              }
            }
          }
        }
      }
    }
  }
  local_4c = uVar14;
  FUN_14005aebd((longlong)param_2);
  uVar4 = local_4c;
LAB_14005ad15:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return uVar4;
}

