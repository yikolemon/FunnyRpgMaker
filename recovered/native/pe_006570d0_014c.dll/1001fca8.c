/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001fca8 */

void __thiscall FUN_1001fca8(int *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  if (-1 < (int)param_2) {
    uVar4 = param_2 + 0x1f >> 5;
    iVar3 = param_1[1];
    if ((uVar4 < (uint)(iVar3 - *param_1 >> 2)) && (iVar1 = *param_1 + uVar4 * 4, iVar1 != iVar3)) {
      iVar3 = thunk_FUN_100185ef(iVar3,iVar3,iVar1);
      param_1[1] = iVar3;
    }
    param_1[3] = param_2;
    if ((param_2 & 0x1f) != 0) {
      puVar2 = (uint *)(*param_1 + -4 + uVar4 * 4);
      *puVar2 = *puVar2 & ~(-1 << (sbyte)(param_2 & 0x1f));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001f97c();
}

