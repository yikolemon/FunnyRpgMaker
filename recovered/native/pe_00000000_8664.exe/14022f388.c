/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022f388 */

ulonglong FUN_14022f388(longlong param_1,int param_2,undefined4 param_3,uint param_4,
                       undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    uVar2 = FUN_14022f0a8(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x75),param_2);
    if (uVar2 == 0xffffffff) break;
    uVar3 = CONCAT44((int)(uVar2 ^ 0x7fffffff) >> 0x1f,uVar2) ^ 0x7fffffff;
    if ((int)((longlong)uVar3 / (longlong)param_2) < *(int *)(param_1 + 0x6c)) {
      FUN_14022ec42(param_1,param_5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) * param_2 + uVar2;
    FUN_14022eb44(param_1,(longlong)uVar3 % (longlong)param_2 & 0xffffffff);
    param_4 = param_4 - 1;
  }
  return (ulonglong)param_4;
}

