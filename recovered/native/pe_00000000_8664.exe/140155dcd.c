/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140155dcd */

void FUN_140155dcd(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_140155dfe(param_1,param_2,0,0,0);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_2;
  }
  *param_3 = uVar2;
  return;
}

