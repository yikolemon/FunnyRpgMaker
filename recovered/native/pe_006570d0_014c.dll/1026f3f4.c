/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026f3f4 */

undefined4 FUN_1026f3f4(uint *param_1,undefined2 *param_2,uint param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  if (param_1 == (uint *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    return 0x16;
  }
  *param_1 = 0;
  if (param_2 == (undefined2 *)0x0) {
    if (param_3 == 0) goto LAB_1026f430;
  }
  else if (param_3 != 0) {
    *param_2 = 0;
LAB_1026f430:
    pwVar3 = common_getenv_nolock<wchar_t>(param_4);
    if (pwVar3 != (wchar_t *)0x0) {
      pwVar5 = pwVar3;
      do {
        wVar1 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar1 != L'\0');
      uVar6 = ((int)pwVar5 - (int)(pwVar3 + 1) >> 1) + 1;
      *param_1 = uVar6;
      if (param_3 != 0) {
        if (param_3 < uVar6) {
          return 0x22;
        }
        iVar4 = FUN_102749e0(param_2,param_3,pwVar3);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    return 0;
  }
  puVar2 = (undefined4 *)FUN_10268ffd();
  *puVar2 = 0x16;
  FUN_10273ea8();
  return 0x16;
}

