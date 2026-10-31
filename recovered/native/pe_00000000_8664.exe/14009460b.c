/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009460b */

undefined4 FUN_14009460b(ulonglong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  cVar1 = FUN_140081f3e(param_1,0);
  if (cVar1 == '\0') {
    *(undefined4 *)(DAT_140f2a910 + 0x2030) = 0;
    uVar2 = 0;
  }
  else {
    FUN_140077d91(local_38,0x14,"##Popup_%08x",param_1 & 0xffffffff);
    uVar2 = FUN_140085d7e(local_38,0,param_2 | 0x4080000);
    if ((char)uVar2 == '\0') {
      FUN_1400946ab();
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

