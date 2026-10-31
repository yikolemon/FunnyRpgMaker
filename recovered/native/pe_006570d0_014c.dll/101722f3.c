/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101722f3 */

undefined4 __fastcall FUN_101722f3(void *param_1,int param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  void *local_9c;
  int local_98 [18];
  int aiStack_50 [15];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_a8;
  iVar8 = 0;
  local_98[0x10] = 0;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  _memset(param_1,0,0x400);
  if (0 < param_3) {
    do {
      local_98[*(byte *)(param_2 + iVar8)] = local_98[*(byte *)(param_2 + iVar8)] + 1;
      iVar8 = iVar8 + 1;
    } while (param_3 != iVar8);
  }
  iVar8 = 1;
  do {
    local_a4 = param_2;
    if (1 << ((byte)iVar8 & 0x1f) < local_98[iVar8]) goto LAB_101724bb;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x10);
  iVar6 = 0;
  bVar4 = 0xf;
  local_a8 = 1;
  iVar5 = 0;
  iVar8 = 0;
  do {
    local_98[iVar6 + 0x12] = iVar8;
    *(short *)((int)param_1 + iVar6 * 2 + 0x402) = (short)iVar8;
    *(short *)((int)param_1 + iVar6 * 2 + 0x466) = (short)iVar5;
    iVar1 = local_98[iVar6 + 1];
    iVar8 = iVar8 + iVar1;
    local_9c = param_1;
    if ((iVar1 != 0) && (1 << ((char)iVar6 + 1U & 0x1f) < iVar8)) goto LAB_101724bb;
    *(int *)((int)param_1 + iVar6 * 4 + 0x424) = iVar8 << (bVar4 & 0x1f);
    iVar5 = iVar5 + iVar1;
    iVar8 = iVar8 * 2;
    iVar6 = iVar6 + 1;
    bVar4 = bVar4 - 1;
  } while (iVar6 != 0xf);
  *(undefined4 *)((int)param_1 + 0x460) = 0x10000;
  if (0 < param_3) {
    iVar8 = 0;
    local_a8 = 1;
    do {
      bVar4 = *(byte *)(param_2 + iVar8);
      uVar7 = (uint)bVar4;
      if (uVar7 != 0) {
        local_a0 = local_98[uVar7 + 0x11];
        iVar5 = (uint)*(ushort *)((int)param_1 + uVar7 * 2 + 0x464) +
                (local_a0 - (uint)*(ushort *)((int)param_1 + uVar7 * 2 + 0x400));
        *(byte *)((int)param_1 + iVar5 + 0x484) = bVar4;
        *(ushort *)((int)param_1 + iVar5 * 2 + 0x5a4) = (ushort)iVar8;
        if (bVar4 < 10) {
          uVar2 = (ushort)local_a0 << 8 | (ushort)local_a0 >> 8;
          uVar3 = (uVar2 & 0xf0f) << 4 | (uVar2 & 0xf0f0) >> 4;
          uVar3 = (uVar3 >> 2 & 0x3333) + (uVar3 & 0x3333) * 4;
          uVar3 = (uVar3 >> 1 & 0x5555) + (uVar3 & 0x5555) * 2 >> (0x10 - bVar4 & 0x1f);
          do {
            *(ushort *)((int)param_1 + uVar3 * 2) = (ushort)bVar4 << 9 | (ushort)iVar8;
            uVar3 = uVar3 + (1 << (bVar4 & 0x1f));
          } while (uVar3 < 0x200);
        }
        local_98[uVar7 + 0x11] = local_a0 + 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != param_3);
  }
LAB_101724c7:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_a8;
LAB_101724bb:
  FUN_10170e07();
  local_a8 = 0;
  goto LAB_101724c7;
}

