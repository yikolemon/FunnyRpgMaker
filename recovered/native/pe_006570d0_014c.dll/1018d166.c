/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d166 */

void __thiscall
FUN_1018d166(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,uint param_10,float param_11,
            uint param_12)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (0xffffff < param_10) {
    uVar3 = param_12 | 0xf0;
    if ((param_12 & 0x1f0) != 0) {
      uVar3 = param_12;
    }
    if ((uVar3 & 0x1f0) != 0x100 && DAT_102b70e0 <= param_11) {
      if ((*(int *)(param_1 + 100) == param_5 && *(int *)(param_1 + 0x60) == param_4) &&
         (param_2 == *(int *)(param_1 + 0x58))) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        FUN_1018ae44(param_6,param_7,param_11,uVar3);
        FUN_10189368(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x38),param_10);
        *(undefined4 *)(param_1 + 0x38) = 0;
        FUN_1018d35f(param_1,uVar1,*(undefined4 *)(param_1 + 0x18),param_6,param_7,param_8,param_9,1
                    );
      }
      else {
        FUN_101883ba(param_2,param_3,param_4,param_5);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        FUN_1018ae44(param_6,param_7,param_11,uVar3);
        FUN_10189368(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x38),param_10);
        *(undefined4 *)(param_1 + 0x38) = 0;
        FUN_1018d35f(param_1,uVar1,*(undefined4 *)(param_1 + 0x18),param_6,param_7,param_8,param_9,1
                    );
        FUN_1018846c();
      }
    }
    else {
      FUN_1018d090(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    }
  }
  if (DAT_10388d00 == (uVar2 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

