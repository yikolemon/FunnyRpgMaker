/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140091f85 */

void FUN_140091f85(int *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  for (; (param_1 != param_2 && (0xfffffffd < *param_1 - 0xeU)); param_1 = param_1 + 8) {
  }
  piVar5 = param_1;
  if (param_1 != param_2) {
    while (piVar1 = piVar5, piVar5 = piVar1 + 8, piVar5 != param_2) {
      if (0xfffffffd < *piVar5 - 0xeU) {
        uVar2 = *(undefined8 *)piVar5;
        uVar3 = *(undefined8 *)(piVar1 + 10);
        uVar4 = *(undefined8 *)(piVar1 + 0xe);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar1 + 0xc);
        *(undefined8 *)(param_1 + 6) = uVar4;
        *(undefined8 *)param_1 = uVar2;
        *(undefined8 *)(param_1 + 2) = uVar3;
        param_1 = param_1 + 8;
      }
    }
  }
  return;
}

