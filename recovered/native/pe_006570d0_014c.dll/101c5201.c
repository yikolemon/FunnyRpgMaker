/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5201 */

int FUN_101c5201(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_14;
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    local_14 = *param_1;
    local_10 = param_1[1];
    if (local_14 == 0) {
      iVar1 = -local_10;
      if (-local_10 < 0) {
        iVar1 = local_10;
      }
    }
    else if (local_10 == 0) {
      iVar1 = -local_14;
      if (-local_14 < 0) {
        iVar1 = local_14;
      }
    }
    else {
      iVar1 = FUN_101c50d1();
      FUN_101c5119();
      iVar2 = FUN_101c51e1();
      bVar3 = (byte)iVar1;
      if (iVar1 < 1) {
        iVar1 = iVar2 << (-bVar3 & 0x1f);
      }
      else {
        iVar1 = iVar2 + (1 << (bVar3 - 1 & 0x1f)) >> (bVar3 & 0x1f);
      }
    }
  }
  if (DAT_10388d00 != (local_c ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar1;
}

