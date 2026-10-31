/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140111930 */

ulonglong FUN_140111930(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_1401c9640 & 0x3f;
  uVar2 = DAT_140354b78 ^ DAT_1401c9640;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

