/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001507e */

undefined8 FUN_14001507e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [8];
  undefined1 local_198 [224];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_140009eb0(local_1b0,1);
  lVar1 = param_1[1];
  (**(code **)(*param_1 + 0x68))(param_1,local_98,param_3);
  (**(code **)(*param_1 + 0x60))(param_1,local_78,param_3);
  (**(code **)(*param_1 + 0x58))
            (param_1,local_58,param_3,
             CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff);
  FUN_140018470(local_b8);
  FUN_140017f0d(local_1a0,local_b8,local_98,lVar1);
  FUN_1400017de(local_58);
  FUN_1400017de(local_78);
  FUN_1400017de(local_98);
  FUN_1400170f8(local_198,param_2);
  FUN_140009ff0(local_1b0);
  return param_2;
}

