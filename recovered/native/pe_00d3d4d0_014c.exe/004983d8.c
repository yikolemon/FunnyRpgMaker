/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004983d8 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint FUN_004983d8(int *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  bVar1 = (byte)DAT_0050e8c0 & 0x1f;
  uVar2 = DAT_00521ee8 ^ DAT_0050e8c0;
  FUN_00498434();
  ExceptionList = local_14;
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}

