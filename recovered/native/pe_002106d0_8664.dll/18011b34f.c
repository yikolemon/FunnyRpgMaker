/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b34f */

undefined4 FUN_18011b34f(ulonglong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  cVar1 = FUN_180108c26(param_1,0);
  if (cVar1 == '\0') {
    *(undefined4 *)(DAT_180419160 + 0x2030) = 0;
    uVar2 = 0;
  }
  else {
    FUN_1800fead5(local_38,0x14,"##Popup_%08x",param_1 & 0xffffffff);
    uVar2 = FUN_18010ca66(local_38,0,param_2 | 0x4080000);
    if ((char)uVar2 == '\0') {
      FUN_18011b3ef();
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

