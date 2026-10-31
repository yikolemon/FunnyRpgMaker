/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f435 */

int FUN_14007f435(int *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  piVar1 = (int *)param_3[1];
  if (((*piVar1 == *param_1) && (piVar1[1] == param_1[1])) ||
     ((*param_1 == *param_2 && (param_1[1] == param_2[1])))) {
    FUN_14007f399(param_2,param_3);
  }
  else {
    iVar2 = FUN_14007f619(*param_3,&local_28);
    if (iVar2 != 0) goto LAB_14007f4ca;
    *(undefined4 *)(local_28 + 4) = 2;
    *local_28 = *(undefined8 *)piVar1;
    local_28[2] = *(undefined8 *)param_1;
    local_28[1] = *(undefined8 *)param_2;
    local_28[5] = *(undefined8 *)(piVar1 + 2);
    *(undefined8 **)(piVar1 + 2) = local_28;
    *(undefined8 *)piVar1 = *(undefined8 *)param_2;
  }
  iVar2 = 0;
LAB_14007f4ca:
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_48)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_48);
}

