/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007bcee */

undefined4 * FUN_14007bcee(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  *param_1 = *param_2;
  FUN_140006874(param_1 + 2,param_3);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_14005872a(param_1 + 10,*(longlong *)(param_3 + 0x28) - *(longlong *)(param_3 + 0x20),
                param_3 + 0x20,param_3 + 0x28);
  return param_1;
}

