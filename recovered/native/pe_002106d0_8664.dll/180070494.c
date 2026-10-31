/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180070494 */

void FUN_180070494(longlong *param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  uint uVar2;
  undefined1 local_1a0 [264];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined8 ***local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_18006a9f0(param_1 + 1,local_58);
  ppppuVar1 = local_58;
  if (7 < local_40) {
    ppppuVar1 = (undefined8 ****)local_58[0];
  }
  FUN_180004488(&DAT_180417b78,ppppuVar1,local_48);
  FUN_180001c90(local_78,param_2,local_58);
  FUN_18007e6e6(local_78,".json");
  uVar2 = 0;
  FUN_18007f878(local_1a0,local_78,2,0x40,1);
  (**(code **)(*param_1 + 0x28))(param_1,local_38);
  FUN_18007fd5c(local_38,local_98,4,0x20,uVar2 & 0xffffff00,0);
  FUN_18007fd45(local_1a0,local_98);
  FUN_180001ef2(local_98);
  FUN_18007ff6e(local_38);
  FUN_18007ffc0(local_1a0);
  FUN_18007f8d0(local_1a0);
  FUN_180001e4c(local_78);
  FUN_180001e4c(local_58);
  return;
}

