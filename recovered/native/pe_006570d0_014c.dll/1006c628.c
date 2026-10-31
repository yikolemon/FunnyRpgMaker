/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c628 */

int * __thiscall FUN_1006c628(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_38 [36];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  param_2[1] = 0xffff;
  if ((param_3 & ~*(uint *)(param_1 + 0x1c)) != 0) {
    if (*(uint *)(param_1 + 0x34) < 8) {
      iVar2 = param_1 + 0x20;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x20);
    }
    iVar2 = FUN_10228d20(iVar2,auStack_38,param_3,
                         -(uint)((*(uint *)(param_1 + 0x1c) & 2) == 0) | *(uint *)(param_1 + 0x10));
    param_2[2] = iVar2;
    FUN_100025ec(iVar2,auStack_38);
    goto LAB_1006c6dd;
  }
  param_2[2] = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar2 = 0x16d;
  if ((uVar1 & 1) == 0) {
    iVar2 = 0x1ff;
  }
  param_2[1] = iVar2;
  if ((uVar1 >> 10 & 1) == 0) {
LAB_1006c6b1:
    iVar2 = 3 - (uint)((uVar1 & 0x10) == 0);
  }
  else if (*(int *)(param_1 + 0x14) == -0x5ffffff4) {
    iVar2 = 4;
  }
  else {
    if (*(int *)(param_1 + 0x14) != -0x5ffffffd) goto LAB_1006c6b1;
    iVar2 = 10;
  }
  *param_2 = iVar2;
LAB_1006c6dd:
  if (DAT_10388d00 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

