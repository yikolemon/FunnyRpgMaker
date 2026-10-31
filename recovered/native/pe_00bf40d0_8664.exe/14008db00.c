/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008db00 */

void FUN_14008db00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  
  if (((char)param_1[1] != '\0') && (*param_1 != 0)) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(*param_1 + 1 + lVar2) != '\0');
    pcVar3 = _malloc_base(lVar2 + 2U);
    if (pcVar3 != (char *)0x0) {
      FUN_1400a0d40(pcVar3,lVar2 + 2U,*param_1);
      *param_2 = (longlong)pcVar3;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    thunk_FUN_1400a1290((LPVOID)0x0);
    return;
  }
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}

