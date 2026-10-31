/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180208bbc */

ulonglong FUN_180208bbc(longlong param_1,int param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar2 = FUN_1801ce63e();
  local_34 = (uint)uVar2;
  uVar3 = 0;
  if (local_34 == 0) {
    uVar1 = FUN_1801ce6a2(param_1,&local_34);
    uVar2 = (ulonglong)local_34;
    if (local_34 == 0) {
      uVar3 = uVar1 & 0xffff;
      if (((0x3332 < (uVar1 & 0xffff)) ||
          (*(uint *)(param_1 + 8) - param_2 <= (uVar1 & 0xffff) + (uVar1 & 0xffff) * 4 + 2)) ||
         (uVar2 = 0,
         *(uint *)(param_1 + 8) <=
         (((uVar1 & 0xffff) + (uVar1 & 0xffff) * 2) * 8 - (uVar1 & 0xffff)) + 0x5f)) {
        uVar2 = 8;
        uVar3 = 0;
      }
    }
  }
  *param_3 = uVar3;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

