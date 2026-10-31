/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400663e2 */

ulonglong FUN_1400663e2(longlong param_1,undefined8 *param_2)

{
  undefined8 unaff_RDI;
  ulonglong uVar1;
  int *piVar2;
  
  FUN_14000cf50(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
  piVar2 = (int *)*param_2;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  do {
    if (piVar2 == (int *)param_2[1]) {
LAB_14006643f:
      return uVar1 & 0xffffffff;
    }
    FUN_140065f7e(param_1);
    if ((*(int *)(param_1 + 0x14) < *piVar2) || (piVar2[1] < *(int *)(param_1 + 0x14))) {
      *(char **)(param_1 + 0x70) = "invalid string: ill-formed UTF-8 byte";
      uVar1 = 0;
      goto LAB_14006643f;
    }
    FUN_14000cf50(param_1 + 0x50);
    piVar2 = piVar2 + 2;
  } while( true );
}

