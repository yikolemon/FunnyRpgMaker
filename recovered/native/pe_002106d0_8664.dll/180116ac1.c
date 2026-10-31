/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116ac1 */

void FUN_180116ac1(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x2030) = *(uint *)(DAT_180419160 + 0x2030) | 0x10;
  uVar1 = *param_2;
  *(undefined8 *)(lVar2 + 0x2078) = *param_1;
  *(undefined8 *)(lVar2 + 0x2080) = uVar1;
  *(undefined8 *)(lVar2 + 0x2088) = param_3;
  *(undefined8 *)(lVar2 + 0x2090) = param_4;
  return;
}

