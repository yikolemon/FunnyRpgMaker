/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400915a5 */

int FUN_1400915a5(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_2 - param_1;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  iVar1 = FUN_140077ff5(param_1,lVar2);
  if (*(int *)(DAT_140f2a910 + 0x1660) == iVar1) {
    FUN_140090e7f(iVar1,0xb,param_1,param_2);
  }
  return iVar1;
}

