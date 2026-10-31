/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140053760 */

undefined8 FUN_140053760(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  puVar2 = (undefined8 *)FUN_140055114(param_1);
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
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_38);
}

