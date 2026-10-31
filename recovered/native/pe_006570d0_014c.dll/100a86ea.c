/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a86ea */

void __thiscall FUN_100a86ea(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x35e50d8) {
    iVar1 = FUN_10001426(param_2 * 0x4c);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_2 * 0x4c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

