/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400865d0 */

void FUN_1400865d0(longlong param_1,char *param_2)

{
  wchar_t *pwVar1;
  char *pcVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 *puVar5;
  char *pcVar6;
  longlong lVar7;
  
  pwVar4 = _wsetlocale(0,(wchar_t *)0x0);
  pwVar1 = *(wchar_t **)(param_1 + 0x48);
  if (pwVar1 != pwVar4) {
    if (pwVar1 != (wchar_t *)0x0) {
      thunk_FUN_1400a1290(pwVar1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (pwVar4 != (wchar_t *)0x0) {
      puVar5 = FUN_1400869c0((undefined8 *)pwVar4);
      *(undefined8 **)(param_1 + 0x48) = puVar5;
    }
  }
  pcVar6 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar6 = setlocale(0,param_2);
  }
  pcVar2 = *(char **)(param_1 + 0x58);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "*";
  }
  if (pcVar2 != pcVar6) {
    if (pcVar2 != (char *)0x0) {
      thunk_FUN_1400a1290(pcVar2);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    lVar3 = -1;
    do {
      lVar7 = lVar3;
      lVar3 = lVar7 + 1;
    } while (pcVar6[lVar7 + 1] != '\0');
    puVar5 = _malloc_base(lVar7 + 2U);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1400b3550(puVar5,(undefined8 *)pcVar6,lVar7 + 2U);
    }
    *(undefined8 **)(param_1 + 0x58) = puVar5;
  }
  return;
}

