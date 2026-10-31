/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037e25e */

undefined8 FUN_14037e25e(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_14062a630 + 0x29a8;
  uVar1 = FUN_14037e2a5(param_2);
  uVar1 = FUN_14032ef38(lVar2,uVar1);
  FUN_14037e2b1(uVar1,param_1,param_2,param_2);
  return uVar1;
}

