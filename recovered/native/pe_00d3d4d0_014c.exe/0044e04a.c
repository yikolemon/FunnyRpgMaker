/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044e04a */

uint __fastcall FUN_0044e04a(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  iVar1 = FUN_004206d1((int *)*param_1,&local_14,(uint)*(byte *)(param_1 + 4));
  uVar2 = 0;
  if ((iVar1 == 0) && (*(byte *)(param_1 + 4) != 0)) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar2 << 8 | (uint)*(byte *)((int)&local_14 + uVar3);
      uVar3 = uVar3 + 1;
    } while (*(byte *)(param_1 + 4) != uVar3);
  }
  *param_2 = iVar1;
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_14)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_14);
}

