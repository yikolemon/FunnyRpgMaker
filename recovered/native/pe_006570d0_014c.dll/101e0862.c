/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e0862 */

undefined4 __fastcall FUN_101e0862(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort *puVar8;
  
  puVar8 = param_1 + 3;
  if (puVar8 <= param_2) {
    puVar1 = puVar8 + (uint)*(byte *)((int)param_1 + 5) + (uint)(byte)param_1[2] * 0x100;
    if (puVar1 <= param_2) {
      if ((uint)(byte)param_1[2] * 0x200 + (uint)*(byte *)((int)param_1 + 5) * 2 == 0) {
        return 1;
      }
      uVar3 = *param_1 << 8 | *param_1 >> 8;
      uVar5 = 0;
      while( true ) {
        puVar6 = (ushort *)
                 ((int)param_1 + (uint)(byte)*puVar8 * 0x100 + (uint)*(byte *)((int)puVar8 + 1));
        uVar7 = uVar3;
        if (uVar3 == 7) {
          if (param_2 < puVar6 + 4) {
            return 0;
          }
          if ((ushort)(*puVar6 << 8 | *puVar6 >> 8) != 1) {
            return 0;
          }
          uVar4 = puVar6[1] << 8 | puVar6[1] >> 8;
          uVar7 = uVar4;
          if ((uVar5 != 0) && (uVar7 = uVar5, uVar5 != uVar4)) {
            return 0;
          }
          puVar6 = (ushort *)
                   ((int)puVar6 +
                   (uint)*(byte *)((int)puVar6 + 7) +
                   (uint)(byte)puVar6[3] * 0x100 + (uint)*(byte *)((int)puVar6 + 5) * 0x10000 +
                   (uint)(byte)puVar6[2] * 0x1000000);
        }
        if (param_2 < puVar6 + 3) {
          return 0;
        }
        uVar5 = *puVar6 << 8 | *puVar6 >> 8;
        if (uVar7 == 3) {
          if (uVar5 != 1) {
            return 0;
          }
          cVar2 = FUN_101e0a22();
        }
        else {
          if (uVar7 != 1) {
            return 0;
          }
          if (uVar5 == 2) {
            cVar2 = FUN_101e09b0();
          }
          else {
            if (uVar5 != 1) {
              return 0;
            }
            cVar2 = FUN_101e0994();
          }
        }
        if (cVar2 == '\0') break;
        puVar8 = puVar8 + 1;
        uVar5 = uVar7;
        if (puVar1 <= puVar8) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

