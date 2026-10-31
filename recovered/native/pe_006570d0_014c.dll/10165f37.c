/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165f37 */

float10 FUN_10165f37(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  local_2c = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  iVar3 = *(int *)(iVar1 + 0x40);
  local_24 = 0.0;
  if (0 < iVar3) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      if (((*(uint *)(*(int *)(iVar1 + 0x2c) + (uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) &&
         ((*(byte *)(*(int *)(iVar1 + 0x10) + 2 + iVar5) & 4) != 0)) {
        local_28 = local_24;
        uVar2 = FUN_10165174(iVar1,uVar4);
        FUN_100fdb2e(local_1c,uVar2,0,1,0xbf800000);
        fVar6 = (float10)FUN_100fdbca(local_28,local_1c[0]);
        local_24 = (float)fVar6;
        iVar3 = *(int *)(iVar1 + 0x40);
        local_20 = local_24;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x74;
    } while ((int)uVar4 < iVar3);
  }
  local_24 = *(float *)(local_2c + 0xd30) + *(float *)(local_2c + 0xd30) + local_24;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return (float10)local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

