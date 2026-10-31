/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10015f8f */

undefined4 FUN_10015f8f(undefined4 param_1,char *param_2,int param_3)

{
  uint uVar1;
  size_t sVar2;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xffffffd0;
  sVar2 = _strlen(param_2);
  if ((*(uint *)(param_3 + 0x10) ^ 0x7fffffff) < sVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  FUN_1001601e();
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xffffffd0)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

