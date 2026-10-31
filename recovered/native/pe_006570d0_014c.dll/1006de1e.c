/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006de1e */

void __thiscall FUN_1006de1e(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0xaaaaaab) {
    iVar1 = FUN_10001426(param_2 * 0x18);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_2 * 0x18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

