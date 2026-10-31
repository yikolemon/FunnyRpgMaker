/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003fc2e */

void FUN_1003fc2e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = __alldiv(uVar1,uVar2,10000000,0);
  iVar4 = __alldiv(uVar1,uVar2,10000,0);
  FUN_100245fe(iVar4 + iVar3 * -1000,param_3);
  return;
}

