/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400561f8 */

ulonglong FUN_1400561f8(longlong *param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar2 = FUN_140020a41((longlong)param_1,param_2);
  local_34 = (uint)uVar2;
  uVar3 = 0;
  if (local_34 == 0) {
    uVar1 = FUN_140020aa5(param_1,&local_34);
    uVar2 = (ulonglong)local_34;
    if (local_34 == 0) {
      uVar3 = (uint)uVar1;
      if (((0x3332 < uVar1) ||
          (*(uint *)(param_1 + 1) - param_2 <= (uint)uVar1 + (uint)uVar1 * 4 + 2)) ||
         (uVar2 = 0,
         *(uint *)(param_1 + 1) <= (((uint)uVar1 + (uint)uVar1 * 2) * 8 - (uint)uVar1) + 0x5f)) {
        uVar2 = 8;
        uVar3 = 0;
      }
    }
  }
  *param_3 = uVar3;
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

