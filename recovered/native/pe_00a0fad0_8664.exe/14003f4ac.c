/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003f4ac */

longlong * FUN_14003f4ac(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  local_28 = param_3[1] + *param_3;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_14003f704();
    if (cVar1 != '\0') {
      iVar2 = fsetpos(*(FILE **)(param_1 + 0x80),&local_28);
      if (iVar2 == 0) {
        lVar3 = param_3[2];
        *(longlong *)(param_1 + 0x74) = lVar3;
        if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
          iVar2 = *(int *)(param_1 + 0x90);
          lVar3 = *(longlong *)(param_1 + 0x88);
          **(longlong **)(param_1 + 0x18) = lVar3;
          **(longlong **)(param_1 + 0x38) = lVar3;
          **(int **)(param_1 + 0x50) = iVar2 - (int)lVar3;
          lVar3 = *(longlong *)(param_1 + 0x74);
        }
        *param_2 = local_28;
        param_2[1] = 0;
        param_2[2] = lVar3;
        goto LAB_14003f50d;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_14003f50d:
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_48);
}

