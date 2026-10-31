/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10238d30 */

void __thiscall FUN_10238d30(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *param_5 = param_3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar3 = FUN_1022c060(local_10,0,param_2,param_1 + 8);
  if (iVar3 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  iVar3 = iVar3 + -1;
  if (param_4 - *param_5 < iVar3) {
    *param_2 = uVar1;
    param_2[1] = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  if (0 < iVar3) {
    FUN_1025b2d0(*param_5,local_10,iVar3);
    *param_5 = *param_5 + iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

