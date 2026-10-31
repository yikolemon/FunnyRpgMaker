/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020c51f */

undefined4 __fastcall FUN_1020c51f(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = 0;
  if ((uint)(0x7fffffff / (ulonglong)(uint)param_1[2]) < param_2) {
LAB_1020c56e:
    FUN_1020a812();
  }
  else {
    iVar2 = param_1[2] * param_2;
    uVar1 = FUN_101c2a50(*param_1,1,param_1[5],iVar2,param_1[6],&local_18);
    param_1[6] = uVar1;
    if (local_18 != 0) goto LAB_1020c56e;
    param_1[3] = param_2;
    param_1[5] = iVar2;
    uVar1 = 1;
    if ((uint)param_1[4] <= param_2) goto LAB_1020c57d;
    FUN_1020a812();
    param_1[4] = param_2;
  }
  uVar1 = 0;
LAB_1020c57d:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

