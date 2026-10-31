/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140087492 */

void FUN_140087492(longlong *param_1,undefined8 param_2)

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
  FUN_140075fec(param_1 + 1,local_58);
  ppppuVar1 = local_58;
  if (7 < local_40) {
    ppppuVar1 = (undefined8 ****)local_58[0];
  }
  FUN_14000ffc0(&DAT_1401cc780,ppppuVar1,local_48);
  FUN_14007dcb3(local_78,param_2,local_58);
  FUN_140087a7e(local_78,".json");
  uVar2 = 0;
  FUN_140085d44(local_1a0,local_78,2,0x40,1);
  (**(code **)(*param_1 + 0x28))(param_1,local_38);
  FUN_140057f90(local_38,local_98,4,0x20,uVar2 & 0xffffff00,0);
  FUN_1400058b9(local_1a0,local_98);
  FUN_1400017de(local_98);
  FUN_1400578a6(local_38);
  FUN_140085ecc(local_1a0);
  FUN_1400581a2(local_1a0);
  FUN_140005690(local_78);
  FUN_140005690(local_58);
  return;
}

