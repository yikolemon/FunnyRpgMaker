/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041c98e */

int __cdecl FUN_0041c98e(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  uVar2 = param_1[0xc] + param_2 + param_1[0x15];
  iVar1 = 0;
  if ((uint)param_1[3] < uVar2) {
    uVar2 = uVar2 + 1 & 0xfffffffe;
    iVar1 = FUN_0041c6b3(*param_1,0x20,param_1[3],uVar2,param_1[0xd],&local_14);
    param_1[0xd] = iVar1;
    iVar1 = local_14;
    if (local_14 == 0) {
      param_1[3] = uVar2;
      FUN_0041ca05((int)param_1);
      iVar1 = 0;
    }
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_14);
}

