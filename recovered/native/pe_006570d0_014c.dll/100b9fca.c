/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9fca */

int __thiscall FUN_100b9fca(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (-1 < (int)param_2) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = (uVar1 >> 1) + uVar1;
    if (uVar3 < (param_2 | 0xf)) {
      uVar3 = param_2 | 0xf;
    }
    if ((uVar1 >> 1 ^ 0x7fffffff) < uVar1) {
      uVar3 = 0x7fffffff;
    }
    iVar2 = (*DAT_1039c960)(uVar3 + 1,1);
    *(uint *)(param_1 + 0x14) = param_2;
    *(uint *)(param_1 + 0x18) = uVar3;
    FUN_1025b2d0(iVar2,param_4,param_2);
    *(undefined1 *)(iVar2 + param_2) = 0;
    if (0xf < uVar1) {
      (*DAT_1039c964)(*(undefined4 *)(param_1 + 4));
    }
    *(int *)(param_1 + 4) = iVar2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100013fb();
}

