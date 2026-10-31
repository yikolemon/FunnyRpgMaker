/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b8647 */

undefined4 FUN_1800b8647(longlong param_1)

{
  bool bVar1;
  undefined4 unaff_EBX;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 ***local_e8 [7];
  undefined8 ***local_b0;
  int *local_a8;
  int *local_a0;
  char local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_180417878);
  FUN_18004187e();
  FUN_18004187e();
  FUN_1800b8954();
  if (DAT_180417b24 == '\x01') {
    FUN_1800b8cc3(&local_a8,*(undefined4 *)(param_1 + 8),param_1 + 0x808);
    bVar1 = true;
    if (((local_78 == '\x01') && (local_a8 != local_a0)) && (*local_a8 == 0x67)) {
      local_e8[0] = local_e8;
      local_100 = 0xffffffff00000082;
      local_f8 = DAT_180417b1c;
      local_f4 = DAT_180417b18;
      local_f0 = DAT_180417b20;
      local_ec = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_70 = &local_100;
      FUN_18009c334(&local_68,6);
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      FUN_1800b8d28(local_e8,*(undefined4 *)(param_1 + 8),param_1 + 0x808,&local_68);
      FUN_180060538(&local_50);
      FUN_180004cea(&local_68);
      DAT_180417b24 = '\0';
      unaff_EBX = (*DAT_180417b08)(param_1);
      if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
        (*(code *)(*local_b0)[2])(local_b0);
        (*(code *)(*local_b0)[4])(local_b0,(undefined8 ****)local_b0 != local_e8);
      }
      bVar1 = false;
    }
    FUN_1800b8e0a(&local_a8);
    if (!bVar1) goto LAB_1800b87cd;
  }
  unaff_EBX = (*DAT_180417b08)(param_1);
LAB_1800b87cd:
  FUN_18023d6e0(&DAT_180417878);
  return unaff_EBX;
}

