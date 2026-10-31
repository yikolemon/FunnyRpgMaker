/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101520da */

byte __fastcall FUN_101520da(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int local_18;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  bVar5 = 0;
  if ((0 < param_2) && ((*(uint *)(param_1 + 8) & 0x400) == 0)) {
    param_2 = param_2 + *(int *)(param_1 + 0x14);
    uVar6 = FUN_100fab4a(*(int *)(param_1 + 0x14),param_2);
    FUN_100f90d5(&local_14,param_2,*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10));
    FUN_100f90d5(&local_18,uVar6,*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10));
    bVar1 = 1;
    if ((local_18 != 9) && ((local_18 != 0x20 && (local_18 != 0x3000)))) {
      bVar1 = 0;
    }
    bVar2 = FUN_101521bd();
    bVar3 = 0;
    if (((local_14 != 9) && (local_14 != 0x20)) && (local_14 != 0x3000)) {
      bVar3 = 1;
    }
    cVar4 = FUN_101521bd();
    bVar5 = bVar2 ^ 1;
    if (cVar4 == '\0') {
      bVar5 = (bVar1 | bVar2) & bVar3;
    }
  }
  if (DAT_10388d00 != (local_10 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return bVar5;
}

