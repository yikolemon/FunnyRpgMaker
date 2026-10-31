/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140067c8c */

undefined8 FUN_140067c8c(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined8 ****ppppuVar1;
  undefined8 local_88;
  undefined8 local_80 [4];
  undefined8 ***local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_40 = param_2;
  FUN_14000169c(param_2,"syntax error ");
  if (*(longlong *)(param_4 + 0x10) != 0) {
    local_80[0] = CONCAT71(local_80[0]._1_7_,0x20);
    FUN_14006a7c9(local_60,"while parsing ",param_4);
    ppppuVar1 = local_60;
    if (0xf < local_48) {
      ppppuVar1 = (undefined8 ****)local_60[0];
    }
    FUN_14000b1f8(local_40,ppppuVar1,local_50);
    FUN_1400017de(local_60);
  }
  FUN_14000b1f8(local_40,"- ",2);
  if (*(int *)(param_1 + 0x40) == 0xe) {
    local_31 = 0x27;
    FUN_140067f60(param_1 + 0x48,local_80);
    local_88 = *(undefined8 *)(param_1 + 0xb8);
    FUN_14006ed42(local_60,&local_88,"; last read: \'",local_80,&local_31);
    ppppuVar1 = local_60;
    if (0xf < local_48) {
      ppppuVar1 = (undefined8 ****)local_60[0];
    }
    FUN_14000b1f8(local_40,ppppuVar1,local_50);
    FUN_1400017de(local_60);
    FUN_1400017de(local_80);
  }
  else {
    local_80[0] = FUN_14006ee64();
    FUN_14006bf5d(local_60,"unexpected ");
    ppppuVar1 = local_60;
    if (0xf < local_48) {
      ppppuVar1 = (undefined8 ****)local_60[0];
    }
    FUN_14000b1f8(local_40,ppppuVar1,local_50);
    FUN_1400017de(local_60);
  }
  if (param_3 != 0) {
    local_80[0] = FUN_14006ee64(param_3);
    FUN_14006bf5d(local_60,"; expected ");
    ppppuVar1 = local_60;
    if (0xf < local_48) {
      ppppuVar1 = (undefined8 ****)local_60[0];
    }
    FUN_14000b1f8(local_40,ppppuVar1,local_50);
    FUN_1400017de(local_60);
  }
  return local_40;
}

