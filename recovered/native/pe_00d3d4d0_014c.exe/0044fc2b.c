/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044fc2b */

int __fastcall FUN_0044fc2b(undefined4 *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  local_18 = 0;
  iVar6 = 0;
  if ((param_1[3] != 0) && (param_1[7] == 0)) {
    piVar5 = (int *)*param_1;
    local_1c = piVar5[7];
    local_24 = (uint)*(byte *)(param_1 + 4);
    uVar9 = param_1[3] + 1;
    iVar6 = FUN_0041efcd(local_1c,4,0,uVar9,0,&local_18);
    param_1[7] = iVar6;
    if ((local_18 == 0) &&
       (local_18 = FUN_00420696((int)piVar5,param_1[2] + param_1[1]), local_18 == 0)) {
      uVar9 = uVar9 * local_24;
      local_18 = FUN_00420be1(piVar5,uVar9);
      if (local_18 == 0) {
        puVar7 = (uint *)param_1[7];
        puVar8 = (uint *)piVar5[8];
        puVar1 = (uint *)((int)puVar8 + uVar9);
        if (local_24 == 1) {
          if (uVar9 != 0) {
            do {
              *puVar7 = (uint)(byte)*puVar8;
              puVar8 = (uint *)((int)puVar8 + 1);
              puVar7 = puVar7 + 1;
            } while (puVar8 < puVar1);
          }
        }
        else if (local_24 == 2) {
          if (uVar9 != 0) {
            iVar6 = 0;
            do {
              puVar2 = (ushort *)((int)puVar8 + iVar6);
              uVar4 = *puVar2;
              *(uint *)((int)puVar7 + iVar6 * 2) = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
              iVar6 = iVar6 + 2;
            } while (puVar2 + 1 < puVar1);
          }
        }
        else if (local_24 == 3) {
          if (uVar9 != 0) {
            do {
              *puVar7 = (uint)*(byte *)((int)puVar8 + 2) |
                        (uint)*(byte *)((int)puVar8 + 1) << 8 | (uint)(byte)*puVar8 << 0x10;
              puVar8 = (uint *)((int)puVar8 + 3);
              puVar7 = puVar7 + 1;
            } while (puVar8 < puVar1);
          }
        }
        else if (uVar9 != 0) {
          iVar6 = 0;
          do {
            puVar3 = (uint *)((int)puVar8 + iVar6);
            uVar9 = *puVar3;
            *(uint *)((int)puVar7 + iVar6) =
                 uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
            iVar6 = iVar6 + 4;
          } while (puVar3 + 1 < puVar1);
        }
        local_20 = piVar5;
        FUN_00420cde(piVar5);
        if (local_18 == 0) {
          iVar6 = 0;
          goto LAB_0044fd8d;
        }
      }
    }
    FUN_0041c607(local_1c,param_1[7]);
    param_1[7] = 0;
    iVar6 = local_18;
  }
LAB_0044fd8d:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return iVar6;
}

