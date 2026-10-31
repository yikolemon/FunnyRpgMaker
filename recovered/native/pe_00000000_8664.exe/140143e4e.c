/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140143e4e */

undefined8 FUN_140143e4e(longlong param_1,char *param_2,int *param_3,char param_4)

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
      iVar1 = FUN_1401a9174(param_3,0,10);
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

