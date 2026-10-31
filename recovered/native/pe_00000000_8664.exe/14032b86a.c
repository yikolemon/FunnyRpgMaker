/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032b86a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14032b86a(void)

{
  float fVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  float local_28 [2];
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  if ((*(byte *)(DAT_14062a630 + 0x1fa8) & 1) == 0) {
    pfVar2 = (float *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x23c);
  }
  else {
    pfVar2 = (float *)(DAT_14062a630 + 0x1fc0);
  }
  fVar1 = *pfVar2;
  uVar3 = (ulonglong)(uint)fVar1;
  if (fVar1 < 0.0) {
    FUN_140322539(local_28);
    uVar3 = FUN_140313933(DAT_1404bda40,fVar1 + local_28[0]);
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_48)) {
    return CONCAT44((float)(int)(float)(uVar3 >> 0x20),(float)(int)(float)uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_48);
}

