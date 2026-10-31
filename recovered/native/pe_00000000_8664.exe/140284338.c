/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140284338 */

undefined4 FUN_140284338(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong local_38 [3];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1402889dc(param_1,local_38);
  uVar1 = FUN_140290b42(param_2,local_38);
  if ((char)uVar1 != '\0') {
    if ((longlong)*(int *)(param_2 + 0x18) == -1) {
      DAT_140629188 = 0;
    }
    else {
      DAT_140629188 = *(char *)(local_38[0] + *(int *)(param_2 + 0x18)) == 'U';
    }
  }
  FUN_1402161ba(local_38);
  return uVar1;
}

