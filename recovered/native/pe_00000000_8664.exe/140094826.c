/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140094826 */

undefined8 FUN_140094826(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(DAT_140f2a910 + 0x2158) < *(int *)(DAT_140f2a910 + 0x2148)) {
    uVar1 = FUN_140080066(*(undefined8 *)(DAT_140f2a910 + 0x1608),param_1,0);
    uVar2 = FUN_14009460b(uVar1,param_2 | 0x141);
    return uVar2;
  }
  *(undefined4 *)(DAT_140f2a910 + 0x2030) = 0;
  return 0;
}

