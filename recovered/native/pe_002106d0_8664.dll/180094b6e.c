/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094b6e */

int FUN_180094b6e(longlong param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  while ((iVar3 = 0, param_4 != 0 &&
         (uVar2 = FUN_18009490a(*(undefined8 *)(param_1 + 0x58),*(undefined2 *)(param_1 + 0x76),
                                param_2), iVar3 = param_4, uVar2 != 0xffffffff))) {
    uVar1 = CONCAT44((int)(uVar2 ^ 0x7fffffff) >> 0x1f,uVar2) ^ 0x7fffffff;
    if ((int)((longlong)uVar1 / (longlong)param_2) < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,param_5);
    }
    *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) * param_2 + uVar2;
    FUN_180094520(param_1,(longlong)uVar1 % (longlong)param_2 & 0xffffffff);
    param_4 = param_4 + -1;
  }
  return iVar3;
}

