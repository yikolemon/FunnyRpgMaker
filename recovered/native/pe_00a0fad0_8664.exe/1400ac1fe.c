/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ac1fe */

undefined4 * FUN_1400ac1fe(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140006874(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_14005872a(param_1 + 10,*(longlong *)(param_2 + 0xc) - *(longlong *)(param_2 + 10),param_2 + 10
                ,param_2 + 0xc);
  return param_1;
}

