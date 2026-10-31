/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140039d64 */

undefined8 FUN_140039d64(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_3;
  FUN_14000169c(local_90,&DAT_1401728a8);
  FUN_14003a06e(local_50,local_28,local_90);
  pcVar2 = "The following argument was not expected: ";
  if (0x20 < (ulonglong)(local_28[1] - *local_28)) {
    pcVar2 = "The following arguments were not expected: ";
  }
  FUN_140018136(local_b0,pcVar2,local_50);
  FUN_140006874(local_70,param_2);
  FUN_14003a196(param_1,local_70,local_b0,0x6d);
  local_30 = param_1;
  FUN_1400017de(local_50);
  uVar1 = local_30;
  FUN_14000eeca(local_28);
  return uVar1;
}

