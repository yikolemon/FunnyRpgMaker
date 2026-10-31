/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f296 */

void FUN_14007f296(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)*param_1;
  if ((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, lVar1 != 0)) {
    if (plVar3[1] != 0) {
      lVar4 = plVar3[1];
      do {
        lVar2 = *(longlong *)(lVar4 + 0x10);
        local_30 = lVar4;
        FUN_140080116(lVar1,&local_30);
        lVar4 = lVar2;
      } while (lVar2 != 0);
      plVar3 = (longlong *)*param_1;
    }
    FUN_14001c53d(lVar1,(longlong)plVar3);
    *param_1 = 0;
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

