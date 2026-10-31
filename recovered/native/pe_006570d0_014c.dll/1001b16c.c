/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b16c */

void __thiscall FUN_1001b16c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_2 >> 0x1f;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((SBORROW4(uVar2,iVar3) != SBORROW4(uVar2 - iVar3,(uint)(uVar1 < param_2))) ==
      (int)((uVar2 - iVar3) - (uint)(uVar1 < param_2)) < 0) {
    *param_1 = uVar1 - param_2;
    param_1[1] = (uVar2 - iVar3) - (uint)(uVar1 < param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228760(0xb);
}

