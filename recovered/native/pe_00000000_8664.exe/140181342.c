/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140181342 */

void FUN_140181342(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)*param_1;
  if ((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, lVar1 != 0)) {
    if (plVar3[1] != 0) {
      lVar4 = plVar3[1];
      do {
        lVar2 = *(longlong *)(lVar4 + 0x10);
        local_30 = lVar4;
        FUN_1401821c2(lVar1,&local_30);
        lVar4 = lVar2;
      } while (lVar2 != 0);
      plVar3 = (longlong *)*param_1;
    }
    FUN_140128b39(lVar1,plVar3);
    *param_1 = 0;
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

