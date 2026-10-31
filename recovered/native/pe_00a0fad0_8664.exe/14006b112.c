/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006b112 */

undefined8 * FUN_14006b112(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_f8 [56];
  undefined1 local_c0 [56];
  undefined1 local_88 [56];
  undefined8 local_50;
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_1 != (char *)*param_3) {
    FUN_14000169c(local_48,"iterator does not fit current value");
    FUN_14006baa2(local_f8,0xca,local_48,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_f8,&DAT_1401966c0);
  }
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x8000000000000000;
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = param_3[2];
    FUN_14006c785(lVar3 + 0x10,*(undefined8 *)(lVar2 + 8),lVar3);
    FUN_1400578a6(*(longlong *)(lVar2 + 8) + -0x10);
    *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + -0x10;
    param_2[2] = lVar3;
  }
  else if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_1 + 8);
    param_2[1] = *(undefined8 *)(lVar2 + 8);
    FUN_14006c1d4(lVar2,param_2 + 1,param_3[1],param_3[1] + 0x30);
  }
  else {
    param_2[3] = 1;
    if (5 < (byte)(cVar1 - 3U)) {
      local_50 = FUN_14006c034(param_1);
      FUN_14006bf5d(local_48,"cannot use erase() with ");
      FUN_14006bdec(local_88,0x133,local_48,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_88,&DAT_140196700);
    }
    if (param_3[3] != 0) {
      FUN_14000169c(local_48,"iterator out of range");
      FUN_14006baa2(local_c0,0xcd,local_48,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_c0,&DAT_1401966c0);
    }
    if (cVar1 == '\b') {
      FUN_140016e5c(*(undefined8 *)(param_1 + 8));
      thunk_FUN_1400ddcd0(*(undefined8 *)(param_1 + 8),0x28);
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
      FUN_1400017de(*(undefined8 *)(param_1 + 8));
      thunk_FUN_1400ddcd0(*(undefined8 *)(param_1 + 8),0x20);
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

