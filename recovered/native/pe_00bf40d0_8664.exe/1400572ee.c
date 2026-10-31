/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400572ee */

int FUN_1400572ee(longlong param_1,longlong param_2,uint param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStackY_c8 [32];
  byte *local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  lVar1 = *(longlong *)(param_1 + 8);
  iVar3 = *(int *)(lVar1 + 0x1f0);
  iVar8 = 6;
  iVar4 = iVar8;
  if (iVar3 != 0) {
    puVar9 = (uint *)((ulonglong)param_3 * 0x10 + *(longlong *)(lVar1 + 0x228));
    plVar2 = *(longlong **)(lVar1 + 0xa0);
    puVar10 = (uint *)(*(longlong *)(lVar1 + 0x1f8) + 0x1c);
    do {
      if ((puVar10[-7] == (uint)*(ushort *)(param_2 + 0x18)) &&
         (puVar10[-6] == (uint)*(ushort *)(param_2 + 0x1a))) {
        uVar5 = puVar10[-5];
        uVar6 = FUN_140020a41((longlong)plVar2,puVar10[-1] + *(int *)(lVar1 + 0x248));
        iVar4 = (int)uVar6;
        if ((int)uVar6 == 0) {
          iVar3 = (uVar5 & 1) + 5;
          if ((uVar5 & 2) == 0) {
            iVar3 = (uVar5 & 1) + 4;
          }
          iVar4 = FUN_140021063(plVar2,(iVar3 + (uint)((uVar5 >> 2 & 1) != 0)) * *puVar10);
          if (iVar4 == 0) {
            FUN_1400576eb((byte *)plVar2[7],(byte *)plVar2[8],*puVar10,puVar10 + -5,*puVar9,
                          &local_4c,&local_50);
            FUN_140021187(plVar2);
            iVar4 = iVar8;
            if (local_50 != 0) {
              local_54 = 0;
              local_58 = 0;
              local_60 = 0;
              local_64 = 0;
              local_68 = 0;
              uVar5 = puVar9[1];
              if (*(uint *)(lVar1 + 0x18c) != *(uint *)(lVar1 + 0x188)) {
                uVar5 = FUN_14001de7c(uVar5,*(uint *)(lVar1 + 0x188),*(uint *)(lVar1 + 0x18c));
              }
              *(uint *)(param_1 + 0x50) = uVar5;
              uVar5 = FUN_14001de7c((uint)*(ushort *)(param_2 + 0x18) << 8,puVar9[1],
                                    *(uint *)(lVar1 + 0x18c));
              local_5c = uVar5;
              uVar6 = FUN_140020a41((longlong)plVar2,local_4c + *(int *)(lVar1 + 0x110));
              iVar4 = (int)uVar6;
              if (((int)uVar6 == 0) && (iVar4 = FUN_140021063(plVar2,local_50), iVar4 == 0)) {
                local_70 = (byte *)plVar2[7];
                uVar6 = FUN_140057865((ulonglong *)&local_70,(ushort *)plVar2[8],uVar5,&local_54,
                                      &local_58,&local_60,&local_64,&local_5c,&local_68);
                uVar5 = local_68;
                iVar4 = (int)uVar6;
                if (iVar4 == 0) {
                  iVar4 = 8;
                  if (local_68 == 2) {
                    local_50 = (local_50 + 1 >> 1) * 0xff;
LAB_14005758a:
                    bVar11 = local_64 * local_60 < local_50;
                    bVar12 = local_64 * local_60 == local_50;
                  }
                  else {
                    if (local_68 == 1) {
                      local_50 = local_50 * 0xf;
                      goto LAB_14005758a;
                    }
                    if (local_68 != 0) goto LAB_140057516;
                    uVar7 = local_64 * local_60 + 7 >> 3;
                    bVar11 = uVar7 < local_50;
                    bVar12 = uVar7 == local_50;
                  }
                  iVar4 = 8;
                  if (((bVar11 || bVar12) && (iVar4 = 0x17, -1 < (int)local_64)) &&
                     ((int)local_58 <= (int)(local_64 ^ 0x7fffffff))) {
                    *(undefined4 *)(param_1 + 0x60) = 0x62697473;
                    *(uint *)(param_1 + 0x6c) = local_60;
                    *(uint *)(param_1 + 0x68) = local_64;
                    *(int *)(param_1 + 0x70) = (int)(local_60 + 7) >> 3;
                    *(undefined1 *)(param_1 + 0x82) = 1;
                    *(uint *)(param_1 + 0x30) = local_60 * 0x40;
                    *(uint *)(param_1 + 0x34) = local_64 << 6;
                    *(uint *)(param_1 + 0x38) = local_54 << 6;
                    *(uint *)(param_1 + 0x3c) = local_58 << 6;
                    *(uint *)(param_1 + 0x40) = ((int)local_5c >> 2) + 0x20U & 0xffffffc0;
                    *(int *)(param_1 + 0x44) = (int)(local_60 * -0x40) >> 1;
                    *(undefined4 *)(param_1 + 0x48) = 0;
                    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
                    *(uint *)(param_1 + 0x90) = local_54;
                    *(uint *)(param_1 + 0x94) = local_58 + local_64;
                    iVar4 = 0;
                    if ((param_4 == '\0') && (iVar4 = FUN_14001d500(param_1), iVar4 == 0)) {
                      FUN_140057b31(local_70,(byte *)plVar2[8],uVar5,
                                    *(byte *)(lVar1 + 0x124) >> 1 & 1,(int *)(param_1 + 0x68));
                      iVar4 = 0;
                    }
                  }
                }
LAB_140057516:
                FUN_140021187(plVar2);
              }
            }
          }
        }
        break;
      }
      puVar10 = puVar10 + 10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_c8);
  }
  return iVar4;
}

