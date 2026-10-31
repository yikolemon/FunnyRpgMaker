/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401124d5 */

undefined4 * FUN_1401124d5(undefined4 *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0xc + (longlong)param_3 * 0x74);
  uVar3 = FUN_14007b71f(*(undefined4 *)
                         (*(longlong *)(param_2 + 0x18) + 8 + (longlong)param_3 * 0x74),
                        *(undefined4 *)(param_2 + 0x110));
  uVar4 = FUN_14004863e(uVar1,*(undefined4 *)(param_2 + 0x118));
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar4;
  param_1[3] = uVar2;
  return param_1;
}

