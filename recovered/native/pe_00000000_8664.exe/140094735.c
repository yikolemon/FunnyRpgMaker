/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140094735 */

undefined4 FUN_140094735(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  lVar1 = DAT_140f2a910;
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  cVar2 = FUN_140081f3e(param_1,0);
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
    FUN_140077d91(local_a8,0x80,"%s###Menu_%02d",param_2);
    uVar3 = FUN_140085d7e(local_a8,0,param_3 | 0x4000000);
    if ((char)uVar3 == '\0') {
      FUN_1400946ab();
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_d8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_d8);
}

