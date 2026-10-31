/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008442a */

longlong *
FUN_14008442a(undefined8 param_1,longlong *param_2,undefined8 param_3,int *param_4,int *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 local_160 [4];
  undefined1 local_150 [240];
  undefined1 local_60 [37];
  undefined1 local_3b;
  char local_3a;
  char local_39;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_3a = (*param_4 == 1) * '\x05' + '\x03';
  local_39 = (*param_4 != 1) * '\x03' + '\x06';
  local_3b = 0;
  FUN_140084310(local_39,&local_38);
  if (local_38 == uStack_30) {
    uVar6 = FUN_1400554d2();
    FUN_14000169c(local_60,"decrypt_error_msg");
    uVar6 = FUN_1400aebe4(uVar6,local_60);
    FUN_140052d74(local_160,&DAT_1401cc978,uVar6);
    FUN_140052e4f(local_150);
    FUN_140052e84(local_160);
    FUN_1400017de(local_60);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    *param_5 = (int)*(char *)(local_38 + 0x13);
    if ((ulonglong)*(uint *)(local_38 + 0xf) + 0x13 < (ulonglong)(uStack_30 - local_38)) {
      local_160[0] = (undefined4)(uStack_30 - local_38);
      uStack_30 = thunk_FUN_1400498e2(local_38 + 0x13 + (ulonglong)*(uint *)(local_38 + 0xf));
      FUN_140085332(&local_38,local_38,DAT_1401cc6b8,DAT_1401cc6c0 - DAT_1401cc6b8);
      lVar7 = local_38;
      if (*param_4 == 2) {
        *(undefined1 *)(local_38 + 8) = 0x43;
      }
      else if (*param_4 == 1) {
        uVar1 = *(undefined1 *)(local_38 + 6);
        *(undefined1 *)(local_38 + 6) = *(undefined1 *)(local_38 + 9);
        *(undefined1 *)(local_38 + 9) = uVar1;
        FUN_140084760(uVar1,&local_38,local_160);
        lVar7 = local_38;
      }
      uVar2 = (undefined4)uStack_30;
      uVar3 = uStack_30._4_4_;
      uVar4 = (undefined4)uStack_28;
      uVar5 = uStack_28._4_4_;
      uStack_28 = 0;
      local_38 = 0;
      uStack_30 = 0;
      *param_2 = lVar7;
      *(undefined4 *)(param_2 + 1) = uVar2;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
      *(undefined4 *)(param_2 + 2) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
    }
    else {
      FUN_1400567b4(local_160,&DAT_1401cc978,L"ERROR: Invalid key length");
      FUN_140052e4f(local_150);
      FUN_140052e84(local_160);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  FUN_140016e5c(&local_38);
  return param_2;
}

