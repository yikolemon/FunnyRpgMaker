/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b2858 */

ulonglong FUN_1401b2858(undefined8 param_1,undefined4 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_140f17b40 & 0x3f;
  uVar2 = DAT_140f33218 ^ DAT_140f17b40;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

