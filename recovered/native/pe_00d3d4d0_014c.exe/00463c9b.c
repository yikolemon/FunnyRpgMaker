/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463c9b */

undefined4 __fastcall FUN_00463c9b(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  local_18 = 0;
  if ((uint)(0x7fffffff / (ulonglong)(uint)param_1[2]) < param_2) {
LAB_00463cea:
    FUN_00461f8a((int *)param_1[1],0x40);
  }
  else {
    uVar3 = param_1[2] * param_2;
    iVar1 = FUN_0041efcd(*param_1,1,param_1[5],uVar3,param_1[6],&local_18);
    param_1[6] = iVar1;
    if (local_18 != 0) goto LAB_00463cea;
    param_1[3] = param_2;
    param_1[5] = uVar3;
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    if ((uint)param_1[4] <= param_2) goto LAB_00463cf9;
    FUN_00461f8a((int *)param_1[1],0x82);
    param_1[4] = param_2;
  }
  uVar2 = 0;
LAB_00463cf9:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

