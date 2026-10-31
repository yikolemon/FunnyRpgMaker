/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223a7d */

undefined4 *
FUN_10223a7d(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  char cVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_10223998(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (cVar1 == '\0') {
    param_1[4] = param_6;
    param_1[5] = param_7;
    param_1[6] = param_8;
    param_1[7] = param_9;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  else {
    fVar3 = (float10)FUN_10197570();
    fVar4 = (float10)FUN_1019756c();
    FUN_101974ac((double)fVar4,(double)fVar3,0,0x40518000);
  }
  if (DAT_10388d00 == (uVar2 ^ (uint)&stack0xfffffffc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

