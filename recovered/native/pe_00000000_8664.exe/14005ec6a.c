/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005ec6a */

void FUN_14005ec6a(longlong param_1,longlong param_2,uint param_3,char param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  do {
    uVar5 = (ulonglong)param_3;
    if (((short)param_3 == -1) &&
       (uVar5 = CONCAT62((uint6)(ushort)(param_3 >> 0x10),0x107), (int)uVar7 == 0x5f)) {
      if (param_4 == '\0') {
code_r0x00014005ecc8:
        puVar4 = *(undefined8 **)(param_2 + 0x28);
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)FUN_1401887b0(0x20);
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined8 **)(param_2 + 0x28) = puVar4;
        }
        pbVar1 = (byte *)((longlong)puVar4 + (uVar7 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar7 & 7));
      }
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
      cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,uVar5,uVar7);
      if (param_4 != cVar3) goto code_r0x00014005ecc8;
    }
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0x100) {
      return;
    }
  } while( true );
}

