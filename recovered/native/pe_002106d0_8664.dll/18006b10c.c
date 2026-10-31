/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006b10c */

void FUN_18006b10c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_180044980();
  puVar2 = (undefined8 *)FUN_1800afc68(param_1,param_2);
  if (puVar2 != param_2) {
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    FUN_180017ca0(puVar2,puVar4,param_2[2]);
  }
  puVar1 = (undefined8 *)param_2[5];
  for (puVar4 = (undefined8 *)param_2[4]; puVar4 != puVar1; puVar4 = puVar4 + 10) {
    puVar3 = (undefined8 *)FUN_1800ad81a(puVar2 + 4,puVar4);
    if (puVar3 != puVar4) {
      puVar5 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar5 = (undefined8 *)*puVar4;
      }
      FUN_180017ca0(puVar3,puVar5,puVar4[2]);
      FUN_1800af8dc(puVar3 + 4,puVar4[4],(longlong)(puVar4[5] - puVar4[4]) >> 5);
      FUN_1800af8dc(puVar3 + 7,puVar4[7],(longlong)(puVar4[8] - puVar4[7]) >> 5);
    }
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  FUN_18023d6e0(param_1 + 0xb8);
  return;
}

