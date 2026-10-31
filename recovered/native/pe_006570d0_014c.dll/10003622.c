/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003622 */

void __thiscall FUN_10003622(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (-1 < (int)param_3) {
    if (param_3 < 0x10) {
      param_1[4] = param_3;
      param_1[5] = 0xf;
      uVar3 = param_2[1];
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar3;
      param_1[2] = uVar1;
      param_1[3] = uVar2;
    }
    else {
      uVar4 = 0x16;
      if (0x16 < (param_3 | 0xf)) {
        uVar4 = param_3 | 0xf;
      }
      uVar3 = FUN_10001426(uVar4 + 1);
      *param_1 = uVar3;
      param_1[4] = param_3;
      param_1[5] = uVar4;
      FUN_1025b2d0(uVar3,param_2,param_3 + 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100013fb();
}

