/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180231d59 */

undefined8 FUN_180231d59(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)0x0;
  piVar1 = (int *)param_2[1];
  if ((*piVar1 != *param_1) || (uVar2 = 0, piVar1[1] != param_1[1])) {
    uVar2 = FUN_180231fd9(*param_2,&local_20);
    if ((int)uVar2 == 0) {
      *(undefined4 *)(local_20 + 4) = 1;
      *local_20 = *(undefined8 *)piVar1;
      local_20[1] = *(undefined8 *)param_1;
      local_20[5] = *(undefined8 *)(piVar1 + 2);
      *(undefined8 **)(piVar1 + 2) = local_20;
      *(undefined8 *)piVar1 = *(undefined8 *)param_1;
      uVar2 = 0;
    }
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

