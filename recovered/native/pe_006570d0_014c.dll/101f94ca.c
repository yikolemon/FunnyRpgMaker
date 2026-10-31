/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f94ca */

int __fastcall FUN_101f94ca(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_88;
  undefined4 local_84;
  int local_80 [20];
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_88;
  uVar12 = *(undefined4 *)(param_1 + 100);
  FUN_101f971c();
  local_80[0] = FUN_101f973f(uVar12,*(undefined4 *)(param_1 + 0x88));
  iVar13 = local_80[0];
  if ((local_80[0] == 0) &&
     (local_80[0] = FUN_101f9b49(local_30,local_2c), iVar13 = local_80[0],
     -1 < param_2 && local_80[0] == 0)) {
    puVar11 = (undefined4 *)FUN_101bff17(uVar12,0x28,local_80);
    *(undefined4 **)(param_1 + 0x148) = puVar11;
    iVar13 = local_80[0];
    if (local_80[0] == 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x68);
      if (local_24 == 0) {
        *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar2 + 8);
        uVar12 = *puVar2;
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        uVar8 = puVar2[5];
        uVar9 = puVar2[6];
        uVar10 = puVar2[7];
        puVar11[4] = puVar2[4];
        puVar11[5] = uVar8;
        puVar11[6] = uVar9;
        puVar11[7] = uVar10;
        *puVar11 = uVar12;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
      }
      else {
        if ((uint)(puVar2[1] - local_28) < local_24) {
          local_24 = puVar2[1] - local_28;
        }
        uVar12 = FUN_101c21f6(uVar12,local_24,local_80);
        *(undefined4 *)(param_1 + 0x144) = uVar12;
        iVar13 = local_80[0];
        if ((local_80[0] != 0) ||
           (local_80[0] = FUN_101f9c8b(local_28,param_1,&local_84), iVar13 = local_80[0],
           local_80[0] != 0)) goto LAB_101f96ec;
        FUN_101c0a33(*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x144),local_84);
        local_28 = 0;
      }
      *(int *)(param_1 + 0x134) = local_28;
      uVar16 = *(uint *)(param_1 + 0x124);
      iVar13 = 3;
      if ((uVar16 != 0) && (uVar16 < 5 && *(uint *)(param_1 + 0x120) < 5)) {
        local_88 = *(int *)(*(int *)(param_1 + 0x148) + 4) - local_28;
        uVar15 = local_88 - *(uint *)(param_1 + 0x11c);
        if ((*(uint *)(param_1 + 0x11c) <= local_88) &&
           ((*(uint *)(param_1 + 0x128) < 0x20000000 &&
            (uVar16 = *(uint *)(param_1 + 0x128) * (*(uint *)(param_1 + 0x120) + uVar16),
            uVar16 < uVar15 || uVar16 - uVar15 == 0)))) {
          if (*(int *)(param_1 + 300) != 0) {
            uVar16 = 0;
            iVar13 = 0x70;
            do {
              iVar3 = *(int *)(param_1 + 0x130);
              if (1000 < *(uint *)(iVar3 + iVar13)) {
                *(undefined4 *)(iVar3 + iVar13) = 7;
              }
              if (1000 < *(uint *)(iVar3 + 4 + iVar13)) {
                *(undefined4 *)(iVar3 + 4 + iVar13) = 1;
              }
              uVar15 = *(uint *)(iVar3 + 0x80 + iVar13);
              uVar4 = *(uint *)(iVar3 + 0x88 + iVar13);
              if ((((uVar15 != 0 && uVar4 == 0) || (4 < uVar4)) ||
                  (puVar1 = (uint *)(iVar3 + 0x84 + iVar13), uVar14 = local_88 - *puVar1,
                  local_88 < *puVar1)) ||
                 ((0x3fffffff < uVar15 || (uVar14 <= uVar4 * uVar15 && uVar4 * uVar15 - uVar14 != 0)
                  ))) {
                iVar13 = 3;
                goto LAB_101f96ec;
              }
              uVar16 = uVar16 + 1;
              iVar13 = iVar13 + 0xfc;
            } while (uVar16 < *(uint *)(param_1 + 300));
          }
          iVar13 = FUN_101f9e1a();
        }
      }
    }
  }
LAB_101f96ec:
  local_80[0] = iVar13;
  thunk_FUN_101fa53e();
  if (DAT_10388d00 != (local_14 ^ (uint)&local_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_80[0];
}

