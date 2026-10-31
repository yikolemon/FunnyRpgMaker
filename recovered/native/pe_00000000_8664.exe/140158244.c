/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140158244 */

undefined8 FUN_140158244(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14012d612(param_2,0);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_14012e0a0(param_2,&DAT_140e9f470,param_1);
    if ((int)uVar1 == 0) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x48) * 0x10000;
      uVar1 = 0;
    }
  }
  return uVar1;
}

