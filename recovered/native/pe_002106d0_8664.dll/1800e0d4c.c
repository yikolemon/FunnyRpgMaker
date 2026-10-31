/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e0d4c */

void FUN_1800e0d4c(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  DAT_180419468 = FUN_1800e0e04(param_2,"gIsRpgMakerMapDockSpaceSet",&DAT_180419468);
  DAT_180419469 = FUN_1800e0e04(param_2,"gIsRpgMakerCommonEventDockSpaceSet",&DAT_180419469);
  uVar1 = FUN_1800e0e04(param_2,&DAT_18035f516,param_1);
  *param_1 = uVar1;
  uVar1 = FUN_1800e0e04(param_2,&DAT_18035f4a6,param_1 + 1);
  param_1[1] = uVar1;
  uVar2 = FUN_1800e0f4c(param_2,&DAT_18035f443,param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar2 = FUN_1800e1096(param_2,&DAT_1803773ae,param_1 + 8);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_1800e1096(param_2,&DAT_180377348,param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

