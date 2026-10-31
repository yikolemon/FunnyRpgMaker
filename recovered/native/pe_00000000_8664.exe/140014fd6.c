/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140014fd6 */

longlong * FUN_140014fd6(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = param_3[1] + *param_3;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_140015412();
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
        goto LAB_140015037;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_140015037:
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

