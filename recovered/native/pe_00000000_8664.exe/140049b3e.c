/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140049b3e */

char * FUN_140049b3e(longlong param_1,char *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  pcVar4 = (char *)(param_1 + 1);
  if (pcVar4 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140049b0a("Invalid format string.");
  }
  if (*pcVar4 == '{') {
    puVar1 = *(undefined8 **)(param_3 + 0x20);
    lVar2 = puVar1[2];
    uVar3 = lVar2 + 1;
    if ((ulonglong)puVar1[3] < uVar3) {
      (**(code **)*puVar1)(puVar1);
      lVar2 = puVar1[2];
      uVar3 = lVar2 + 1;
    }
    puVar1[2] = uVar3;
    *(undefined1 *)(puVar1[1] + lVar2) = 0x7b;
    *(undefined8 **)(param_3 + 0x20) = puVar1;
  }
  else {
    if (*pcVar4 == '}') {
      lVar2 = *(longlong *)(param_3 + 0x18);
      if (lVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140049b0a("Can not switch from manual to automatic indexing");
      }
      *(longlong *)(param_3 + 0x18) = lVar2 + 1;
    }
    else {
      local_28 = -1;
      local_30 = param_3;
      pcVar4 = (char *)FUN_140049efd(pcVar4);
      if (pcVar4 == param_2) {
LAB_140049c62:
                    /* WARNING: Subroutine does not return */
        FUN_140049b0a("Missing \'}\' in format string.");
      }
      if (*pcVar4 == ':') {
        pcVar4 = (char *)FUN_140049fe4(param_3,local_28,pcVar4 + 1,param_2);
        if ((pcVar4 == param_2) || (*pcVar4 != '}')) {
                    /* WARNING: Subroutine does not return */
          FUN_140049b0a("Unknown format specifier.");
        }
        goto LAB_140049c27;
      }
      lVar2 = local_28;
      if (*pcVar4 != '}') goto LAB_140049c62;
    }
    FUN_140049e34(param_3,lVar2,pcVar4);
  }
LAB_140049c27:
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
  }
  return pcVar4 + 1;
}

