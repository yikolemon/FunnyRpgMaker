/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100061bf */

char * FUN_100061bf(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined4 extraout_EDX;
  int iVar2;
  int local_18;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  pcVar1 = (char *)(param_1 + 1);
  if (pcVar1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Invalid format string.");
  }
  if (*pcVar1 == '{') {
    FUN_100062e9(pcVar1,param_1 + 2,*(undefined4 *)(param_3 + 0x10));
    *(undefined4 *)(param_3 + 0x10) = extraout_EDX;
  }
  else {
    if (*pcVar1 == '}') {
      iVar2 = *(int *)(param_3 + 0xc);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Can not switch from manual to automatic indexing");
      }
      *(int *)(param_3 + 0xc) = iVar2 + 1;
    }
    else {
      local_18 = param_3;
      local_14 = -1;
      pcVar1 = (char *)FUN_100065d2(pcVar1,param_2,&local_18);
      if (pcVar1 == param_2) {
LAB_100062a0:
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Missing \'}\' in format string.");
      }
      if (*pcVar1 == ':') {
        pcVar1 = (char *)FUN_1000669c(local_14,pcVar1 + 1,param_2);
        if ((pcVar1 == param_2) || (*pcVar1 != '}')) {
                    /* WARNING: Subroutine does not return */
          FUN_10006198("Unknown format specifier.");
        }
        goto LAB_10006271;
      }
      iVar2 = local_14;
      if (*pcVar1 != '}') goto LAB_100062a0;
    }
    FUN_10006530(iVar2,pcVar1);
  }
LAB_10006271:
  if (DAT_10388d00 != (local_10 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return pcVar1 + 1;
}

