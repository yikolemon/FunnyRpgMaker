/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c039e */

int FUN_101c039e(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  uVar3 = param_1[0xc] + param_2 + param_1[0x15];
  iVar2 = 0;
  if ((uint)param_1[3] < uVar3) {
    uVar3 = uVar3 + 1 & 0xfffffffe;
    uVar1 = FUN_101c00c3(*param_1,0x20,param_1[3],uVar3,param_1[0xd],&local_14);
    param_1[0xd] = uVar1;
    iVar2 = local_14;
    if (local_14 == 0) {
      param_1[3] = uVar3;
      FUN_101c0415();
      iVar2 = 0;
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

