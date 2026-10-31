/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040b69d */

uint * __cdecl FUN_0040b69d(uint *param_1,int param_2,void *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  
  puVar5 = (uint *)0x0;
  if (param_2 != 0) {
    puVar2 = (uint *)((int)param_1 + param_2 * 2);
    puVar5 = param_1;
    do {
      if ((short)*puVar5 != 0x7b) {
        puVar3 = (uint *)FUN_00408640(puVar5,puVar2,0x7b);
        puVar4 = (uint *)FUN_00408640(puVar5,puVar3,0x7d);
        while (puVar4 != puVar3) {
          puVar1 = (uint *)((int)puVar4 + 2);
          if ((puVar1 == puVar3) || (*(short *)puVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
            FUN_0040ba4e(0x504aa6);
          }
          uVar6 = FUN_0040bb79((undefined2 *)puVar5,(undefined2 *)puVar1,
                               *(undefined4 **)((int)param_3 + 0x10));
          *(int *)((int)param_3 + 0x10) = (int)((ulonglong)uVar6 >> 0x20);
          puVar5 = puVar4 + 1;
          puVar4 = (uint *)FUN_00408640(puVar5,puVar3,0x7d);
        }
        uVar6 = FUN_0040bb79((undefined2 *)puVar5,(undefined2 *)puVar3,
                             *(undefined4 **)((int)param_3 + 0x10));
        *(int *)((int)param_3 + 0x10) = (int)((ulonglong)uVar6 >> 0x20);
        puVar5 = puVar3;
        if (puVar3 == puVar2) {
          return (uint *)uVar6;
        }
      }
      puVar5 = (uint *)FUN_0040ba75((int)puVar5,puVar2,param_3);
    } while (puVar5 != puVar2);
  }
  return puVar5;
}

