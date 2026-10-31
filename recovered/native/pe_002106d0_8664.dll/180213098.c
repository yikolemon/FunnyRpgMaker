/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180213098 */

undefined8
FUN_180213098(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             char param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  char *local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  FUN_180212ed6();
  local_40 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  uVar3 = 0;
  if (pcVar2 <= local_40) goto LAB_18021313c;
  if (param_5 == '\0') {
    uVar1 = FUN_180216741(&local_40,pcVar2,param_2,param_3);
    *param_4 = uVar1;
    pcVar2 = local_40;
  }
  else {
    uVar3 = 3;
    if (*local_40 != '<') goto LAB_18021313c;
    local_40 = local_40 + 1;
    uVar1 = FUN_180216741(&local_40,pcVar2,param_2,param_3);
    *param_4 = uVar1;
    *param_1 = local_40;
    if ((local_40 < (char *)param_1[2]) && (*local_40 != '>')) goto LAB_18021313c;
    pcVar2 = local_40 + 1;
  }
  *param_1 = pcVar2;
  uVar3 = 0;
LAB_18021313c:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
}

