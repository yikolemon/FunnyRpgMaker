/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421279 */

uint __cdecl FUN_00421279(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_14;
  if (param_1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    local_14 = *param_1;
    local_10 = param_1[1];
    if (local_14 == 0) {
      uVar3 = -local_10;
      if ((int)-local_10 < 0) {
        uVar3 = local_10;
      }
    }
    else if (local_10 == 0) {
      uVar3 = -local_14;
      if ((int)-local_14 < 0) {
        uVar3 = local_14;
      }
    }
    else {
      iVar1 = FUN_00421149(&local_14);
      FUN_00421191((int *)&local_14);
      iVar2 = FUN_00421259(local_14);
      bVar4 = (byte)iVar1;
      if (iVar1 < 1) {
        uVar3 = iVar2 << (-bVar4 & 0x1f);
      }
      else {
        uVar3 = iVar2 + (1 << (bVar4 - 1 & 0x1f)) >> (bVar4 & 0x1f);
      }
    }
  }
  if (DAT_0050e8c0 != (local_c ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_c ^ (uint)&local_14);
  }
  return uVar3;
}

