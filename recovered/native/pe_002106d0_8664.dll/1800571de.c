/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800571de */

longlong FUN_1800571de(char *param_1,undefined8 param_2)

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
    uVar2 = FUN_1800572e4();
    *(undefined8 *)(param_1 + 8) = uVar2;
    cVar1 = *param_1;
  }
  if (cVar1 == '\x01') {
    local_28 = 0;
    FUN_1800573c0(*(undefined8 *)(param_1 + 8),local_48,local_20);
    FUN_180001ef2(local_20);
    return local_48[0] + 0x40;
  }
  local_28 = FUN_1800173a0(param_1);
  FUN_1800172c9(local_48,"cannot use operator[] with a string argument with ");
  FUN_180017158(local_80,0x131,local_48,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_80,&DAT_180391520);
}

