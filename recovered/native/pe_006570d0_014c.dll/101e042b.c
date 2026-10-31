/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e042b */

void __fastcall FUN_101e042b(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  ushort uVar9;
  int *piVar10;
  int iVar11;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  undefined *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  iVar3 = *param_1;
  iVar11 = param_1[2];
  local_24 = *(undefined4 *)(iVar3 + 0x5c);
  if (param_1[1] != 0) {
    uVar5 = 0;
    do {
      *(undefined2 *)(iVar11 + uVar5 * 2) = 0x1fff;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[1]);
  }
  iVar6 = FUN_101c29e3(iVar3,0x756e6963);
  if (iVar6 == 0) {
    puVar7 = &DAT_1030a854;
    local_30 = 0;
    local_2c = 0xffffffff;
    local_34 = iVar11;
    do {
      puVar4 = (&PTR_DAT_1030af74)[*(int *)(puVar7 + 8)];
      piVar10 = *(int **)(puVar4 + 4);
      if (piVar10 != (int *)0x0) {
        if (*(int *)(puVar7 + 0x10) == 10) {
          if (*(int *)(puVar7 + 8) == *(int *)(param_1[0x66] + 0x10)) {
            local_2c = local_30;
          }
          iVar11 = *piVar10;
          local_20 = puVar4;
          if (iVar11 != 0) {
            local_28 = local_30 | 0x2000;
            do {
              local_18 = FUN_101c196f(iVar3,iVar11);
              if (((local_18 != 0) && (local_18 < (uint)param_1[1])) &&
                 ((~*(ushort *)(local_34 + local_18 * 2) & 0x1fff) == 0)) {
                *(short *)(local_34 + local_18 * 2) = (short)local_28;
              }
              uVar5 = FUN_101c2c13(iVar3,iVar11,&local_18);
              iVar11 = local_34;
              for (; (local_18 != 0 && (uVar5 <= (uint)piVar10[1]));
                  uVar5 = FUN_101c2c13(iVar3,uVar5,&local_18)) {
                if ((local_18 < (uint)param_1[1]) &&
                   ((~*(ushort *)(iVar11 + local_18 * 2) & 0x1fff) == 0)) {
                  *(short *)(iVar11 + local_18 * 2) = (short)local_28;
                }
              }
              iVar11 = piVar10[2];
              piVar10 = piVar10 + 2;
            } while (iVar11 != 0);
          }
          piVar10 = *(int **)(local_20 + 8);
          iVar6 = *piVar10;
          while (iVar11 = local_34, iVar6 != 0) {
            local_1c = FUN_101c196f(iVar3,iVar6);
            if (((local_1c != 0) && (local_1c < (uint)param_1[1])) &&
               (uVar9 = *(ushort *)(local_34 + local_1c * 2), local_30 == (uVar9 & 0x1fff))) {
              *(ushort *)(local_34 + local_1c * 2) = uVar9 | 0x4000;
            }
            uVar5 = FUN_101c2c13(iVar3,iVar6,&local_1c);
            iVar11 = local_34;
            for (; (local_1c != 0 && (uVar5 <= (uint)piVar10[1]));
                uVar5 = FUN_101c2c13(iVar3,uVar5,&local_1c)) {
              if ((local_1c < (uint)param_1[1]) &&
                 (uVar9 = *(ushort *)(iVar11 + local_1c * 2), iVar11 = local_34,
                 local_30 == (uVar9 & 0x1fff))) {
                *(ushort *)(local_34 + local_1c * 2) = uVar9 | 0x4000;
              }
            }
            piVar1 = piVar10 + 2;
            piVar10 = piVar10 + 2;
            iVar6 = *piVar1;
          }
        }
        else {
          FUN_101d831b(param_1,puVar7,iVar11,0);
        }
      }
      puVar7 = (&PTR_DAT_1030b06c)[local_30];
      local_30 = local_30 + 1;
    } while (local_30 != 0x57);
    puVar7 = &DAT_1030a854;
    iVar6 = -0x15c;
    local_30 = 0x57;
    do {
      if (*(int *)(puVar7 + 0x10) == 10) {
        FUN_101d831b(param_1,puVar7,iVar11,0);
      }
      puVar7 = *(undefined **)(&DAT_1030b1c8 + iVar6);
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0);
    FUN_101d831b(param_1,(&PTR_DAT_1030b068)[local_2c & 0xffff],iVar11,1);
    iVar6 = 0x30;
    do {
      uVar5 = FUN_101c196f(iVar3,iVar6);
      if ((uVar5 != 0) && (uVar5 < (uint)param_1[1])) {
        pbVar2 = (byte *)(iVar11 + 1 + uVar5 * 2);
        *pbVar2 = *pbVar2 | 0x80;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x3a);
  }
  if ((*(int *)(param_1[0x66] + 0xc) != 0x1fff) && (uVar5 = param_1[1], uVar5 != 0)) {
    uVar8 = 0;
    do {
      uVar9 = *(ushort *)(iVar11 + uVar8 * 2);
      if ((~uVar9 & 0x1fff) == 0) {
        uVar9 = uVar9 & 0xe000;
        *(ushort *)(iVar11 + uVar8 * 2) = uVar9;
        *(ushort *)(iVar11 + uVar8 * 2) = uVar9 | *(ushort *)(param_1[0x66] + 0xc);
        uVar5 = param_1[1];
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  *(undefined4 *)(iVar3 + 0x5c) = local_24;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_34)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

