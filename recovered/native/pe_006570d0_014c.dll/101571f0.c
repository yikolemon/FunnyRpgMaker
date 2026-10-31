/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101571f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] __fastcall FUN_101571f0(undefined1 (*param_1) [16],uint param_2)

{
  undefined4 in_XMM0_Da;
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = (float)(param_2 >> 0x10 & 0xff);
  auVar1._4_4_ = (float)(param_2 >> 8 & 0xff);
  auVar1._12_4_ = in_XMM0_Da;
  auVar1._8_4_ = (float)(param_2 & 0xff);
  auVar1 = divps(auVar1,_DAT_102b98f0);
  *param_1 = auVar1;
  return param_1;
}

