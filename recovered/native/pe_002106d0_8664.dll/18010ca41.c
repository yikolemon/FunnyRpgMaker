/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010ca41 */

void FUN_18010ca41(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x2030) = *(uint *)(DAT_180419160 + 0x2030) | 2;
  *(undefined8 *)(lVar1 + 0x2054) = *param_1;
  *(uint *)(lVar1 + 0x2038) = param_2 + (uint)(param_2 == 0);
  return;
}

