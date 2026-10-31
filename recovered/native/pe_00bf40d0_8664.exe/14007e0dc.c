/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007e0dc */

undefined8 FUN_14007e0dc(longlong param_1,char *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"spread");
  if (iVar1 == 0) {
    if (*param_3 - 0x21U < 0xffffffe1) {
      return 6;
    }
    *(int *)(param_1 + 0x78) = *param_3;
  }
  else {
    iVar1 = strcmp(param_2,"flip_sign");
    if (iVar1 == 0) {
      *(bool *)(param_1 + 0x7c) = *param_3 != 0;
    }
    else {
      iVar1 = strcmp(param_2,"flip_y");
      if (iVar1 == 0) {
        *(bool *)(param_1 + 0x7d) = *param_3 != 0;
      }
      else {
        iVar1 = strcmp(param_2,"overlaps");
        if (iVar1 != 0) {
          return 0xc;
        }
        *(char *)(param_1 + 0x7e) = (char)*param_3;
      }
    }
  }
  return 0;
}

