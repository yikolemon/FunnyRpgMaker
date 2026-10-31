/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f4762 */

undefined8 FUN_1801f4762(longlong param_1,char *param_2,int *param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  uVar2 = 0xc;
  if (iVar1 == 0) {
    if (param_4 == '\0') {
      iVar1 = *param_3;
    }
    else {
      iVar1 = FUN_18028b370(param_3,0,10);
    }
    if (iVar1 != 0x23) {
      if ((iVar1 != 0x28) && (iVar1 != 0x26)) {
        return 7;
      }
      iVar1 = 0x28;
    }
    *(int *)(param_1 + 0x70) = iVar1;
    uVar2 = 0;
  }
  return uVar2;
}

