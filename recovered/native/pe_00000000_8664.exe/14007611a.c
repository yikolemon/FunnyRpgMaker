/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007611a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_14007611a(undefined1 (*param_1) [16],uint param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = (float)(param_2 >> 0x10 & 0xff);
  auVar1._4_4_ = (float)(param_2 >> 8 & 0xff);
  auVar1._12_4_ = param_3;
  auVar1._8_4_ = (float)(param_2 & 0xff);
  auVar1 = divps(auVar1,_DAT_140210050);
  *param_1 = auVar1;
  return param_1;
}

