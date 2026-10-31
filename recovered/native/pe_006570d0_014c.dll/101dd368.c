/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dd368 */

int __fastcall FUN_101dd368(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int local_38;
  int local_34;
  byte *local_30;
  undefined4 local_2c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  FUN_101dd457();
  cVar1 = FUN_101dd486();
  iVar3 = 0;
  if (cVar1 != '\0') {
    pbVar5 = (byte *)(param_2 + 6);
    local_38 = param_2 + 3;
    local_34 = param_2;
    do {
      uVar2 = *(ushort *)((uint)pbVar5[1] + local_34 + (uint)*pbVar5 * 0x100);
      uVar2 = uVar2 << 8 | uVar2 >> 8;
      local_30 = pbVar5;
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          iVar3 = FUN_101dd4ea(local_2c,param_3);
          if (iVar3 != 0) goto LAB_101dd432;
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
      }
      pbVar5 = local_30 + 2;
      cVar1 = FUN_101dd486();
    } while (cVar1 != '\0');
    iVar3 = 0;
  }
LAB_101dd432:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

