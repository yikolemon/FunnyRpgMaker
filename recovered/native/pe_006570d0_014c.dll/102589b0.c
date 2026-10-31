/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102589b0 */

void FUN_102589b0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_5 + 0xc);
  uVar4 = uVar1;
  uVar2 = uVar1;
  uVar3 = uVar1;
  while (-1 < param_6) {
    if (uVar4 == 0xffffffff) goto LAB_10258a2e;
    uVar4 = uVar4 - 1;
    if (((*(int *)(*(int *)(param_5 + 0x10) + 4 + uVar4 * 0x14) < param_3) &&
        (param_3 <= *(int *)(*(int *)(param_5 + 0x10) + 8 + uVar4 * 0x14))) || (uVar4 == 0xffffffff)
       ) {
      param_6 = param_6 + -1;
      uVar2 = uVar3;
      uVar3 = uVar4;
    }
  }
  if ((uVar2 <= uVar1) && (uVar4 + 1 <= uVar2)) {
    param_1[3] = uVar2;
    *param_1 = param_2;
    param_1[1] = uVar4 + 1;
    param_1[2] = param_2;
    return;
  }
LAB_10258a2e:
                    /* WARNING: Subroutine does not return */
  _abort();
}

