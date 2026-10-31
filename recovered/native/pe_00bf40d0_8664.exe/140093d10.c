/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093d10 */

ulonglong FUN_140093d10(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_14012ea80 & 0x3f;
  uVar2 = DAT_140142c40 ^ DAT_14012ea80;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

