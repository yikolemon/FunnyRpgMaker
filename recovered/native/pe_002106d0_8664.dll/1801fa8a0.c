/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fa8a0 */

undefined8 FUN_1801fa8a0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)FUN_1801fcc22();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)*puVar1)(*(undefined8 *)(*param_1 + 0x98),*param_1 + 0x114,&local_18);
    if ((int)uVar2 == 0) {
      *(undefined8 *)param_1[7] = local_18;
    }
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

