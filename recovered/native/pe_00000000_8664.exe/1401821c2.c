/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401821c2 */

void FUN_1401821c2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && (lVar2 = *param_2, lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar2 = *(longlong *)(lVar2 + 8);
      do {
        lVar1 = *(longlong *)(lVar2 + 0x28);
        local_30 = lVar2;
        FUN_14018236a(param_1,&local_30);
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar2 = *param_2;
    }
    FUN_140128b39(param_1,lVar2);
    *param_2 = 0;
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

