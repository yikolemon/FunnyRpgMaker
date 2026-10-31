/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140050cad */

undefined8 FUN_140050cad(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = *param_2;
  lVar1 = param_2[1];
  if (lVar2 == lVar1) {
    FUN_14000169c(param_1,&DAT_14016e735);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
      FUN_140050e99(local_78,lVar2);
      FUN_14001a45e(&local_58,local_78);
      FUN_1400017de(local_78);
    }
    FUN_14000169c(local_b8,&DAT_14017146a);
    FUN_1400198e7(local_98,&local_58,local_b8);
    FUN_140018136(local_78,&DAT_14017066d,local_98);
    FUN_14000ed8c(param_1,local_78,&DAT_1401705ae);
    FUN_1400017de(local_78);
    FUN_1400017de(local_98);
    FUN_14000eeca(&local_58);
  }
  return param_1;
}

