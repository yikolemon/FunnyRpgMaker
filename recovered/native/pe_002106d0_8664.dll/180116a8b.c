/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116a8b */

void FUN_180116a8b(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x2030) = *(uint *)(DAT_180419160 + 0x2030) | 1;
  *(undefined8 *)(lVar1 + 0x2044) = *param_1;
  *(undefined8 *)(lVar1 + 0x204c) = *param_3;
  *(uint *)(lVar1 + 0x2034) = param_2 + (uint)(param_2 == 0);
  *(undefined1 *)(lVar1 + 0x2074) = 1;
  return;
}

