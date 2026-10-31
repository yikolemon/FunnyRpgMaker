/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044e1c0 */

void FUN_14044e1c0(longlong param_1,char *param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  
  pwVar1 = _wsetlocale(0,(wchar_t *)0x0);
  if (*(wchar_t **)(param_1 + 0x48) != pwVar1) {
    if (*(wchar_t **)(param_1 + 0x48) != (wchar_t *)0x0) {
      thunk_FUN_1404a2310();
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (pwVar1 != (wchar_t *)0x0) {
      uVar2 = FUN_14044e6a0();
      *(undefined8 *)(param_1 + 0x48) = uVar2;
    }
  }
  pcVar3 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar3 = setlocale(0,param_2);
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "emoved";
  }
  if (*(char **)(param_1 + 0x58) != pcVar3) {
    if (*(char **)(param_1 + 0x58) != (char *)0x0) {
      thunk_FUN_1404a2310();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    lVar5 = -1;
    do {
      lVar4 = lVar5;
      lVar5 = lVar4 + 1;
    } while (pcVar3[lVar4 + 1] != '\0');
    lVar5 = _malloc_base(lVar4 + 2);
    if (lVar5 != 0) {
      FUN_1404b97c0(lVar5,pcVar3,lVar4 + 2);
    }
    *(longlong *)(param_1 + 0x58) = lVar5;
  }
  return;
}

