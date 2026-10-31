/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c9734 */

void __thiscall FUN_101c9734(int param_1,int *param_2,double *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_20 = ~-(ulonglong)(*param_3 == 0.0) & (ulonglong)*param_3;
  uVar1 = FUN_100d7b05(&local_20);
  FUN_101c98c6(&local_20,param_3,uVar1);
  iVar2 = local_20._4_4_;
  if (local_20._4_4_ == 0) {
    iVar2 = *(int *)(param_1 + 4);
  }
  *param_2 = iVar2;
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

