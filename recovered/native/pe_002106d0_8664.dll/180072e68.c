/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180072e68 */

undefined4 FUN_180072e68(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong local_38 [3];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18007750c(param_1,local_38);
  uVar1 = FUN_18007f672(param_2,local_38);
  if ((char)uVar1 != '\0') {
    if ((longlong)*(int *)(param_2 + 0x18) == -1) {
      DAT_180417cb8 = 0;
    }
    else {
      DAT_180417cb8 = *(char *)(local_38[0] + *(int *)(param_2 + 0x18)) == 'U';
    }
  }
  FUN_180004cea(local_38);
  return uVar1;
}

