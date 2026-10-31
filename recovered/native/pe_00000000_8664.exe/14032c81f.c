/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032c81f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14032c81f(ulonglong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14031a0f6(param_1,0);
  if (cVar1 == '\0') {
    *(undefined4 *)(DAT_14062a630 + 0x2030) = 0;
    uVar2 = 0;
  }
  else {
    FUN_14030ffa5(local_38,0x14," component count",param_1 & 0xffffffff);
    uVar2 = FUN_14031df36(local_38,0,param_2 | 0x4080000);
    if ((char)uVar2 == '\0') {
      FUN_14032c8bf();
    }
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
}

