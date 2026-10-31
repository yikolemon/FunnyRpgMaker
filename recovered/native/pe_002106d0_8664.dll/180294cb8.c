/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180294cb8 */

ulonglong FUN_180294cb8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_180402640 & 0x3f;
  uVar2 = DAT_180421868 ^ DAT_180402640;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

