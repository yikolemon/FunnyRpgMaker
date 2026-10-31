/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140057c36 */

longlong FUN_140057c36(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_88 [56];
  longlong local_50 [4];
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = *param_1;
  local_20 = param_2;
  if (cVar1 == '\0') {
    *param_1 = '\x01';
    uVar2 = FUN_1400635a8();
    *(undefined8 *)(param_1 + 8) = uVar2;
    cVar1 = *param_1;
  }
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_140057552(local_30,0);
    FUN_14006c98c(uVar2,local_50,local_20,local_30);
    FUN_1400578a6(local_30);
    FUN_1400017de(local_20);
    return local_50[0] + 0x20;
  }
  local_30[0] = FUN_14006c034(param_1);
  FUN_14006bf5d(local_50,"cannot use operator[] with a string argument with ");
  FUN_14006bdec(local_88,0x131,local_50,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_88,&DAT_140196700);
}

