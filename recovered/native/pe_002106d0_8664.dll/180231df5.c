/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180231df5 */

undefined8 FUN_180231df5(int *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  piVar1 = (int *)param_3[1];
  if (((*piVar1 == *param_1) && (piVar1[1] == param_1[1])) ||
     ((*param_1 == *param_2 && (param_1[1] == param_2[1])))) {
    FUN_180231d59(param_2,param_3);
  }
  else {
    uVar2 = FUN_180231fd9(*param_3,&local_28);
    if ((int)uVar2 != 0) goto LAB_180231e8a;
    *(undefined4 *)(local_28 + 4) = 2;
    *local_28 = *(undefined8 *)piVar1;
    local_28[2] = *(undefined8 *)param_1;
    local_28[1] = *(undefined8 *)param_2;
    local_28[5] = *(undefined8 *)(piVar1 + 2);
    *(undefined8 **)(piVar1 + 2) = local_28;
    *(undefined8 *)piVar1 = *(undefined8 *)param_2;
  }
  uVar2 = 0;
LAB_180231e8a:
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

