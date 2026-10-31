/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400888ec */

undefined4 FUN_1400888ec(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong local_38 [3];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140089bf6(param_1,local_38);
  uVar1 = FUN_14008cd30(param_2,local_38);
  if ((char)uVar1 != '\0') {
    if ((longlong)*(int *)(param_2 + 0x18) == -1) {
      DAT_1401cc8c6 = 0;
    }
    else {
      DAT_1401cc8c6 = *(char *)(local_38[0] + *(int *)(param_2 + 0x18)) == 'U';
    }
  }
  FUN_140016e5c(local_38);
  return uVar1;
}

