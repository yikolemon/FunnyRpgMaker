/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140072911 */

int FUN_140072911(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  undefined1 (*pauVar3) [32];
  ushort *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  undefined1 auStackY_98 [32];
  uint local_5c;
  ushort *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  lVar1 = *(longlong *)(param_1 + 0x98);
  local_58 = (ushort *)0x0;
  local_4c = (**(code **)(param_1 + 0x2a0))(param_1,0x4350414c,param_2,&local_5c);
  if (local_4c == 0) {
    if (local_5c < 0xc) {
      pauVar3 = (undefined1 (*) [32])0x0;
      goto LAB_140072972;
    }
    local_4c = FUN_140021039(param_2,local_5c,(longlong *)&local_58);
    puVar4 = local_58;
    if (local_4c != 0) goto LAB_140072961;
    pauVar3 = FUN_14001c423(lVar1,0x28,&local_4c);
    if (local_4c == 0) {
      uVar2 = *puVar4 << 8 | *puVar4 >> 8;
      *(ushort *)*pauVar3 = uVar2;
      if (uVar2 < 2) {
        *(ushort *)(param_1 + 0x388) = puVar4[1] << 8 | puVar4[1] >> 8;
        *(ushort *)(param_1 + 0x370) = puVar4[2] << 8 | puVar4[2] >> 8;
        uVar2 = puVar4[3] << 8 | puVar4[3] >> 8;
        *(ushort *)(*pauVar3 + 2) = uVar2;
        if ((uint)*(ushort *)(param_1 + 0x370) * 2 + 0xc <= local_5c) {
          uVar8 = *(uint *)(puVar4 + 4);
          uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
          if (((uVar8 < local_5c) && ((uint)uVar2 << 2 <= local_5c - uVar8)) &&
             (*(ushort *)(param_1 + 0x388) <= uVar2)) {
            *(ushort **)(*pauVar3 + 0x10) = puVar4 + 6;
            *(ulonglong *)(*pauVar3 + 8) = (ulonglong)uVar8 + (longlong)local_58;
            if (*(short *)*pauVar3 == 1) {
              uVar2 = *(ushort *)(param_1 + 0x370);
              if (local_5c < (uint)uVar2 * 2 + 0x18) goto LAB_140072972;
              uVar7 = (ulonglong)((uint)uVar2 + (uint)uVar2);
              uVar8 = *(uint *)((longlong)(puVar4 + 6) + uVar7);
              uVar13 = *(uint *)((longlong)puVar4 + uVar7 + 0x10);
              uVar11 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18;
              uVar8 = *(uint *)((longlong)puVar4 + uVar7 + 0x14);
              if (uVar11 != 0) {
                if ((local_5c <= uVar11) || (local_5c - uVar11 < (uint)uVar2 + (uint)uVar2))
                goto LAB_140072972;
                puVar4 = (ushort *)FUN_14001f231(lVar1,2,0,(uint)uVar2,0,&local_4c);
                if (local_4c != 0) goto LAB_14007297a;
                uVar2 = *(ushort *)(param_1 + 0x370);
                if (uVar2 != 0) {
                  puVar9 = (ushort *)((ulonglong)uVar11 + (longlong)local_58);
                  puVar12 = puVar4;
                  do {
                    *puVar12 = *puVar9 << 8 | *puVar9 >> 8;
                    puVar12 = puVar12 + 1;
                    puVar9 = puVar9 + 1;
                  } while (puVar12 < puVar4 + uVar2);
                }
                *(ushort **)(param_1 + 0x380) = puVar4;
              }
              uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                       uVar13 << 0x18;
              if (uVar13 != 0) {
                if ((local_5c <= uVar13) ||
                   (uVar2 = *(ushort *)(param_1 + 0x370),
                   local_5c - uVar13 < (uint)uVar2 + (uint)uVar2)) goto LAB_140072972;
                puVar4 = (ushort *)FUN_14001f231(lVar1,2,0,(uint)uVar2,0,&local_4c);
                if (local_4c != 0) goto LAB_14007297a;
                uVar2 = *(ushort *)(param_1 + 0x370);
                if (uVar2 != 0) {
                  puVar9 = (ushort *)((ulonglong)uVar13 + (longlong)local_58);
                  puVar12 = puVar4;
                  do {
                    *puVar12 = *puVar9 << 8 | *puVar9 >> 8;
                    puVar12 = puVar12 + 1;
                    puVar9 = puVar9 + 1;
                  } while (puVar12 < puVar4 + uVar2);
                }
                *(ushort **)(param_1 + 0x378) = puVar4;
              }
              uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18;
              if (uVar8 != 0) {
                if ((local_5c <= uVar8) ||
                   (uVar2 = *(ushort *)(param_1 + 0x388),
                   local_5c - uVar8 < (uint)uVar2 + (uint)uVar2)) goto LAB_140072972;
                puVar4 = (ushort *)FUN_14001f231(lVar1,2,0,(uint)uVar2,0,&local_4c);
                if (local_4c != 0) goto LAB_14007297a;
                uVar2 = *(ushort *)(param_1 + 0x388);
                if (uVar2 != 0) {
                  puVar9 = (ushort *)((ulonglong)uVar8 + (longlong)local_58);
                  puVar12 = puVar4;
                  do {
                    *puVar12 = *puVar9 << 8 | *puVar9 >> 8;
                    puVar12 = puVar12 + 1;
                    puVar9 = puVar9 + 1;
                  } while (puVar12 < puVar4 + uVar2);
                }
                *(ushort **)(param_1 + 0x390) = puVar4;
              }
            }
            *(ushort **)(*pauVar3 + 0x18) = local_58;
            *(uint *)pauVar3[1] = local_5c;
            *(undefined1 (**) [32])(param_1 + 0x4d8) = pauVar3;
            iVar10 = 0;
            lVar5 = FUN_14001c617(lVar1,4,0,(uint)*(ushort *)(param_1 + 0x388),0,&local_4c);
            *(longlong *)(param_1 + 0x3a0) = lVar5;
            if (local_4c != 0) goto LAB_14007297a;
            uVar6 = FUN_14007315f(param_1,0);
            if ((int)uVar6 == 0) goto LAB_1400729a1;
          }
        }
      }
LAB_140072972:
      local_4c = 8;
    }
  }
  else {
LAB_140072961:
    pauVar3 = (undefined1 (*) [32])0x0;
  }
LAB_14007297a:
  FUN_14002115a((longlong)param_2,(longlong *)&local_58);
  FUN_14001c53d(lVar1,(longlong)pauVar3);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  iVar10 = local_4c;
LAB_1400729a1:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return iVar10;
}

