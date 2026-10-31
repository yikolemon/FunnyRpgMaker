/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b822a */

void __thiscall FUN_100b822a(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 0x40000000) {
    iVar2 = *param_1;
    iVar1 = param_1[2];
    if (iVar2 != 0) {
      (*DAT_1039c964)(iVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar3 = iVar1 - iVar2 >> 2;
    uVar4 = (uVar3 >> 1) + uVar3;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    if (0x3fffffff - (uVar3 >> 1) < uVar3) {
      uVar4 = 0x3fffffff;
    }
    iVar2 = (*DAT_1039c960)(uVar4 * 4,1);
    *param_1 = iVar2;
    param_1[1] = iVar2;
    param_1[2] = iVar2 + uVar4 * 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016590();
}

