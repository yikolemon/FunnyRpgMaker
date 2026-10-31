/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401749bd */

int FUN_1401749bd(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  uint local_5c;
  ushort *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  local_58 = (ushort *)0x0;
  local_4c = (**(code **)(param_1 + 0x2a0))(param_1,0x4350414c,param_2,&local_5c);
  if (local_4c == 0) {
    if (local_5c < 0xc) {
      puVar4 = (ushort *)0x0;
      goto LAB_140174a1e;
    }
    local_4c = FUN_14012dc0a(param_2,local_5c,&local_58);
    puVar5 = local_58;
    if (local_4c != 0) goto LAB_140174a0d;
    puVar4 = (ushort *)FUN_140128a1f(uVar1,0x28,&local_4c);
    if (local_4c == 0) {
      uVar2 = *puVar5 << 8 | *puVar5 >> 8;
      *puVar4 = uVar2;
      if (uVar2 < 2) {
        *(ushort *)(param_1 + 0x388) = puVar5[1] << 8 | puVar5[1] >> 8;
        *(ushort *)(param_1 + 0x370) = puVar5[2] << 8 | puVar5[2] >> 8;
        uVar2 = puVar5[3] << 8 | puVar5[3] >> 8;
        puVar4[1] = uVar2;
        if ((uint)*(ushort *)(param_1 + 0x370) * 2 + 0xc <= local_5c) {
          uVar8 = *(uint *)(puVar5 + 4);
          uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
          if (((uVar8 < local_5c) && ((uint)uVar2 << 2 <= local_5c - uVar8)) &&
             (*(ushort *)(param_1 + 0x388) <= uVar2)) {
            *(ushort **)(puVar4 + 8) = puVar5 + 6;
            *(ulonglong *)(puVar4 + 4) = (ulonglong)uVar8 + (longlong)local_58;
            if (*puVar4 == 1) {
              uVar2 = *(ushort *)(param_1 + 0x370);
              if (local_5c < (uint)uVar2 * 2 + 0x18) goto LAB_140174a1e;
              uVar7 = (ulonglong)((uint)uVar2 + (uint)uVar2);
              uVar8 = *(uint *)((longlong)(puVar5 + 6) + uVar7);
              uVar13 = *(uint *)((longlong)puVar5 + uVar7 + 0x10);
              uVar11 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18;
              uVar8 = *(uint *)((longlong)puVar5 + uVar7 + 0x14);
              if (uVar11 != 0) {
                if ((local_5c <= uVar11) || (local_5c - uVar11 < (uint)uVar2 + (uint)uVar2))
                goto LAB_140174a1e;
                local_78 = 0;
                local_70 = &local_4c;
                puVar5 = (ushort *)FUN_14012b8aa(uVar1,2,0);
                if (local_4c != 0) goto LAB_140174a26;
                uVar2 = *(ushort *)(param_1 + 0x370);
                if (uVar2 != 0) {
                  puVar9 = (ushort *)((ulonglong)uVar11 + (longlong)local_58);
                  puVar12 = puVar5;
                  do {
                    *puVar12 = *puVar9 << 8 | *puVar9 >> 8;
                    puVar12 = puVar12 + 1;
                    puVar9 = puVar9 + 1;
                  } while (puVar12 < puVar5 + uVar2);
                }
                *(ushort **)(param_1 + 0x380) = puVar5;
              }
              uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                       uVar13 << 0x18;
              if (uVar13 != 0) {
                if ((local_5c <= uVar13) ||
                   (local_5c - uVar13 <
                    (uint)*(ushort *)(param_1 + 0x370) + (uint)*(ushort *)(param_1 + 0x370)))
                goto LAB_140174a1e;
                local_78 = 0;
                local_70 = &local_4c;
                puVar5 = (ushort *)FUN_14012b8aa(uVar1,2,0);
                if (local_4c != 0) goto LAB_140174a26;
                uVar2 = *(ushort *)(param_1 + 0x370);
                if (uVar2 != 0) {
                  puVar9 = (ushort *)((ulonglong)uVar13 + (longlong)local_58);
                  puVar12 = puVar5;
                  do {
                    *puVar12 = *puVar9 << 8 | *puVar9 >> 8;
                    puVar12 = puVar12 + 1;
                    puVar9 = puVar9 + 1;
                  } while (puVar12 < puVar5 + uVar2);
                }
                *(ushort **)(param_1 + 0x378) = puVar5;
              }
              uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18;
              if (uVar8 != 0) {
                if ((local_5c <= uVar8) ||
                   (local_5c - uVar8 <
                    (uint)*(ushort *)(param_1 + 0x388) + (uint)*(ushort *)(param_1 + 0x388)))
                goto LAB_140174a1e;
                local_78 = 0;
                local_70 = &local_4c;
                puVar5 = (ushort *)FUN_14012b8aa(uVar1,2,0);
                if (local_4c != 0) goto LAB_140174a26;
                uVar2 = *(ushort *)(param_1 + 0x388);
                if (uVar2 != 0) {
                  puVar9 = (ushort *)((ulonglong)uVar8 + (longlong)local_58);
                  puVar12 = puVar5;
                  do {
                    *puVar12 = *puVar9 << 8 | *puVar9 >> 8;
                    puVar12 = puVar12 + 1;
                    puVar9 = puVar9 + 1;
                  } while (puVar12 < puVar5 + uVar2);
                }
                *(ushort **)(param_1 + 0x390) = puVar5;
              }
            }
            *(ushort **)(puVar4 + 0xc) = local_58;
            *(uint *)(puVar4 + 0x10) = local_5c;
            *(ushort **)(param_1 + 0x4d8) = puVar4;
            local_78 = 0;
            iVar10 = 0;
            local_70 = &local_4c;
            uVar6 = FUN_140128c13(uVar1,4,0,*(undefined2 *)(param_1 + 0x388));
            *(undefined8 *)(param_1 + 0x3a0) = uVar6;
            if (local_4c != 0) goto LAB_140174a26;
            iVar3 = FUN_14017520b(param_1,0);
            if (iVar3 == 0) goto LAB_140174a4d;
          }
        }
      }
LAB_140174a1e:
      local_4c = 8;
    }
  }
  else {
LAB_140174a0d:
    puVar4 = (ushort *)0x0;
  }
LAB_140174a26:
  FUN_14012dd2b(param_2,&local_58);
  FUN_140128b39(uVar1,puVar4);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  iVar10 = local_4c;
LAB_140174a4d:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return iVar10;
}

