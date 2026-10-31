/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aa3e4 */

undefined4 * FUN_1800aa3e4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_18000358a(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1800aa55c(param_1 + 0xc,
                (*(longlong *)(param_2 + 0xe) - *(longlong *)(param_2 + 0xc) >> 5) *
                -0x3333333333333333,param_2 + 0xc,param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1800448ea(param_1 + 0x14,*(longlong *)(param_2 + 0x16) - *(longlong *)(param_2 + 0x14),
                param_2 + 0x14,param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  FUN_1800448ea(param_1 + 0x1a,*(longlong *)(param_2 + 0x1c) - *(longlong *)(param_2 + 0x1a),
                param_2 + 0x1a,param_2 + 0x1c);
  return param_1;
}

