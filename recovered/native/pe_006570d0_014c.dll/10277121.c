/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10277121 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint FUN_10277121(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  bVar1 = (byte)DAT_10388d00 & 0x1f;
  uVar2 = DAT_103a5468 ^ DAT_10388d00;
  FUN_1027717d();
  ExceptionList = local_14;
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}

