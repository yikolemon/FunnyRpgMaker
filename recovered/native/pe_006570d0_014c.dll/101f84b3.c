/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f84b3 */

int __fastcall FUN_101f84b3(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_18 = 0;
  iVar8 = 0;
  if ((param_1[3] != 0) && (param_1[7] == 0)) {
    iVar8 = *param_1;
    local_1c = *(undefined4 *)(iVar8 + 0x1c);
    local_24 = (uint)*(byte *)(param_1 + 4);
    iVar10 = param_1[3] + 1;
    iVar6 = FUN_101c2a50(local_1c,4,0,iVar10,0,&local_18);
    param_1[7] = iVar6;
    if ((local_18 == 0) && (local_18 = FUN_101c461e(iVar8,param_1[2] + param_1[1]), local_18 == 0))
    {
      iVar10 = iVar10 * local_24;
      local_18 = FUN_101c4b69(iVar8,iVar10);
      if (local_18 == 0) {
        puVar7 = (uint *)param_1[7];
        puVar9 = *(uint **)(iVar8 + 0x20);
        puVar1 = (uint *)((int)puVar9 + iVar10);
        if (local_24 == 1) {
          if (iVar10 != 0) {
            do {
              *puVar7 = (uint)(byte)*puVar9;
              puVar9 = (uint *)((int)puVar9 + 1);
              puVar7 = puVar7 + 1;
            } while (puVar9 < puVar1);
          }
        }
        else if (local_24 == 2) {
          if (iVar10 != 0) {
            iVar6 = 0;
            do {
              puVar2 = (ushort *)((int)puVar9 + iVar6);
              uVar4 = *puVar2;
              *(uint *)((int)puVar7 + iVar6 * 2) = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
              iVar6 = iVar6 + 2;
            } while (puVar2 + 1 < puVar1);
          }
        }
        else if (local_24 == 3) {
          if (iVar10 != 0) {
            do {
              *puVar7 = (uint)*(byte *)((int)puVar9 + 2) |
                        (uint)*(byte *)((int)puVar9 + 1) << 8 | (uint)(byte)*puVar9 << 0x10;
              puVar9 = (uint *)((int)puVar9 + 3);
              puVar7 = puVar7 + 1;
            } while (puVar9 < puVar1);
          }
        }
        else if (iVar10 != 0) {
          iVar6 = 0;
          do {
            puVar3 = (uint *)((int)puVar9 + iVar6);
            uVar5 = *puVar3;
            *(uint *)((int)puVar7 + iVar6) =
                 uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            iVar6 = iVar6 + 4;
          } while (puVar3 + 1 < puVar1);
        }
        local_20 = iVar8;
        FUN_101c4c66(iVar8);
        if (local_18 == 0) {
          iVar8 = 0;
          goto LAB_101f8615;
        }
      }
    }
    FUN_101c0017(local_1c,param_1[7]);
    param_1[7] = 0;
    iVar8 = local_18;
  }
LAB_101f8615:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar8;
}

