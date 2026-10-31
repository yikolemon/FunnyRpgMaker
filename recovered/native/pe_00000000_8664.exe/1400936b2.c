/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400936b2 */

undefined8 FUN_1400936b2(void)

{
  float fVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  float local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if ((*(byte *)(DAT_140f2a910 + 0x1fa8) & 1) == 0) {
    pfVar2 = (float *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x23c);
  }
  else {
    pfVar2 = (float *)(DAT_140f2a910 + 0x1fc0);
  }
  fVar1 = *pfVar2;
  uVar3 = (ulonglong)(uint)fVar1;
  if (fVar1 < 0.0) {
    FUN_14008a381(local_28);
    uVar3 = FUN_14007b71f(DAT_1401c86c8,fVar1 + local_28[0]);
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return CONCAT44((float)(int)(float)(uVar3 >> 0x20),(float)(int)(float)uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

