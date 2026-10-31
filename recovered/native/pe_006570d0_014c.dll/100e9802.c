/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e9802 */

undefined4 * FUN_100e9802(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  while (param_1 != param_2) {
    if (param_2 != param_3) {
      FUN_10004e60();
      *(undefined8 *)(param_3 + -8) = *(undefined8 *)(param_2 + -8);
      uVar1 = param_2[-0xb];
      uVar2 = param_2[-10];
      uVar3 = param_2[-9];
      param_3[-0xc] = param_2[-0xc];
      param_3[-0xb] = uVar1;
      param_3[-10] = uVar2;
      param_3[-9] = uVar3;
      param_2[-8] = 0;
      param_2[-7] = 0xf;
      *(undefined1 *)(param_2 + -0xc) = 0;
    }
    FUN_100e9388(param_2 + -6);
    FUN_100e9388(param_2 + -3);
    param_3 = param_3 + -0xc;
    param_2 = param_2 + -0xc;
  }
  return param_3;
}

