/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140013dfa */

undefined8 * FUN_140013dfa(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined8 **local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_140006874(local_b8,param_3 + 0x28);
  lVar1 = *(longlong *)(param_3 + 0x338);
  lVar2 = *(longlong *)(param_3 + 0x340);
  if (*(char *)(param_3 + 0x4c) == '\x01') {
    FUN_14000169c(local_138,"REQUIRED");
    FUN_1400173aa(param_1,local_78,local_138);
    FUN_140018136(local_98,&DAT_1401728a8,local_78);
    FUN_14000ed8c(local_58,local_98,&DAT_1401728a8);
    pppuVar3 = local_58;
    if (0xf < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    FUN_14000b1f8(local_b8,pppuVar3,local_48);
    FUN_1400017de(local_58);
    FUN_1400017de(local_98);
    FUN_1400017de(local_78);
  }
  if (lVar1 == 0 || lVar2 != lVar1) {
    if (lVar2 == 0) {
      if (lVar1 != 0) {
        FUN_14001943c(local_78,lVar1);
        FUN_140018136(local_98," \n[At least ",local_78);
        FUN_14000ed8c(local_58,local_98," of the following options are required]");
        pppuVar3 = local_58;
        if (0xf < local_40) {
          pppuVar3 = (undefined8 ***)local_58[0];
        }
        FUN_14000b1f8(local_b8,pppuVar3,local_48);
        FUN_1400017de(local_58);
        FUN_1400017de(local_98);
        FUN_1400017de(local_78);
      }
    }
    else if (lVar1 == 0) {
      FUN_14001943c(local_78,lVar2);
      FUN_140018136(local_98," \n[At most ",local_78);
      FUN_14000ed8c(local_58,local_98," of the following options are allowed]");
      pppuVar3 = local_58;
      if (0xf < local_40) {
        pppuVar3 = (undefined8 ***)local_58[0];
      }
      FUN_14000b1f8(local_b8,pppuVar3,local_48);
      FUN_1400017de(local_58);
      FUN_1400017de(local_98);
      FUN_1400017de(local_78);
    }
    else {
      FUN_14001943c(local_78,lVar2);
      FUN_14001943c(local_d8,lVar1);
      FUN_140018136(local_f8," \n[Between ",local_d8);
      FUN_14000ed8c(local_118,local_f8," and ");
      FUN_140018470(local_98);
      FUN_14000ed8c(local_58,local_98," of the follow options are required]");
      pppuVar3 = local_58;
      if (0xf < local_40) {
        pppuVar3 = (undefined8 ***)local_58[0];
      }
      FUN_14000b1f8(local_b8,pppuVar3,local_48);
      FUN_1400017de(local_58);
      FUN_1400017de(local_98);
      FUN_1400017de(local_118);
      FUN_1400017de(local_f8);
      FUN_1400017de(local_d8);
      FUN_1400017de(local_78);
    }
  }
  else if (lVar1 == 1) {
    FUN_14000b1f8(local_b8," \n[Exactly 1 of the following options is required]",0x32);
  }
  else {
    FUN_14001943c(local_78,lVar1);
    FUN_140018136(local_98," \n[Exactly ",local_78);
    FUN_14000ed8c(local_58,local_98," options from the following list are required]");
    pppuVar3 = local_58;
    if (0xf < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    FUN_14000b1f8(local_b8,pppuVar3,local_48);
    FUN_1400017de(local_58);
    FUN_1400017de(local_98);
    FUN_1400017de(local_78);
  }
  if (local_a8 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  else {
    FUN_1400193d2(param_2,local_b8,&DAT_1401728dd);
  }
  FUN_1400017de(local_b8);
  return param_2;
}

