/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b56a */

undefined8 FUN_18011b56a(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(DAT_180419160 + 0x2158) < *(int *)(DAT_180419160 + 0x2148)) {
    uVar1 = FUN_180106d4e(*(undefined8 *)(DAT_180419160 + 0x1608),param_1,0);
    uVar2 = FUN_18011b34f(uVar1,param_2 | 0x141);
    return uVar2;
  }
  *(undefined4 *)(DAT_180419160 + 0x2030) = 0;
  return 0;
}

