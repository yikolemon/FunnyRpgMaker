/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001bc8 */

longlong FUN_140001bc8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [224];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_48 = param_1;
  FUN_140006874(local_88,param_4);
  FUN_14000661a(local_48,local_88);
  if (*(longlong *)(param_4 + 0x10) == 0) {
    FUN_140009eb0(&local_180,1);
    uVar1 = FUN_1400052b8(local_170,"FLOAT");
    uVar1 = FUN_1400052b8(uVar1," in [");
    uVar1 = FUN_140022f40(uVar1,(int)param_2);
    uVar1 = FUN_1400052b8(uVar1," - ");
    uVar1 = FUN_140022f40(uVar1,(int)param_3);
    FUN_1400052b8(uVar1,&DAT_1401705ae);
    FUN_1400170f8(local_168,local_68);
    FUN_1400447b6(local_48,local_68);
    FUN_140009ff0(&local_180);
  }
  local_180 = param_2;
  local_178 = param_3;
  FUN_14004488c(local_48 + 0x40);
  return local_48;
}

