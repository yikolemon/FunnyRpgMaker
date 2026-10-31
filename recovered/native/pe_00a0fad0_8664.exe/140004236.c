/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140004236 */

longlong FUN_140004236(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_140006874(local_a8,param_3);
  FUN_140006874(local_88,local_20);
  FUN_1400102b2(local_18,local_88,local_a8,0);
  FUN_14000169c(local_68,"Print this help message and exit");
  FUN_14000169c(local_48,"-h,--help");
  if (*(longlong *)(local_18 + 0x210) != 0) {
    FUN_14002a5d8();
    *(undefined8 *)(local_18 + 0x210) = 0;
  }
  if (local_38 != 0) {
    FUN_140006874(local_c8,local_48);
    lVar1 = FUN_14002a746(local_18,local_c8,local_68);
    *(longlong *)(local_18 + 0x210) = lVar1;
    *(undefined1 *)(lVar1 + 0x23) = 0;
  }
  FUN_1400017de(local_48);
  FUN_1400017de(local_68);
  FUN_1400017de(local_20);
  FUN_1400017de(local_28);
  return local_18;
}

