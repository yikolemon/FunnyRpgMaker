/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bed6d */

void FUN_100bed6d(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_100bee20(&local_20);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if ((int)(uint)(uVar1 == 0) <= (int)uVar2) {
    iVar3 = (int)((ulonglong)uVar1 * 0xfff0bdc0);
    iVar5 = uVar2 * -1000000 + ((int)((ulonglong)uVar1 * 0xfff0bdc0 >> 0x20) - uVar1) + 0x7fffffff +
            (uint)(iVar3 != 0);
    uVar4 = (uint)(local_20 < iVar3 - 1U);
    iVar3 = local_1c - iVar5;
    if ((SBORROW4(local_1c,iVar5) != SBORROW4(iVar3,uVar4)) == (int)(iVar3 - uVar4) < 0) {
      local_1c = 0x7fffffff;
      local_20 = 0xffffffff;
    }
    else {
      uVar4 = (uint)((ulonglong)uVar1 * 1000000);
      bVar6 = CARRY4(local_20,uVar4);
      local_20 = local_20 + uVar4;
      local_1c = local_1c + uVar2 * 1000000 + (int)((ulonglong)uVar1 * 1000000 >> 0x20) +
                 (uint)bVar6;
    }
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

