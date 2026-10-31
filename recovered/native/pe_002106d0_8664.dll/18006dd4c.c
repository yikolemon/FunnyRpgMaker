/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006dd4c */

longlong FUN_18006dd4c(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  undefined1 local_98 [40];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 **local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_180002d2c();
  *(undefined1 *)(local_30 + 0x20) = *param_3;
  *(undefined1 *)(local_30 + 0x21) = *param_4;
  local_98[0] = 0;
  FUN_180001e04(local_50,&DAT_1803861e4,0);
  local_70 = local_30 + 0x28;
  FUN_18006e088(local_70,local_50,local_98);
  FUN_180001e4c(local_50);
  local_68 = local_30 + 0x260;
  *(undefined8 *)(local_30 + 0x260) = 0;
  *(undefined8 *)(local_30 + 0x268) = 0;
  *(undefined8 *)(local_30 + 0x270) = 0;
  local_60 = local_30 + 0x278;
  FUN_18006e52a();
  local_58 = local_30 + 0x2f8;
  *(undefined8 *)(local_30 + 0x2f8) = 0;
  *(undefined8 *)(local_30 + 0x300) = 0;
  *(undefined8 *)(local_30 + 0x308) = 0;
  *(undefined1 *)(local_30 + 0x310) = 0;
  FUN_180001e04(local_50,"uncompressed",0);
  pppuVar2 = local_50;
  if (7 < local_38) {
    pppuVar2 = (undefined8 ***)local_50[0];
  }
  FUN_180004488(&DAT_180417bb0,pppuVar2,local_40);
  FUN_180001e4c(local_50);
  lVar1 = local_30;
  FUN_18006e64c(local_30);
  FUN_18006e764(lVar1);
  FUN_18006e994(lVar1);
  FUN_18006f36e(lVar1);
  *(undefined1 *)(lVar1 + 0x310) = 1;
  return local_30;
}

