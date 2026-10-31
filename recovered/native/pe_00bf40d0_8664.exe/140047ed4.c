/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047ed4 */

undefined8 FUN_140047ed4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)FUN_14004a25c(param_1);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)*puVar1)(*(undefined8 *)(*param_1 + 0x98),*param_1 + 0x114,&local_18);
    if ((int)uVar2 == 0) {
      *(undefined8 *)param_1[7] = local_18;
    }
  }
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_38);
}

