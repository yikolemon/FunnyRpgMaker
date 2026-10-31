/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e12ac */

void FUN_1800e12ac(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180054704(local_90,&DAT_180419468);
  uVar1 = FUN_1800136a6(param_2,"gIsRpgMakerMapDockSpaceSet");
  FUN_1800500c4(uVar1,local_90);
  FUN_180054704(local_80,&DAT_180419469);
  uVar1 = FUN_1800136a6(param_2,"gIsRpgMakerCommonEventDockSpaceSet");
  FUN_1800500c4(uVar1,local_80);
  FUN_180054704(local_70,param_1);
  uVar1 = FUN_1800136a6(param_2,&DAT_18035f516);
  FUN_1800500c4(uVar1,local_70);
  FUN_180054704(local_60,param_1 + 1);
  uVar1 = FUN_1800136a6(param_2,&DAT_18035f4a6);
  FUN_1800500c4(uVar1,local_60);
  FUN_1800df9f4(local_50,param_1 + 4);
  uVar1 = FUN_1800136a6(param_2,&DAT_18035f443);
  FUN_1800500c4(uVar1,local_50);
  FUN_1800e1510(local_40,param_1 + 8);
  uVar1 = FUN_1800136a6(param_2,&DAT_1803773ae);
  FUN_1800500c4(uVar1,local_40);
  FUN_1800e1510(local_30,param_1 + 0xc);
  uVar1 = FUN_1800136a6(param_2,&DAT_180377348);
  FUN_1800500c4(uVar1,local_30);
  return;
}

