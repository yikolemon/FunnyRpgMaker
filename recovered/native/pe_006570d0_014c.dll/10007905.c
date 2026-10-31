/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10007905 */

undefined4 * FUN_10007905(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      iVar3 = param_2[2];
      uVar2 = iVar3 + 1;
      if ((uint)param_2[3] < uVar2) {
        (**(code **)*param_2)(uVar2);
        iVar3 = param_2[2];
        uVar2 = iVar3 + 1;
      }
      param_2[2] = uVar2;
      *(char *)(param_2[1] + iVar3) = cVar1;
      cVar1 = *param_3;
    }
    *param_1 = param_2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("String pointer is null.");
}

