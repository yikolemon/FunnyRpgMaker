/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401814e1 */

undefined8 FUN_1401814e1(int *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  piVar1 = (int *)param_3[1];
  if (((*piVar1 == *param_1) && (piVar1[1] == param_1[1])) ||
     ((*param_1 == *param_2 && (param_1[1] == param_2[1])))) {
    FUN_140181445(param_2,param_3);
  }
  else {
    uVar2 = FUN_1401816c5(*param_3,&local_28);
    if ((int)uVar2 != 0) goto LAB_140181576;
    *(undefined4 *)(local_28 + 4) = 2;
    *local_28 = *(undefined8 *)piVar1;
    local_28[2] = *(undefined8 *)param_1;
    local_28[1] = *(undefined8 *)param_2;
    local_28[5] = *(undefined8 *)(piVar1 + 2);
    *(undefined8 **)(piVar1 + 2) = local_28;
    *(undefined8 *)piVar1 = *(undefined8 *)param_2;
  }
  uVar2 = 0;
LAB_140181576:
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

