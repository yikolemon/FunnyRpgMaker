/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bc6a4 */

longlong FUN_1400bc6a4(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  longlong local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = param_1;
  FUN_140041956();
  *(undefined1 *)(local_38 + 0x20) = *param_3;
  *(undefined1 *)(local_38 + 0x21) = *param_4;
  local_29 = 0;
  FUN_140005554(local_58,&DAT_1401728de,0);
  FUN_1400c0d66(local_38 + 0x28,local_58,&local_29);
  FUN_140005690(local_58);
  *(undefined8 *)(local_38 + 0x260) = 0;
  *(undefined8 *)(local_38 + 0x268) = 0;
  *(undefined8 *)(local_38 + 0x270) = 0;
  FUN_1400c1208();
  *(undefined8 *)(local_38 + 0x2f8) = 0;
  *(undefined8 *)(local_38 + 0x300) = 0;
  *(undefined8 *)(local_38 + 0x308) = 0;
  *(undefined1 *)(local_38 + 0x310) = 0;
  FUN_140005554(local_58,"uncompressed",0);
  pppuVar2 = local_58;
  if (7 < local_40) {
    pppuVar2 = (undefined8 ***)local_58[0];
  }
  FUN_14000ffc0(&DAT_1401cc7b8,pppuVar2,local_48);
  FUN_140005690(local_58);
  lVar1 = local_38;
  FUN_1400c132a(local_38);
  FUN_1400c147c(lVar1);
  FUN_1400c16e2(lVar1);
  FUN_1400c20f2(lVar1);
  *(undefined1 *)(lVar1 + 0x310) = 1;
  return local_38;
}

