/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008d13a */

longlong FUN_18008d13a(char *param_1,undefined8 param_2)

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
    uVar2 = FUN_180081c80();
    *(undefined8 *)(param_1 + 8) = uVar2;
    cVar1 = *param_1;
  }
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_180081664(local_30,0);
    FUN_180088bbc(uVar2,local_50,local_20,local_30);
    FUN_18007ff6e(local_30);
    FUN_180001ef2(local_20);
    return local_50[0] + 0x20;
  }
  local_30[0] = FUN_18008843c(param_1);
  FUN_1800172c9(local_50,"cannot use operator[] with a string argument with ");
  FUN_180017158(local_88,0x131,local_50,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_88,&DAT_180391520);
}

