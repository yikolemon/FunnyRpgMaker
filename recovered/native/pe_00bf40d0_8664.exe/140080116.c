/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140080116 */

void FUN_140080116(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && (lVar2 = *param_2, lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar2 = *(longlong *)(lVar2 + 8);
      do {
        lVar1 = *(longlong *)(lVar2 + 0x28);
        local_30 = lVar2;
        FUN_1400802be(param_1,&local_30);
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar2 = *param_2;
    }
    FUN_14001c53d(param_1,lVar2);
    *param_2 = 0;
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

