/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401582a8 */

ulonglong FUN_1401582a8(longlong param_1,int param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14012d612();
  local_34 = (uint)uVar2;
  uVar3 = 0;
  if (local_34 == 0) {
    uVar1 = FUN_14012d676(param_1,&local_34);
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
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

