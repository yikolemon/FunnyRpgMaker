/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402173c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1402173c0(longlong param_1,char *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  pcVar4 = (char *)(param_1 + 1);
  if (pcVar4 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c("ne.");
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
        FUN_14021738c("isplaySize: %.2f,%.2f");
      }
      *(longlong *)(param_3 + 0x18) = lVar2 + 1;
    }
    else {
      local_28 = -1;
      local_30 = param_3;
      pcVar4 = (char *)FUN_14021780d(pcVar4);
      if (pcVar4 == param_2) {
LAB_1402174e4:
                    /* WARNING: Subroutine does not return */
        FUN_14021738c("elements don\'t have stable identifiers so we need to provide one.");
      }
      if (*pcVar4 == ':') {
        pcVar4 = (char *)FUN_1402178f4(param_3,local_28,pcVar4 + 1,param_2);
        if ((pcVar4 == param_2) || (*pcVar4 != '}')) {
                    /* WARNING: Subroutine does not return */
          FUN_14021738c(
                       " clicking outside the scrollbar grab.\nWhen disabled, always scroll to clicked location.\nWhen enabled, Shift+Click scrolls to clicked location."
                       );
        }
        goto LAB_1402174a9;
      }
      lVar2 = local_28;
      if (*pcVar4 != '}') goto LAB_1402174e4;
    }
    FUN_140217744(param_3,lVar2,pcVar4);
  }
LAB_1402174a9:
  if (ram0x000140613b10 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
  }
  return pcVar4 + 1;
}

