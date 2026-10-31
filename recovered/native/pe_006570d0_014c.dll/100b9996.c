/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9996 */

void __thiscall FUN_100b9996(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (-1 < (int)param_3) {
    if (param_3 < 0x10) {
      *(uint *)(param_1 + 0x14) = param_3;
      *(undefined4 *)(param_1 + 0x18) = 0xf;
      uVar3 = param_2[1];
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      *(undefined4 *)(param_1 + 4) = *param_2;
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    else {
      uVar4 = 0x16;
      if (0x16 < (param_3 | 0xf)) {
        uVar4 = param_3 | 0xf;
      }
      uVar3 = (*DAT_1039c960)(uVar4 + 1,1);
      *(undefined4 *)(param_1 + 4) = uVar3;
      *(uint *)(param_1 + 0x14) = param_3;
      *(uint *)(param_1 + 0x18) = uVar4;
      FUN_1025b2d0(uVar3,param_2,param_3 + 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100013fb();
}

