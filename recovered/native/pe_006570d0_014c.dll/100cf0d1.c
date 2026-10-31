/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cf0d1 */

undefined4 FUN_100cf0d1(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_110;
  undefined4 local_10c [5];
  ushort local_f6;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_110;
  local_110 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    iVar1 = FUN_100cefe0(local_10c,0);
    iVar2 = iVar3;
    if ((local_f6 >> 0xd & 1) == 0) {
      iVar2 = iVar1;
    }
  } while (iVar1 != 0);
  if (iVar3 == 0) {
    SetLastError(0x10dd);
    uVar4 = 0;
  }
  else {
    GetCurrentProcess();
    iVar2 = FUN_100cf1b4();
    uVar4 = 0;
    if (iVar2 != 0) {
      if (local_110 == 0) {
        local_10c[0] = 1;
      }
      else {
        iVar2 = FUN_100cf1b4();
        if (iVar2 == 0) goto LAB_100cf184;
      }
      uVar4 = FUN_100cf1e2(param_1,iVar3,local_10c[0],param_2,param_3);
    }
  }
LAB_100cf184:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_110)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4;
}

