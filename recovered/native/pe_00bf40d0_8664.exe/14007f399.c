/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f399 */

int FUN_14007f399(int *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)0x0;
  piVar1 = (int *)param_2[1];
  if ((*piVar1 != *param_1) || (iVar2 = 0, piVar1[1] != param_1[1])) {
    iVar2 = FUN_14007f619(*param_2,&local_20);
    if (iVar2 == 0) {
      *(undefined4 *)(local_20 + 4) = 1;
      *local_20 = *(undefined8 *)piVar1;
      local_20[1] = *(undefined8 *)param_1;
      local_20[5] = *(undefined8 *)(piVar1 + 2);
      *(undefined8 **)(piVar1 + 2) = local_20;
      *(undefined8 *)piVar1 = *(undefined8 *)param_1;
      iVar2 = 0;
    }
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

