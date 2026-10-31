/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c760 */

ulonglong FUN_14019c760(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_140f17b40 & 0x3f;
  uVar2 = DAT_140f32748 ^ DAT_140f17b40;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

