/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140065aed */

undefined8 * FUN_140065aed(undefined8 *param_1,undefined8 *param_2,short *param_3)

{
  short sVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_3 != (short *)0x0) {
    sVar1 = *param_3;
    while (sVar1 != 0) {
      param_3 = param_3 + 1;
      lVar2 = param_2[2];
      uVar3 = lVar2 + 1;
      if ((ulonglong)param_2[3] < uVar3) {
        (**(code **)*param_2)(param_2);
        lVar2 = param_2[2];
        uVar3 = lVar2 + 1;
      }
      param_2[2] = uVar3;
      *(short *)(param_2[1] + lVar2 * 2) = sVar1;
      sVar1 = *param_3;
    }
    *param_1 = param_2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("String pointer is null.");
}

