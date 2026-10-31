/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180206124 */

undefined8 FUN_180206124(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  puVar2 = (undefined8 *)FUN_180207ad8();
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *param_1;
    uVar3 = (*(code *)*puVar2)(*(undefined8 *)(lVar1 + 0x98),
                               (longlong)*(int *)(lVar1 + 4) * 0xfc + *(longlong *)(lVar1 + 0x1b8),
                               &local_18);
    if ((int)uVar3 == 0) {
      *(undefined8 *)param_1[7] = local_18;
    }
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

