/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180121d5c */

void FUN_180121d5c(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180120868(DAT_180419160,param_1);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x58) = param_2;
    *(undefined8 *)(lVar1 + 0x50) = param_2;
    *(uint *)(lVar1 + 0xd0) = *(uint *)(lVar1 + 0xd0) & 0xffffffc7 | 8;
  }
  return;
}

