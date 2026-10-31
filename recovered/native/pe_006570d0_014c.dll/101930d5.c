/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101930d5 */

int FUN_101930d5(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = FUN_1019307c(*(undefined4 *)(param_2 + 0x10),param_3,param_4);
  piVar2 = (int *)FUN_100fb1b4(uVar1,0);
  iVar3 = *piVar2;
  if (iVar3 == 0) {
    if (((*(byte *)(param_2 + 8) & 8) != 0) || (*(char *)(param_1 + 0x40) == '\x01')) {
      iVar3 = FUN_1019103a(param_1,param_2,param_3,param_4);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (*(char *)(param_1 + 0x40) != '\0') {
        return 0;
      }
    }
    iVar3 = FUN_10190b60(param_1,param_2,param_3,param_4,uVar1);
    *piVar2 = iVar3;
  }
  return iVar3;
}

