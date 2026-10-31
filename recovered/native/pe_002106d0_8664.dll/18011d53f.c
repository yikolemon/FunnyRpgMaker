/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d53f */

void FUN_18011d53f(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_180419160;
  if (*(longlong *)(DAT_180419160 + 0x2980) != 0) {
    *(undefined8 *)(DAT_180419160 + 0x2978) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(lVar1 + 0x2980) = 0;
  }
  if ((longlong)*(int *)(lVar1 + 0x2988) != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x2990);
    lVar2 = (longlong)*(int *)(lVar1 + 0x2988) * 0x48;
    do {
      if (*(code **)(lVar3 + 0x10) != (code *)0x0) {
        (**(code **)(lVar3 + 0x10))(lVar1,lVar3);
      }
      lVar3 = lVar3 + 0x48;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  return;
}

