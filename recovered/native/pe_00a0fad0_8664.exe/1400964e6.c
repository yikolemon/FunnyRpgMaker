/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400964e6 */

void FUN_1400964e6(longlong param_1,byte param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  puVar3 = *(undefined8 **)(lVar2 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_1400d3680(0x20);
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 **)(lVar2 + 0x28) = puVar3;
  }
  pbVar1 = (byte *)((longlong)puVar3 + (ulonglong)(param_2 >> 3));
  *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
  return;
}

