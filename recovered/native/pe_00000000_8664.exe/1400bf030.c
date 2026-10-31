/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bf030 */

void FUN_1400bf030(undefined8 param_1,undefined8 param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  char *local_30;
  uint local_28;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_30 = "%08X";
  if ((param_5 & 2) == 0) {
    local_30 = "%d";
  }
  local_38 = &local_1c;
  if (param_4 < 1) {
    local_38 = (int *)0x0;
  }
  piVar1 = (int *)0x0;
  if (0 < param_3) {
    piVar1 = &local_20;
  }
  local_28 = param_5;
  local_20 = param_3;
  local_1c = param_4;
  FUN_1400be984(param_1,4,param_2,piVar1);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

