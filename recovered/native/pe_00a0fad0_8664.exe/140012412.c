/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140012412 */

undefined8
FUN_140012412(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_178 [16];
  undefined1 local_168 [8];
  undefined1 local_160 [224];
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined1 local_58 [32];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_60 = param_4;
  if (param_5 == 2) {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  }
  else {
    FUN_140009eb0(local_178,1);
    if ((*(longlong *)(param_3 + 0x18) == 0) && (*(longlong *)(param_3 + 0x348) != 0)) {
      cVar1 = FUN_14000d7b8(param_3 + 0x350,"Subcommands");
      if (cVar1 == '\0') {
        uVar2 = FUN_1400058b9(local_168,param_3 + 0x350);
        FUN_1400163f5(uVar2,0x3a);
      }
    }
    (**(code **)(*param_1 + 0x40))(param_1,local_58,param_3);
    FUN_1400058b9(local_168,local_58);
    FUN_1400017de(local_58);
    FUN_140006874(local_80,local_60);
    (**(code **)(*param_1 + 0x48))(param_1,local_58,param_3,local_80);
    FUN_1400058b9(local_168,local_58);
    FUN_1400017de(local_58);
    (**(code **)(*param_1 + 0x18))(param_1,local_58,param_3);
    FUN_1400058b9(local_168,local_58);
    FUN_1400017de(local_58);
    FUN_1400165ec(param_1,local_58,param_3,param_5);
    FUN_1400058b9(local_168,local_58);
    FUN_1400017de(local_58);
    (**(code **)(*param_1 + 0x20))(param_1,local_58,param_3,param_5);
    FUN_1400058b9(local_168,local_58);
    FUN_1400017de(local_58);
    (**(code **)(*param_1 + 0x38))(param_1,local_58,param_3);
    FUN_1400058b9(local_168,local_58);
    FUN_1400017de(local_58);
    FUN_1400170f8(local_160,param_2);
    FUN_140009ff0(local_178);
  }
  FUN_1400017de(local_60);
  return param_2;
}

