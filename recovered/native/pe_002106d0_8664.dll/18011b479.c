/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b479 */

undefined4 FUN_18011b479(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  lVar1 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_d8;
  cVar2 = FUN_180108c26(param_1,0);
  if (cVar2 == '\0') {
    *(undefined4 *)(lVar1 + 0x2030) = 0;
    uVar3 = 0;
  }
  else {
    if ((~param_3 & 0x1000040) == 0) {
      uVar4 = 0x40;
      if ((*(uint *)(lVar1 + 0x2030) >> 9 & 1) != 0) {
        uVar4 = *(uint *)(lVar1 + 0x2070) | 0x40;
      }
      *(uint *)(lVar1 + 0x2070) = uVar4;
      *(uint *)(lVar1 + 0x2030) = *(uint *)(lVar1 + 0x2030) | 0x200;
    }
    local_b8 = *(undefined4 *)(lVar1 + 0x27d4);
    FUN_1800fead5(local_a8,0x80,"%s###Menu_%02d",param_2);
    uVar3 = FUN_18010ca66(local_a8,0,param_3 | 0x4000000);
    if ((char)uVar3 == '\0') {
      FUN_18011b3ef();
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_d8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_d8);
}

