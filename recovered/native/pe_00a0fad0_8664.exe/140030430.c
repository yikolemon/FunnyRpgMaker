/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140030430 */

undefined8 * FUN_140030430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != param_2 + 4) {
    FUN_14000eeca(puVar1);
    *puVar1 = param_2[4];
    puVar1[1] = param_2[5];
    puVar1[2] = param_2[6];
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != param_2) {
    FUN_1400065bc(puVar1);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar4;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  return param_1;
}

