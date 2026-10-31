/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d090 */

void __thiscall
FUN_1018d090(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,uint param_10)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (0xffffff < param_10) {
    if ((*(int *)(param_1 + 100) == param_5 && *(int *)(param_1 + 0x60) == param_4) &&
       (param_2 == *(int *)(param_1 + 0x58))) {
      FUN_10188516(6,4);
      FUN_10188774(param_6,param_7,param_8,param_9,param_10);
    }
    else {
      FUN_101883ba(param_2,param_3,param_4,param_5);
      FUN_10188516(6,4);
      FUN_10188774(param_6,param_7,param_8,param_9,param_10);
      FUN_1018846c();
    }
  }
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

