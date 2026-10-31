/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004592e */

undefined4 * FUN_1004592e(undefined4 *param_1,undefined4 *param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 != (short *)0x0) {
    sVar1 = *param_3;
    while (sVar1 != 0) {
      param_3 = param_3 + 1;
      iVar3 = param_2[2];
      uVar2 = iVar3 + 1;
      if ((uint)param_2[3] < uVar2) {
        (**(code **)*param_2)(uVar2);
        iVar3 = param_2[2];
        uVar2 = iVar3 + 1;
      }
      param_2[2] = uVar2;
      *(short *)(param_2[1] + iVar3 * 2) = sVar1;
      sVar1 = *param_3;
    }
    *param_1 = param_2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("String pointer is null.");
}

