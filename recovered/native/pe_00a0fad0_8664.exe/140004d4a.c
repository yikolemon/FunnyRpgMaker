/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140004d4a */

undefined4 FUN_140004d4a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  longlong local_68;
  undefined1 local_60 [32];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  plVar1 = param_2 + 4;
  FUN_140006874(local_60,plVar1);
  cVar2 = FUN_14000d7b8(local_60,"RuntimeError");
  FUN_1400017de(local_60);
  if (cVar2 == '\0') {
    FUN_140006874(local_60,plVar1);
    cVar2 = FUN_14000d7b8(local_60,"CallForHelp");
    FUN_1400017de(local_60);
    if (cVar2 == '\0') {
      FUN_140006874(local_60,plVar1);
      cVar2 = FUN_14000d7b8(local_60,"CallForAllHelp");
      FUN_1400017de(local_60);
      if (cVar2 == '\0') {
        FUN_140006874(local_60,plVar1);
        cVar2 = FUN_14000d7b8(local_60,"CallForVersion");
        FUN_1400017de(local_60);
        if (cVar2 == '\0') {
          if (((int)param_2[3] != 0) &&
             (plVar1 = *(longlong **)(param_1 + 0x270), plVar1 != (longlong *)0x0)) {
            local_68 = param_1;
            (**(code **)(*plVar1 + 0x10))(plVar1,local_60,&local_68,param_2);
            uVar3 = FUN_1400058b9(param_4,local_60);
            FUN_140041192(uVar3);
            FUN_1400017de(local_60);
          }
        }
        else {
          uVar3 = (**(code **)(*param_2 + 8))(param_2);
          uVar3 = FUN_1400052b8(param_3,uVar3);
          FUN_1400163f5(uVar3,10);
        }
      }
      else {
        FUN_14000169c(local_88,&DAT_1401728de);
        FUN_140017762(param_1,local_60,local_88,1);
        FUN_1400058b9(param_3,local_60);
        FUN_1400017de(local_60);
      }
    }
    else {
      FUN_14000169c(local_a8,&DAT_1401728de);
      FUN_140017762(param_1,local_60,local_a8,0);
      FUN_1400058b9(param_3,local_60);
      FUN_1400017de(local_60);
    }
  }
  return (int)param_2[3];
}

