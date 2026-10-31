/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140114d5e */

undefined8 FUN_140114d5e(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_140f2a910 + 0x29a8;
  uVar1 = FUN_140114da5(param_2);
  uVar1 = FUN_140096d24(lVar2,uVar1);
  FUN_140114db1(uVar1,param_1,param_2,param_2);
  return uVar1;
}

