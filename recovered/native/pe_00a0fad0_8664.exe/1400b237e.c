/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b237e */

void FUN_1400b237e(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 + (((ulonglong)(param_3 / 6 + (param_3 >> 0x3f)) >> 1) - (param_3 >> 0x3f)) * -0xc
  ;
  if (param_2 < 0x100000000) {
    if (0 < param_2) {
      lVar1 = 0;
      do {
        *(byte *)(param_1 + lVar1) =
             *(byte *)(param_1 + lVar1) ^ *(byte *)(param_4 + (uVar3 & 0xffffffff));
        uVar2 = (int)uVar3 + 1;
        if (uVar2 == 0xc) {
          uVar2 = 0;
        }
        uVar3 = (ulonglong)uVar2;
        lVar1 = lVar1 + 1;
      } while (param_2 != lVar1);
    }
  }
  else {
    lVar1 = 0;
    do {
      *(byte *)(param_1 + lVar1) = *(byte *)(param_1 + lVar1) ^ *(byte *)(param_4 + uVar3);
      uVar3 = uVar3 + 1;
      if (uVar3 == 0xc) {
        uVar3 = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != lVar1);
  }
  return;
}

