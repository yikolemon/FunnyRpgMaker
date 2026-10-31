/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140017762 */

undefined8 FUN_140017762(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 **ppuVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined8 ***local_58;
  undefined8 **ppuStack_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = param_3;
  if (*(longlong *)(param_3 + 0x10) == 0) {
    lVar3 = param_1 + 8;
    if (param_3 != lVar3) {
      if (0xf < *(ulonglong *)(param_1 + 0x20)) {
        lVar3 = *(longlong *)(param_1 + 8);
      }
      FUN_140017200(param_3,lVar3,*(undefined8 *)(param_1 + 0x18));
    }
  }
  else {
    FUN_140006fbc(&local_58,&DAT_1401728a8,param_1 + 8);
    ppppuVar4 = &local_58;
    if (0xf < local_40) {
      ppppuVar4 = (undefined8 ****)local_58;
    }
    FUN_14000b1f8(local_38,ppppuVar4,local_48);
    FUN_1400017de(&local_58);
  }
  local_58 = (undefined8 ***)0x0;
  ppuStack_50 = (undefined8 ***)0x0;
  local_48 = 0;
  FUN_14001700e(&local_58,*(longlong *)(param_1 + 0x2b0) - *(longlong *)(param_1 + 0x2a8) >> 3,
                param_1 + 0x2a8,param_1 + 0x2b0);
  if (local_58 == (undefined8 ***)ppuStack_50) {
    plVar2 = *(longlong **)(param_1 + 0x228);
    FUN_140006874(local_78,local_38);
    (**(code **)(*plVar2 + 8))(plVar2,param_2,param_1,local_78,param_4);
  }
  else {
    ppuVar1 = (undefined8 **)ppuStack_50[-1];
    FUN_140006874(local_98,local_38);
    FUN_140017762(ppuVar1,param_2,local_98,param_4);
  }
  FUN_140016e5c(&local_58);
  FUN_1400017de(local_38);
  return param_2;
}

