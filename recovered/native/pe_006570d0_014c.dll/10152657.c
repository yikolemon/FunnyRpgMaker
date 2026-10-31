/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10152657 */

uint __fastcall FUN_10152657(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  uVar5 = 0;
  if ((0 < param_2) && ((*(uint *)(param_1 + 8) & 0x400) == 0)) {
    param_2 = param_2 + *(int *)(param_1 + 0x14);
    uVar3 = FUN_100fab4a(*(int *)(param_1 + 0x14),param_2);
    FUN_100f90d5(&local_18,param_2,*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10));
    uVar3 = FUN_100f90d5(&local_1c,uVar3,*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10));
    local_20 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    if ((local_18 != 9) && ((local_18 != 0x20 && (local_18 != 0x3000)))) {
      local_20 = 0;
    }
    bVar1 = FUN_101521bd();
    uVar4 = 0;
    if (((local_1c != 9) && (local_1c != 0x20)) && (local_1c != 0x3000)) {
      uVar4 = local_20;
    }
    cVar2 = FUN_101521bd();
    uVar5 = (uint)(bVar1 ^ 1);
    if (cVar2 == '\0') {
      uVar5 = uVar4 & 0xff;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar5;
}

