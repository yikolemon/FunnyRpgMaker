/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000d87e */

undefined8 * FUN_14000d87e(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [56];
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (param_1 != (char *)*param_3) {
    FUN_1400027d2(auStack_48,"iterator does not fit current value");
    FUN_14000e4a8(auStack_f8,0xca,auStack_48,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(auStack_f8,&DAT_140ee3af0);
  }
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x8000000000000000;
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = param_3[2];
    FUN_14000ef7c(lVar3 + 0x10,*(undefined8 *)(lVar2 + 8),lVar3);
    FUN_140004b06(*(longlong *)(lVar2 + 8) + -0x10);
    *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + -0x10;
    param_2[2] = lVar3;
  }
  else if (cVar1 == '\x01') {
    uVar4 = FUN_14000ebda(*(undefined8 *)(param_1 + 8),param_3[1]);
    param_2[1] = uVar4;
  }
  else {
    param_2[3] = 1;
    if (5 < (byte)(cVar1 - 3U)) {
      uStack_50 = FUN_14000ea3a(param_1);
      FUN_14000e963(auStack_48,"cannot use erase() with ");
      FUN_14000e7f2(auStack_88,0x133,auStack_48,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(auStack_88,&DAT_140ee3b30);
    }
    if (param_3[3] != 0) {
      FUN_1400027d2(auStack_48,"iterator out of range");
      FUN_14000e4a8(auStack_c0,0xcd,auStack_48,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(auStack_c0,&DAT_140ee3af0);
    }
    if (cVar1 == '\b') {
      FUN_1400022f6(*(undefined8 *)(param_1 + 8));
      thunk_FUN_14018e090(*(undefined8 *)(param_1 + 8),0x28);
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    else if (cVar1 == '\x03') {
      FUN_14000109c(*(undefined8 *)(param_1 + 8));
      thunk_FUN_14018e090(*(undefined8 *)(param_1 + 8),0x20);
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    *param_1 = '\0';
  }
  return param_2;
}

