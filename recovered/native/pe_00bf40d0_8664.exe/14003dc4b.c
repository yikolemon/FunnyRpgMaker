/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003dc4b */

int FUN_14003dc4b(longlong param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_14003f73e(param_1,param_2,param_3,'\x01');
  if (iVar1 == 0) {
    if (param_2 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)((longlong)param_3 + uVar2 * 4) != 0) {
          return -2;
        }
        uVar2 = uVar2 + 1;
      } while (param_2 != uVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}

