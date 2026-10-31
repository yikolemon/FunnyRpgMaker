/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001deb8 */

int FUN_18001deb8(longlong param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  while ((iVar3 = 0, param_4 != 0 &&
         (uVar2 = FUN_18001dbd8(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x75),
                                param_2), iVar3 = param_4, uVar2 != 0xffffffff))) {
    uVar1 = CONCAT44((int)(uVar2 ^ 0x7fffffff) >> 0x1f,uVar2) ^ 0x7fffffff;
    if ((int)((longlong)uVar1 / (longlong)param_2) < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,param_5);
    }
    *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) * param_2 + uVar2;
    FUN_18001d674(param_1,(longlong)uVar1 % (longlong)param_2 & 0xffffffff);
    param_4 = param_4 + -1;
  }
  return iVar3;
}

