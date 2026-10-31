/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140007eb0 */

ulonglong FUN_140007eb0(longlong param_1,undefined8 *param_2)

{
  undefined8 unaff_RDI;
  ulonglong uVar1;
  int *piVar2;
  
  FUN_140004108(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
  piVar2 = (int *)*param_2;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  do {
    if (piVar2 == (int *)param_2[1]) {
LAB_140007f0d:
      return uVar1 & 0xffffffff;
    }
    FUN_140007a46(param_1);
    if ((*(int *)(param_1 + 0x14) < *piVar2) || (piVar2[1] < *(int *)(param_1 + 0x14))) {
      *(char **)(param_1 + 0x70) = "invalid string: ill-formed UTF-8 byte";
      uVar1 = 0;
      goto LAB_140007f0d;
    }
    FUN_140004108(param_1 + 0x50);
    piVar2 = piVar2 + 2;
  } while( true );
}

