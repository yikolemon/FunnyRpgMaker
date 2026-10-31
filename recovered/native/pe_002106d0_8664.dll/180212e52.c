/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180212e52 */

void FUN_180212e52(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 3) == -0x21524111) {
    uVar1 = param_1[6];
    FUN_1801c9b65(uVar1,*param_1);
    *param_1 = 0;
    FUN_1801c9b65(uVar1,param_1[4]);
    param_1[4] = 0;
    FUN_1801c9b65(uVar1,param_1[5]);
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}

