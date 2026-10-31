/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e05c */

int __thiscall
FUN_1001e05c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x44) = param_3;
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = FUN_1001dda2((int)*(char *)(param_1 + 0x4d),param_2);
    if (uVar1 == 0xffffffff) break;
    if ((int)((longlong)(CONCAT44((int)(uVar1 ^ 0x7fffffff) >> 0x1f,uVar1) ^ 0x7fffffff) /
             (longlong)param_2) < *(int *)(param_1 + 0x44)) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(param_5);
    }
    *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) * param_2 + uVar1;
    FUN_1001d8ea();
    param_4 = param_4 + -1;
  }
  return param_4;
}

