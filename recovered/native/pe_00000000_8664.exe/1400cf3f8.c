/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cf3f8 */

void FUN_1400cf3f8(undefined8 param_1,longlong param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1400cf45e(param_2 + 0x20,param_3,param_4,0);
  if (0 < (int)param_4 && lVar2 != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_1400c05fb(param_1,param_3 + (int)uVar3);
      *(undefined1 *)(lVar2 + uVar3) = uVar1;
      uVar3 = uVar3 + 1;
    } while (param_4 != uVar3);
  }
  return;
}

