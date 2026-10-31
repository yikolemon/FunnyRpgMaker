/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027f21c */

longlong FUN_14027f21c(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 ****ppppuVar2;
  undefined1 local_98 [40];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 ***local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1402141fc();
  *(undefined1 *)(local_30 + 0x20) = *param_3;
  *(undefined1 *)(local_30 + 0x21) = *param_4;
  local_98[0] = 0;
  FUN_1402132d4(local_50,L"pNonPic",0);
  local_70 = local_30 + 0x28;
  FUN_14027f558(local_70,local_50,local_98);
  FUN_14021331c(local_50);
  local_68 = local_30 + 0x260;
  *(undefined8 *)(local_30 + 0x260) = 0;
  *(undefined8 *)(local_30 + 0x268) = 0;
  *(undefined8 *)(local_30 + 0x270) = 0;
  local_60 = local_30 + 0x278;
  FUN_14027f9fa();
  local_58 = local_30 + 0x2f8;
  *(undefined8 *)(local_30 + 0x2f8) = 0;
  *(undefined8 *)(local_30 + 0x300) = 0;
  *(undefined8 *)(local_30 + 0x308) = 0;
  *(undefined1 *)(local_30 + 0x310) = 0;
  FUN_1402132d4(local_50,"antCaptureMouseUnlessPopupClose: %d",0);
  ppppuVar2 = local_50;
  if (7 < local_38) {
    ppppuVar2 = (undefined8 ****)local_50[0];
  }
  FUN_140215958(&DAT_140629080,ppppuVar2,local_40);
  FUN_14021331c(local_50);
  lVar1 = local_30;
  FUN_14027fb1c(local_30);
  FUN_14027fc34(lVar1);
  FUN_14027fe64(lVar1);
  FUN_14028083e(lVar1);
  *(undefined1 *)(lVar1 + 0x310) = 1;
  return local_30;
}

