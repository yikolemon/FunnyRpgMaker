/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14030fd31 */

void FUN_14030fd31(char *param_1,ulonglong *param_2,char *param_3)

{
  size_t sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 == (ulonglong *)0x0) {
    sVar1 = strlen(param_1);
    uVar3 = sVar1 + 1;
  }
  else {
    uVar3 = *param_2;
  }
  sVar1 = strlen(param_3);
  uVar2 = sVar1 + 1;
  if (uVar3 < uVar2) {
    FUN_14030fda4(param_1);
    param_1 = (char *)FUN_14030fcc8(uVar2);
    if (param_2 != (ulonglong *)0x0) {
      *param_2 = uVar2;
    }
  }
  FUN_1404b97c0(param_1,param_3,uVar2);
  return;
}

