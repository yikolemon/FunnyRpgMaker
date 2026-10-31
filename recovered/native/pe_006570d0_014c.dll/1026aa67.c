/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026aa67 */

void FUN_1026aa67(LPCWSTR param_1)

{
  wchar_t wVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *local_214;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_1027a830(param_1,&DAT_10359c7c);
  if (iVar3 != 0) {
    local_214 = (wchar_t *)0x0;
    pwVar4 = call_wfullpath(local_210,param_1,0x104,&local_214);
    if (pwVar4 != (wchar_t *)0x0) {
      pwVar5 = pwVar4;
      do {
        wVar1 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar1 != L'\0');
      if (((int)pwVar5 - (int)(pwVar4 + 1) >> 1 == 3) ||
         (cVar2 = FUN_1026a9b9(pwVar4), cVar2 != '\0')) {
        GetDriveTypeW(param_1);
        thunk_FUN_10274120(local_214);
        goto LAB_1026ab12;
      }
    }
    thunk_FUN_10274120(local_214);
  }
LAB_1026ab12:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

