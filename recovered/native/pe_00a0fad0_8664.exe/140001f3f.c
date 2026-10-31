/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001f3f */

longlong FUN_140001f3f(longlong param_1)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_90 [2];
  undefined8 local_80;
  ulonglong local_78;
  undefined *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1400786ec(&local_60);
  FUN_14000169c(param_1,&DAT_1401728de);
  local_48 = 0;
  local_40 = param_1;
  while( true ) {
    lVar1 = local_40;
    if ((ulonglong)(local_58 - local_60 >> 5) <= local_48) break;
    if (*(longlong *)(local_40 + 0x10) != 0) {
      FUN_14000b1f8(local_40,&DAT_1401728dd,1);
    }
    local_70 = &DAT_14016e730;
    local_68 = 7;
    FUN_1400020df(local_90,&local_70,&local_48,local_48 * 0x20 + local_60);
    pppuVar2 = local_90;
    if (0xf < local_78) {
      pppuVar2 = (undefined8 ***)local_90[0];
    }
    FUN_14000b1f8(local_40,pppuVar2,local_80);
    FUN_1400017de(local_90);
    local_48 = local_48 + 1;
  }
  FUN_14000eeca(&local_60);
  return lVar1;
}

