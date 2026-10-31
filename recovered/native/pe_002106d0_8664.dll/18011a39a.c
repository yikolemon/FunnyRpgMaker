/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a39a */

undefined8 FUN_18011a39a(void)

{
  float fVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  float local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  if ((*(byte *)(DAT_180419160 + 0x1fa8) & 1) == 0) {
    pfVar2 = (float *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x23c);
  }
  else {
    pfVar2 = (float *)(DAT_180419160 + 0x1fc0);
  }
  fVar1 = *pfVar2;
  uVar3 = (ulonglong)(uint)fVar1;
  if (fVar1 < 0.0) {
    FUN_180111069(local_28);
    uVar3 = FUN_180102463(DAT_1802ac570,fVar1 + local_28[0]);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return CONCAT44((float)(int)(float)(uVar3 >> 0x20),(float)(int)(float)uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

