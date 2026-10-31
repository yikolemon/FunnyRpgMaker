/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140162784 */

undefined8
FUN_140162784(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             char param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  char *local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  FUN_1401625c2();
  local_40 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  uVar3 = 0;
  if (pcVar2 <= local_40) goto LAB_140162828;
  if (param_5 == '\0') {
    uVar1 = FUN_140165e2d(&local_40,pcVar2,param_2,param_3);
    *param_4 = uVar1;
    pcVar2 = local_40;
  }
  else {
    uVar3 = 3;
    if (*local_40 != '<') goto LAB_140162828;
    local_40 = local_40 + 1;
    uVar1 = FUN_140165e2d(&local_40,pcVar2,param_2,param_3);
    *param_4 = uVar1;
    *param_1 = local_40;
    if ((local_40 < (char *)param_1[2]) && (*local_40 != '>')) goto LAB_140162828;
    pcVar2 = local_40 + 1;
  }
  *param_1 = pcVar2;
  uVar3 = 0;
LAB_140162828:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

