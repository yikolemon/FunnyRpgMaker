/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008362e */

undefined8 * FUN_14008362e(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte local_178 [16];
  undefined1 local_168 [240];
  longlong local_78;
  longlong local_70;
  undefined1 local_60 [37];
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_3b = 0x800;
  local_39 = 6;
  local_38 = param_2;
  FUN_140083902(0,&local_78);
  if (local_78 == local_70) {
    uVar4 = FUN_1400554d2();
    FUN_14000169c(local_60,"decrypt_key_error_msg");
    uVar4 = FUN_1400aebe4(uVar4,local_60);
    FUN_140052d74(local_178,&DAT_1401cc978,uVar4);
    FUN_140052e4f(local_168);
    FUN_140052e84(local_178);
    FUN_1400017de(local_60);
  }
  else {
    uVar2 = *(uint *)(local_78 + 0xf);
    if ((ulonglong)uVar2 + 0x13 < (ulonglong)(local_70 - local_78)) {
      FUN_140117538(0x5d93ebf);
      for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 1) {
        bVar1 = *(byte *)(local_78 + 0x13 + uVar5);
        local_178[0] = FUN_140117550();
        local_178[0] = bVar1 ^ local_178[0];
        pbVar3 = (byte *)local_38[1];
        if (pbVar3 == (byte *)local_38[2]) {
          FUN_1400660b8(local_38,pbVar3,local_178);
        }
        else {
          *pbVar3 = local_178[0];
          local_38[1] = local_38[1] + 1;
        }
      }
    }
    else {
      uVar4 = FUN_1400554d2();
      FUN_14000169c(local_60,"prot_key_len_error_msg");
      uVar4 = FUN_1400aebe4(uVar4,local_60);
      FUN_140052d74(local_178,&DAT_1401cc978,uVar4);
      FUN_140052e4f(local_168);
      FUN_140052e84(local_178);
      FUN_1400017de(local_60);
    }
  }
  FUN_140016e5c(&local_78);
  return local_38;
}

