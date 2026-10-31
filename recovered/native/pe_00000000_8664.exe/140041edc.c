/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140041edc */

longlong FUN_140041edc(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_80 [56];
  longlong local_48 [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = *param_1;
  local_20 = param_2;
  if (cVar1 == '\0') {
    *param_1 = '\x01';
    uVar2 = FUN_140005726();
    *(undefined8 *)(param_1 + 8) = uVar2;
    cVar1 = *param_1;
  }
  if (cVar1 == '\x01') {
    local_28 = 0;
    FUN_140041fe2(*(undefined8 *)(param_1 + 8),local_48,local_20);
    FUN_14000109c(local_20);
    return local_48[0] + 0x40;
  }
  local_28 = FUN_14000ea3a(param_1);
  FUN_14000e963(local_48,"cannot use operator[] with a string argument with ");
  FUN_14000e7f2(local_80,0x131,local_48,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_80,&DAT_140ee3b30);
}

