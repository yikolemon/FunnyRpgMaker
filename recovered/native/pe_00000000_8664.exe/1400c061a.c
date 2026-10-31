/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c061a */

uint FUN_1400c061a(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  while( true ) {
    uVar2 = FUN_1400ce967(param_1,param_2);
    if ((int)uVar1 <= (int)uVar2) break;
    iVar3 = FUN_1400cf86f(param_1,uVar2);
    if (iVar3 != 0) break;
    param_2 = (ulonglong)uVar2;
  }
  if ((int)uVar2 < (int)uVar1) {
    uVar1 = uVar2;
  }
  return uVar1;
}

