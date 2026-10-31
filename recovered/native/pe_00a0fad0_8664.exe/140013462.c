/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140013462 */

undefined8 FUN_140013462(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [224];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [37];
  undefined1 local_33;
  char local_32;
  char local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140009eb0(local_1f0,1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_140006874(local_b8,param_3 + 0x28);
  local_32 = *(char *)(param_3 + 0x4c);
  if (local_32 == '\x01') {
    FUN_14000169c(local_d8,"REQUIRED");
    local_33 = 1;
    FUN_1400173aa(param_1,local_98,local_d8);
    local_31 = 1;
    FUN_140018136(local_58,&DAT_1401728a8,local_98);
  }
  else {
    local_31 = 0;
    FUN_14000169c(local_58,&DAT_1401728de);
  }
  FUN_14001818a(param_3,local_78,1);
  FUN_140018470(local_f8);
  FUN_140017f0d(local_1e0,local_f8,local_b8,uVar1);
  FUN_1400017de(local_78);
  FUN_1400017de(local_58);
  local_31 = local_32;
  if (local_32 != '\0') {
    FUN_1400017de(local_98);
  }
  FUN_1400017de(local_b8);
  FUN_1400170f8(local_1d8,param_2);
  FUN_140009ff0(local_1f0);
  return param_2;
}

