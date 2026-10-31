/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a6188 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1404a6188(undefined8 param_1,undefined4 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  FID_conflict___acrt_lock(*param_2);
  bVar1 = (byte)ram0x000140613b10 & 0x3f;
  uVar2 = DAT_140632d38 ^ ram0x000140613b10;
  FID_conflict___acrt_lock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

