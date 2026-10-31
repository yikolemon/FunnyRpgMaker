/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f5f14 */

undefined8 * FUN_1800f5f14(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  *param_2 = 0;
  uVar3 = (ulonglong)((uint)*(ulonglong *)(param_1 + 0x118) & 1);
  lVar1 = *(longlong *)
           (*(longlong *)(param_1 + 0x108) +
           (*(longlong *)(param_1 + 0x110) - 1U & *(ulonglong *)(param_1 + 0x118) >> 1) * 8);
  uVar2 = *(undefined8 *)(lVar1 + uVar3 * 8);
  *(undefined8 *)(lVar1 + uVar3 * 8) = 0;
  *param_2 = uVar2;
  FUN_1800f63aa(param_1 + 0x100);
  return param_2;
}

