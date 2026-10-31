/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140124ad0 */

ulonglong FUN_140124ad0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_1401c9640 & 0x3f;
  uVar2 = DAT_140355618 ^ DAT_1401c9640;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

