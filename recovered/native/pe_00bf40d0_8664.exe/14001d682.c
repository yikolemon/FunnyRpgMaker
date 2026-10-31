/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d682 */

ulonglong FUN_14001d682(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1[1] + 0x90);
  lVar2 = plVar1[2];
  lVar3 = plVar1[3];
  *param_1 = plVar1[1];
  pauVar4 = FUN_14001c423(lVar2,0x38,(int *)&local_34);
  uVar5 = (ulonglong)local_34;
  if (local_34 != 0) goto LAB_14001d736;
  param_1[0x1e] = (longlong)pauVar4;
  if ((*(byte *)(*plVar1 + 1) & 2) == 0) {
    uVar5 = FUN_14001c3bc(lVar2,(undefined8 *)pauVar4);
    if ((int)uVar5 == 0) goto LAB_14001d6f3;
  }
  else {
LAB_14001d6f3:
    if (*(code **)(lVar3 + 0x68) == (code *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(lVar3 + 0x68))(param_1);
    }
  }
  if ((*(byte *)(param_1[1] + 10) & 1) != 0) {
    pauVar4 = FUN_14001c423(lVar2,0x48,(int *)&local_34);
    uVar5 = (ulonglong)local_34;
    if (local_34 == 0) {
      param_1[0x1d] = (longlong)pauVar4;
      uVar5 = 0;
    }
  }
LAB_14001d736:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

