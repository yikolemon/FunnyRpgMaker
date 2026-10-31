/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400730d3 */

bool FUN_1400730d3(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_30 = *param_2;
  piVar2 = (int *)FUN_1400705e6(*param_1);
  iVar1 = *piVar2;
  piVar2 = (int *)FUN_1400705e6(*param_1,&local_28);
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return iVar1 < *piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

