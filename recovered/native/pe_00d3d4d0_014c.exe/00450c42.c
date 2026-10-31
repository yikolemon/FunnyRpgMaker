/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00450c42 */

int __fastcall FUN_00450c42(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c [19];
  char *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_88;
  iVar17 = *(int *)(param_1 + 100);
  FUN_00450e94(local_7c);
  local_80 = FUN_00450eb7(local_7c,*(int **)(param_1 + 0x68),iVar17,*(int *)(param_1 + 0x88));
  iVar13 = local_80;
  if ((local_80 == 0) &&
     (local_80 = FUN_004512c1(param_1,local_7c,local_30,local_2c), iVar13 = local_80,
     -1 < param_2 && local_80 == 0)) {
    puVar11 = FUN_0041c507(iVar17,0x28,&local_80);
    *(undefined4 **)(param_1 + 0x148) = puVar11;
    iVar13 = local_80;
    if (local_80 == 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x68);
      if (local_24 == 0) {
        *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar2 + 8);
        uVar4 = *puVar2;
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
        *puVar11 = uVar4;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
      }
      else {
        if (puVar2[1] - local_28 < local_24) {
          local_24 = puVar2[1] - local_28;
        }
        pcVar12 = (char *)FUN_0041e773(iVar17,local_24,&local_80);
        *(char **)(param_1 + 0x144) = pcVar12;
        iVar13 = local_80;
        if ((local_80 != 0) ||
           (local_80 = FUN_00451403(pcVar12,local_24,local_28,param_1,&local_84), iVar13 = local_80,
           local_80 != 0)) goto LAB_00450e64;
        FUN_0041d023(*(undefined4 **)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x144),local_84);
        local_28 = 0;
      }
      *(uint *)(param_1 + 0x134) = local_28;
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
            iVar17 = 0x70;
            do {
              iVar13 = *(int *)(param_1 + 0x130);
              if (1000 < *(uint *)(iVar13 + iVar17)) {
                *(undefined4 *)(iVar13 + iVar17) = 7;
              }
              if (1000 < *(uint *)(iVar13 + 4 + iVar17)) {
                *(undefined4 *)(iVar13 + 4 + iVar17) = 1;
              }
              uVar15 = *(uint *)(iVar13 + 0x80 + iVar17);
              uVar3 = *(uint *)(iVar13 + 0x88 + iVar17);
              if ((((uVar15 != 0 && uVar3 == 0) || (4 < uVar3)) ||
                  (puVar1 = (uint *)(iVar13 + 0x84 + iVar17), uVar14 = local_88 - *puVar1,
                  local_88 < *puVar1)) ||
                 ((0x3fffffff < uVar15 || (uVar14 <= uVar3 * uVar15 && uVar3 * uVar15 - uVar14 != 0)
                  ))) {
                iVar13 = 3;
                goto LAB_00450e64;
              }
              uVar16 = uVar16 + 1;
              iVar17 = iVar17 + 0xfc;
            } while (uVar16 < *(uint *)(param_1 + 300));
          }
          iVar13 = FUN_00451592(param_1);
        }
      }
    }
  }
LAB_00450e64:
  local_80 = iVar13;
  thunk_FUN_00451cb6((int)local_7c);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_88);
  }
  return local_80;
}

