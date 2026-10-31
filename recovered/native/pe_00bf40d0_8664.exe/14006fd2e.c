/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006fd2e */

undefined8 FUN_14006fd2e(longlong param_1,int param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = FUN_14007487a(param_1,param_2);
  if (piVar1 != (int *)0x0) {
    if (param_4 != (int *)0x0) {
      *param_4 = piVar1[3];
    }
    uVar2 = FUN_140020a41(param_3,piVar1[2]);
    return uVar2;
  }
  return 0x8e;
}

