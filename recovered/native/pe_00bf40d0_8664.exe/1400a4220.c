/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a4220 */

ulonglong FUN_1400a4220(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_14012ea80 & 0x3f;
  uVar2 = DAT_1401437d8 ^ DAT_14012ea80;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

