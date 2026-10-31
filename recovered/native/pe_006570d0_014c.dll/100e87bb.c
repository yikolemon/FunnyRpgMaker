/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e87bb */

undefined8 *
FUN_100e87bb(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  char cVar2;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c [48];
  undefined8 *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_7c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ead50;
  local_1c = ExceptionList;
  local_2c = param_1;
  local_7c = param_2;
  local_78 = param_3;
  local_70 = param_4;
  local_6c = param_5;
  local_68 = param_6;
  local_60 = param_7;
  local_24 = param_8;
  ExceptionList = &local_1c;
  while( true ) {
    cVar2 = FUN_10051c02(&local_6c);
    if (cVar2 != '\0') break;
    FUN_100dc366();
    FUN_100e8a76(local_5c,local_28 & 0xff);
    local_14 = 3;
    FUN_100e9698(&local_28,param_9,local_5c);
    uVar1 = local_28;
    local_14 = 0xffffffff;
    FUN_10060b3c();
    FUN_10060b3c();
    param_9 = uVar1 + 0x30;
    FUN_10001fee();
    FUN_10051ba0();
  }
  *local_2c = CONCAT44(param_9,local_24);
  ExceptionList = local_1c;
  return param_1;
}

