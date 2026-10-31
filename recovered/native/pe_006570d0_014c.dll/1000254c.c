/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000254c */

void __thiscall FUN_1000254c(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (-1 < (int)param_3) {
    uVar2 = 0xf;
    puVar1 = param_1;
    if (0xf < param_3) {
      uVar2 = 0x16;
      if (0x16 < (param_3 | 0xf)) {
        uVar2 = param_3 | 0xf;
      }
      puVar1 = (undefined4 *)FUN_10001426(uVar2 + 1);
      *param_1 = puVar1;
    }
    param_1[4] = param_3;
    param_1[5] = uVar2;
    FUN_1025b2d0(puVar1,param_2,param_3);
    *(undefined1 *)((int)puVar1 + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100013fb();
}

