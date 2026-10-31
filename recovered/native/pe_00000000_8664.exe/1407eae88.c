/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eae88 */

void FUN_1407eae88(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(ulonglong)((int)&stack0x00000000 - 8);
  if (((int)(uint)*(ushort *)(puVar2 + 3) < *param_1) &&
     (fVar1 = *(float *)((ulonglong)(uint)param_1[2] + (ulonglong)*(ushort *)(puVar2 + 3) * 4),
     0.0 <= fVar1)) {
    puVar2[1] = fVar1;
    return;
  }
  *(undefined8 *)(puVar2 + -2) = 0x1407eaea9;
  uVar3 = FUN_1407eaec3();
  *puVar2 = uVar3;
  return;
}

