/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10020708 */

void __fastcall FUN_10020708(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  *param_1 = std::_Node_if::vftable;
  puVar3 = (undefined4 *)param_1[6];
  do {
    do {
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)puVar3[6];
      puVar3[6] = 0;
      puVar2 = (undefined4 *)param_1[5];
      bVar5 = puVar3 == puVar2;
      puVar4 = puVar3;
      puVar3 = puVar1;
    } while (bVar5);
    do {
      puVar1 = (undefined4 *)puVar4[3];
      puVar4[3] = 0;
      (**(code **)*puVar4)(1);
      if (puVar1 == puVar2) break;
      puVar4 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  } while( true );
}

