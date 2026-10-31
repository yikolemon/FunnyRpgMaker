/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048f040 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14048f040(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  FID_conflict___acrt_lock(0);
  bVar1 = (byte)ram0x000140613b10 & 0x3f;
  uVar2 = DAT_140632260 ^ ram0x000140613b10;
  FID_conflict___acrt_lock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

