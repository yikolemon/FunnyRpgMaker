/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400606d4 */

undefined8
FUN_1400606d4(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 *param_4,char param_5
             )

{
  ulonglong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  char *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  FUN_140060512(param_1);
  local_40 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  uVar3 = 0;
  if (pcVar2 <= local_40) goto LAB_140060778;
  if (param_5 == '\0') {
    uVar1 = FUN_140063d7d((ulonglong *)&local_40,(ulonglong)pcVar2,param_2,param_3);
    *param_4 = (int)uVar1;
    pcVar2 = local_40;
  }
  else {
    uVar3 = 3;
    if (*local_40 != '<') goto LAB_140060778;
    local_40 = local_40 + 1;
    uVar1 = FUN_140063d7d((ulonglong *)&local_40,(ulonglong)pcVar2,param_2,param_3);
    *param_4 = (int)uVar1;
    *param_1 = local_40;
    if ((local_40 < (char *)param_1[2]) && (*local_40 != '>')) goto LAB_140060778;
    pcVar2 = local_40 + 1;
  }
  *param_1 = pcVar2;
  uVar3 = 0;
LAB_140060778:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_68);
}

