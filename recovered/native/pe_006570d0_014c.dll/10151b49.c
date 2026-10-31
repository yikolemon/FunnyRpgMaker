/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151b49 */

void __fastcall FUN_10151b49(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  local_18 = 0;
  iVar1 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14);
  param_3 = *(int *)(param_2 + 0x14) + param_3;
  FUN_10152211(param_3,iVar1,iVar1,&local_18,6);
  *param_1 = 0;
  *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_1c,local_20);
  param_1[3] = 0;
  param_1[4] = uStack_1c;
  param_1[5] = local_18 - param_3;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

