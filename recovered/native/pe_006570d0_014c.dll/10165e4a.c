/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165e4a */

float10 FUN_10165e4a(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  local_2c = DAT_1039d74c;
  local_24 = *(float *)(DAT_1039d74c + 0x1228);
  iVar3 = *(int *)(iVar1 + 0x40);
  if (0 < iVar3) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      if (((*(uint *)(*(int *)(iVar1 + 0x2c) + (uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) &&
         ((*(byte *)(*(int *)(iVar1 + 0x10) + 1 + iVar4) & 0x10) == 0)) {
        local_28 = local_24;
        uVar2 = FUN_10165174(iVar1,uVar5);
        FUN_100fdb2e(local_1c,uVar2,0,0,0xbf800000);
        fVar6 = (float10)FUN_100fdbca(local_28,local_18);
        local_24 = (float)fVar6;
        iVar3 = *(int *)(iVar1 + 0x40);
        local_20 = local_24;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x74;
    } while ((int)uVar5 < iVar3);
  }
  local_24 = *(float *)(local_2c + 0xd30) + *(float *)(local_2c + 0xd30) + local_24;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return (float10)local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

