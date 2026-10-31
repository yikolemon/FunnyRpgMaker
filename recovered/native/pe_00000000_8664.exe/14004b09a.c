/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004b09a */

undefined8 * FUN_14004b09a(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      lVar2 = param_2[2];
      uVar3 = lVar2 + 1;
      if ((ulonglong)param_2[3] < uVar3) {
        (**(code **)*param_2)(param_2);
        lVar2 = param_2[2];
        uVar3 = lVar2 + 1;
      }
      param_2[2] = uVar3;
      *(char *)(param_2[1] + lVar2) = cVar1;
      cVar1 = *param_3;
    }
    *param_1 = param_2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("String pointer is null.");
}

