/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140288e1a */

void FUN_140288e1a(longlong param_1)

{
  char cVar1;
  undefined1 local_e8 [56];
  undefined8 local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  ulonglong local_68 [4];
  undefined1 local_48 [28];
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_68[0] = local_68[0] & 0xffffffff00000000;
  FUN_140288fa8(param_1 + 0x10,local_68);
  local_68[0] = 0xffffffffffffffff;
  FUN_1402889dc(param_1,local_48,local_68);
  cVar1 = FUN_14028b5c2(local_48,(undefined4 *)(param_1 + 0xc));
  if (cVar1 != '\0') {
    DAT_140629188 = 1;
    FUN_140288ab0(param_1 + 0x10,local_48);
    s___AVEngineUI___140612d30[8] = '\0';
    s___AVEngineUI___140612d30[9] = '\0';
    s___AVEngineUI___140612d30[10] = '\0';
    s___AVEngineUI___140612d30[0xb] = '\0';
    FUN_1402161ba(local_48);
    return;
  }
  local_2c = *(undefined4 *)(param_1 + 0xc);
  local_b0 = 0x5c0000028d;
  local_a8 = "ion";
  local_a0 = "d::Command::Init(FileCoder &)";
  FUN_140283ef0(local_88);
  local_98 = "recovery";
  local_90 = 0x31;
  FUN_14028be00(local_68,&local_98,local_88,&local_2c);
  FUN_140280e42(local_e8,local_68);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_e8,&DAT_1405b7880);
}

