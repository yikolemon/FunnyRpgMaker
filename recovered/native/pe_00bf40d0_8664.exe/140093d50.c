/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093d50 */

/* Library Function - Single Match
    _set_new_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  __acrt_lock(0);
  bVar2 = (byte)DAT_14012ea80 & 0x3f;
  uVar3 = DAT_14012ea80 ^ DAT_140142c40;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_140142c40 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_14012ea80;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}

