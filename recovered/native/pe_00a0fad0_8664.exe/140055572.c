/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140055572 */

undefined8 FUN_140055572(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_168 [16];
  undefined1 local_158 [240];
  longlong local_68;
  longlong local_60;
  undefined2 local_50 [19];
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar2 = 7;
  if (*(char *)(param_1 + 0xe9) == '\x01') {
    if (*param_2 == '\0') {
      uVar2 = FUN_1400554d2();
      FUN_14000169c(local_50,"pro_game_detected_msg");
      uVar2 = FUN_1400aebe4(uVar2,local_50);
      FUN_140052d74(local_168,&DAT_1401cc970,uVar2);
      FUN_140052e4f(local_158);
      FUN_140052e84(local_168);
      FUN_1400017de(local_50);
    }
    FUN_1400808b6(param_1 + 0x48,&local_68);
    if (local_68 == local_60) {
      uVar2 = FUN_1400554d2();
      FUN_14000169c(local_50,"det_key_error_msg");
      uVar2 = FUN_1400aebe4(uVar2,local_50);
      FUN_140052d74(local_168,&DAT_1401cc970,uVar2);
      FUN_140052e4f(local_158);
      FUN_140052e84(local_168);
      FUN_1400017de(local_50);
      uVar2 = 6;
    }
    else {
      local_29 = 0;
      local_50[0] = 1000;
      if (*(int *)(param_1 + 0xec) == 2) {
        local_50[0] = 0x3f2;
      }
      FUN_14000169c(local_168,"UNKNOWN_PRO");
      FUN_140078528(param_1,local_168,local_50,&local_29,&local_68);
      FUN_1400017de(local_168);
      local_168[0] = 0;
      FUN_140056814();
      uVar2 = 0;
      if (*param_2 == '\0') {
        uVar1 = FUN_1400554d2();
        FUN_14000169c(local_50,"det_key_found_msg");
        uVar1 = FUN_1400aebe4(uVar1,local_50);
        FUN_140052d74(local_168,&DAT_1401cc970,uVar1);
        FUN_140052e4f(local_158);
        FUN_140052e84(local_168);
        FUN_1400017de(local_50);
      }
    }
    FUN_140016e5c(&local_68);
  }
  return uVar2;
}

