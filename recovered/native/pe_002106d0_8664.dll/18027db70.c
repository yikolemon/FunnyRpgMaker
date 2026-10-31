/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027db70 */

ulonglong FUN_18027db70(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_180402640 & 0x3f;
  uVar2 = DAT_180420d90 ^ DAT_180402640;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

