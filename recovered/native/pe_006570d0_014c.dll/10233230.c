/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233230 */

int FUN_10233230(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 | 1;
  if ((param_2 & 0x40) == 0) {
    uVar4 = param_2;
  }
  uVar3 = uVar4 | 2;
  if ((uVar4 & 8) == 0) {
    uVar3 = uVar4;
  }
  iVar1 = 0;
  uVar4 = DAT_10389d20;
  while (uVar4 != (uVar3 & 0xffffffbb)) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x14) {
      return 0;
    }
    uVar4 = (&DAT_10389d20)[iVar1];
  }
  iVar1 = FUN_102694d9(param_1,(&PTR_DAT_102b7ba0)[iVar1],param_3);
  if (iVar1 != 0) {
    if (((param_2 >> 2 & 1) == 0) || (iVar2 = FUN_1026915d(iVar1,0,2), iVar2 == 0)) {
      return iVar1;
    }
    FUN_1026d543(iVar1);
  }
  return 0;
}

