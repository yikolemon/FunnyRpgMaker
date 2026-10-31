/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400828c2 */

undefined4 FUN_1400828c2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_178 [16];
  undefined1 local_168 [240];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar2 = FUN_1400554d2();
    FUN_14000169c(local_38,"data_dir_error_msg");
    uVar2 = FUN_1400aebe4(uVar2,local_38);
    FUN_140052d74(local_178,&DAT_1401cc978,uVar2);
    FUN_140052e4f(local_168);
    FUN_140052e84(local_178);
    FUN_1400017de(local_38);
    uVar1 = 0;
  }
  else {
    FUN_14000892c(local_38,param_1);
    if (*(char *)(param_1 + 0xa2) == '\x01') {
      FUN_1400ae753(local_78);
      FUN_140055cae(local_58,param_1,&DAT_140173c42);
      FUN_140059abc(local_178);
      FUN_14000ff1e(local_38,local_178);
      FUN_140005242(local_178);
      FUN_140005242(local_58);
      FUN_140005242(local_78);
    }
    FUN_140082b20(local_178,local_38);
    uVar1 = FUN_1400bbd56(local_178);
    FUN_140082c2c(local_178);
    FUN_140005242(local_38);
  }
  return uVar1;
}

