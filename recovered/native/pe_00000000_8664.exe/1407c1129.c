/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c1129 */

undefined4 FUN_1407c1129(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float10 in_ST0;
  float fVar3;
  
  puVar1 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0xc);
  }
  pfVar2 = (float *)(ulonglong)(uint)(param_2 * 0x1c + *(int *)(param_1 + 100));
  if (*(char *)(puVar1 + 5) == '\0') {
    fVar3 = pfVar2[7] - *pfVar2;
  }
  else {
    fVar3 = pfVar2[8] - pfVar2[1];
  }
  puVar1[1] = fVar3;
  *puVar1 = (int)param_1;
  *(undefined8 *)(puVar1 + -2) = 0x1407c116a;
  FUN_1407c0ee9();
  puVar1[2] = (float)in_ST0;
  return puVar1[2];
}

