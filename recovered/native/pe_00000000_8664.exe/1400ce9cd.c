/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ce9cd */

uint FUN_1400ce9cd(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  while( true ) {
    uVar1 = FUN_1400ce903(param_1,param_2);
    if ((int)uVar1 < 0) break;
    iVar2 = FUN_1400cf238(param_1,uVar1);
    if (iVar2 != 0) break;
    param_2 = (ulonglong)uVar1;
  }
  uVar3 = 0;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  return uVar3;
}

