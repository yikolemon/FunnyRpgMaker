/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027c5dc */

void FUN_14027c5dc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_140255e50();
  puVar2 = (undefined8 *)FUN_1402c1138(param_1,param_2);
  if (puVar2 != param_2) {
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    FUN_140229170(puVar2,puVar4,param_2[2]);
  }
  puVar1 = (undefined8 *)param_2[5];
  for (puVar4 = (undefined8 *)param_2[4]; puVar4 != puVar1; puVar4 = puVar4 + 10) {
    puVar3 = (undefined8 *)FUN_1402becea(puVar2 + 4,puVar4);
    if (puVar3 != puVar4) {
      puVar5 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar5 = (undefined8 *)*puVar4;
      }
      FUN_140229170(puVar3,puVar5,puVar4[2]);
      FUN_1402c0dac(puVar3 + 4,puVar4[4],(longlong)(puVar4[5] - puVar4[4]) >> 5);
      FUN_1402c0dac(puVar3 + 7,puVar4[7],(longlong)(puVar4[8] - puVar4[7]) >> 5);
    }
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  FUN_14044ebb0(param_1 + 0xb8);
  return;
}

