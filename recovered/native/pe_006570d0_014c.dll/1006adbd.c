/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006adbd */

undefined4 FUN_1006adbd(undefined4 param_1,int param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  
  uVar2 = DAT_10388d00 ^ (uint)&stack0xffffffd0;
  uVar1 = *(uint *)(param_2 + 0x10);
  sVar3 = _strlen(param_3);
  if ((uVar1 ^ 0x7fffffff) < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  FUN_1001601e();
  if (DAT_10388d00 == (uVar2 ^ (uint)&stack0xffffffd0)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

