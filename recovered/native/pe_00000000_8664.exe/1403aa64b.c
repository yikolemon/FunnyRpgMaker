/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403aa64b */

void FUN_1403aa64b(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  ushort *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  longlong local_70;
  
  lVar4 = *(longlong *)(param_1 + 0x2b0);
  *(undefined1 *)(lVar4 + 0xb8) = 1;
  puVar5 = *(undefined4 **)(param_1 + 0x38);
  puVar7 = (undefined4 *)FUN_1403aa4b7();
  *(undefined1 *)((longlong)puVar7 + 0x56) = *(undefined1 *)((longlong)puVar5 + 0x56);
  if ((DAT_14062a630 != 0) && ((*(byte *)(DAT_14062a630 + 0x2acd) & 1) != 0)) {
    FUN_14030f4ba("2f), uv (%.6f,%.6f), col %08X\n",*puVar5,puVar5[7],puVar5[8],*puVar7,puVar7[7],
                  puVar7[8]);
  }
  FUN_1403aab5e(param_1);
  uVar13 = *(uint *)(lVar4 + 0x70);
  lVar15 = (longlong)(int)uVar13;
  if (0 < lVar15) {
    uVar11 = 8;
    if (8 < uVar13) {
      uVar11 = (ulonglong)uVar13;
    }
    local_70 = FUN_14030fcc8(uVar11 << 2);
    if (local_70 != 0) {
      if (*(longlong *)(lVar4 + 0x78) != 0) {
        FUN_1404b97c0(local_70,*(longlong *)(lVar4 + 0x78),lVar15 * 4);
      }
      goto code_r0x0001403aa759;
    }
  }
  local_70 = 0;
code_r0x0001403aa759:
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  lVar10 = *(longlong *)(lVar4 + 0x68);
  puVar14 = *(uint **)(lVar4 + 0x78);
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  puVar18 = puVar14 + *(int *)(lVar4 + 0x70);
  do {
    if (puVar14 == puVar18) {
      *(undefined8 *)(lVar4 + 0x9c) = 0;
      for (uVar13 = 0; (int)uVar13 < *(int *)(lVar4 + 0xc0); uVar13 = uVar13 + 1) {
        lVar15 = *(longlong *)(*(longlong *)(lVar4 + 0xd0) + (ulonglong)(uVar13 >> 5) * 8);
        lVar12 = (ulonglong)(uVar13 & 0x1f) * 0x68;
        lVar16 = *(longlong *)(lVar15 + 0x38 + lVar12);
        lVar15 = (longlong)*(int *)(lVar15 + 0x30 + lVar12) * 0x2c + lVar16;
        for (; lVar16 != lVar15; lVar16 = lVar16 + 0x2c) {
          if (*(int *)(lVar16 + 0x28) != -1) {
            puVar9 = (ushort *)FUN_1403a8f0b(param_1);
            *(float *)(lVar16 + 0x18) = (float)*puVar9 * *(float *)(param_1 + 0x54);
            *(float *)(lVar16 + 0x1c) = (float)puVar9[1] * *(float *)(param_1 + 0x58);
            *(float *)(lVar16 + 0x20) =
                 (float)((uint)puVar9[2] + (uint)*puVar9) * *(float *)(param_1 + 0x54);
            *(float *)(lVar16 + 0x24) =
                 (float)((uint)puVar9[3] + (uint)puVar9[1]) * *(float *)(param_1 + 0x58);
          }
        }
      }
      FUN_1403aad30(param_1);
      FUN_1403ab020(param_1);
      *(undefined1 *)(lVar4 + 0xb8) = 0;
      FUN_1403aa477(param_1);
code_r0x0001403aa93f:
      if (local_70 != 0) {
        FUN_14030fda4();
      }
      if (lVar10 != 0) {
        FUN_14030fda4(lVar10);
        return;
      }
      return;
    }
    if ((*puVar14 >> 0x1e & 1) != 0) {
      lVar16 = (longlong)((ulonglong)*puVar14 << 0x2c) >> 0x2c;
      sVar2 = *(short *)(lVar10 + 4 + lVar16 * 8);
      sVar3 = *(short *)(lVar10 + 6 + lVar16 * 8);
      if (sVar2 != 0 || sVar3 != 0) {
        iVar6 = FUN_1403a8bb6(param_1,sVar2,sVar3,puVar14);
        if (iVar6 == -1) {
          if ((DAT_14062a630 != 0) && ((*(byte *)(DAT_14062a630 + 0x2acd) & 1) != 0)) {
            FUN_14030f4ba("re(%d) in window \"%s\"\n",*puVar7);
          }
          *(undefined1 *)((longlong)puVar7 + 0x57) = 1;
          *(undefined8 *)(lVar4 + 0x60) = uVar1;
          lVar16 = *(longlong *)(lVar4 + 0x68);
          *(longlong *)(lVar4 + 0x68) = lVar10;
          if (*(longlong *)(lVar4 + 0x78) != 0) {
            *(undefined8 *)(lVar4 + 0x70) = 0;
            FUN_14030fda4();
            *(undefined8 *)(lVar4 + 0x78) = 0;
          }
          iVar6 = *(int *)(lVar4 + 0x74);
          if (iVar6 < (int)uVar13) {
            if (iVar6 == 0) {
              uVar17 = 8;
            }
            else {
              uVar17 = iVar6 / 2 + iVar6;
            }
            if ((int)uVar17 <= (int)uVar13) {
              uVar17 = uVar13;
            }
            lVar10 = FUN_14030fcc8((longlong)(int)uVar17 << 2);
            if (*(longlong *)(lVar4 + 0x78) != 0) {
              FUN_1404b97c0(lVar10,*(longlong *)(lVar4 + 0x78),(longlong)*(int *)(lVar4 + 0x70) << 2
                           );
              FUN_14030fda4(*(undefined8 *)(lVar4 + 0x78));
            }
            *(longlong *)(lVar4 + 0x78) = lVar10;
            *(uint *)(lVar4 + 0x74) = uVar17;
            *(uint *)(lVar4 + 0x70) = uVar13;
            if ((local_70 != 0) && (lVar10 != 0)) {
              FUN_1404b97c0(lVar10,local_70,lVar15 << 2);
            }
          }
          else {
            *(uint *)(lVar4 + 0x70) = uVar13;
          }
          FUN_1403aa5cb(param_1,puVar5);
          FUN_1403aac21(param_1,param_2,param_3);
          lVar10 = lVar16;
          goto code_r0x0001403aa93f;
        }
        puVar8 = (undefined2 *)FUN_1403a8f0b(param_1,iVar6);
        FUN_1403a7a41(puVar5,*(undefined2 *)(lVar10 + lVar16 * 8),
                      *(undefined2 *)(lVar10 + 2 + lVar16 * 8),puVar7,*puVar8,puVar8[1],puVar8[2],
                      puVar8[3]);
      }
    }
    puVar14 = puVar14 + 1;
  } while( true );
}

