/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016fd74 */

void FUN_14016fd74(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)param_1 + 4);
  lVar1 = param_1[1];
  if (iVar2 != 0) {
    do {
      FUN_14016fde1(lVar1,param_2);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[1];
  }
  FUN_140128b39(param_2,lVar1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

