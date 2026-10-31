/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400609aa */

void FUN_1400609aa(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  *param_1 = std::_Node_if::vftable;
  puVar3 = (undefined8 *)param_1[5];
  do {
    do {
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      puVar1 = (undefined8 *)puVar3[5];
      puVar3[5] = 0;
      puVar2 = (undefined8 *)param_1[4];
      bVar5 = puVar3 == puVar2;
      puVar4 = puVar3;
      puVar3 = puVar1;
    } while (bVar5);
    do {
      puVar1 = (undefined8 *)puVar4[2];
      puVar4[2] = 0;
      (**(code **)*puVar4)(puVar4,1);
      if (puVar1 == puVar2) break;
      puVar4 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  } while( true );
}

