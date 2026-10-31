/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a9ea7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a9ea7(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  float local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  pbVar1 = (byte *)FUN_1403ac0b2(param_2,0x20);
  if (pbVar1 == (byte *)0x0) {
    if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_78)) {
      FUN_1403ac0b2(param_2,9);
      return;
    }
  }
  else {
    *pbVar1 = *pbVar1 & 0xfd;
    lVar2 = FUN_1403ac0b2(param_2,9);
    if (lVar2 == 0) {
      local_34 = 0;
      uStack_2c = 0;
      local_44 = 0;
      uStack_3c = 0;
      local_24 = 0xffffffff;
      local_4c = 0x240;
      local_48 = *(float *)(pbVar1 + 4) * DAT_1404ed020;
      FUN_1403a9143(param_1,param_2,0);
    }
    if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_78);
}

