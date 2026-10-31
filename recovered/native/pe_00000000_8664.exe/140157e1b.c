/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140157e1b */

undefined8 FUN_140157e1b(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  
  FUN_140157ef9();
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x18c)) {
    if (*param_4 != 0) {
      iVar1 = FUN_14012a478();
      *param_4 = iVar1;
    }
    if (param_4[1] != 0) {
      iVar1 = FUN_14012a478(param_4[1],*(undefined4 *)(param_1 + 0x188),
                            *(undefined4 *)(param_1 + 0x18c));
      param_4[1] = iVar1;
    }
  }
  return 0;
}

