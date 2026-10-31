/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007329c */

void FUN_14007329c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = param_4;
  cVar2 = FUN_1400730d3(&local_28,param_2,param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = FUN_1400730d3(&local_28,param_3,param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
    cVar2 = FUN_1400730d3(&local_28,param_2,param_1);
    if (cVar2 != '\0') {
      uVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

