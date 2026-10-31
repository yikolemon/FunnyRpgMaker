/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140181445 */

undefined8 FUN_140181445(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)0x0;
  piVar1 = (int *)param_2[1];
  if ((*piVar1 != *param_1) || (uVar2 = 0, piVar1[1] != param_1[1])) {
    uVar2 = FUN_1401816c5(*param_2,&local_20);
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
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

