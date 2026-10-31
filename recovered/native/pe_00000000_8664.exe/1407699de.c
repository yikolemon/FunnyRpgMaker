/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407699de */

ulonglong FUN_1407699de(ulonglong param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  char unaff_retaddr;
  
  if ((int)param_1 == 0) {
    return 0;
  }
  do {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x3a8);
    if (param_2 != '\0') {
      uVar1 = (ulonglong)*(uint *)(uVar1 + 0x3ac);
    }
    if (unaff_retaddr != '\0') {
      uVar1 = (ulonglong)*(uint *)(uVar1 + 0x3b0);
    }
    iVar2 = (int)param_1;
    param_1 = uVar1;
  } while (iVar2 != (int)uVar1);
  return uVar1;
}

