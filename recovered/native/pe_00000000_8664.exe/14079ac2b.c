/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079ac2b */

uint FUN_14079ac2b(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar4 = param_1;
  while( true ) {
    uVar2 = FUN_1407a97c3(uVar4,param_2);
    if ((int)uVar1 <= (int)uVar2) break;
    iVar3 = FUN_1407aa527(param_1 & 0xffffffff,uVar2);
    if (iVar3 != 0) break;
    uVar4 = param_1 & 0xffffffff;
    param_2 = (ulonglong)uVar2;
  }
  if ((int)uVar2 < (int)uVar1) {
    uVar1 = uVar2;
  }
  return uVar1;
}

