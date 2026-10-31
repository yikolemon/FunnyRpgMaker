/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00437fd2 */

undefined4 __fastcall FUN_00437fd2(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  ushort *puVar7;
  ushort uVar8;
  ushort *puVar9;
  
  puVar9 = param_1 + 3;
  if (puVar9 <= param_2) {
    puVar1 = puVar9 + (uint)*(byte *)((int)param_1 + 5) + (uint)(byte)param_1[2] * 0x100;
    if (puVar1 <= param_2) {
      if ((uint)(byte)param_1[2] * 0x200 + (uint)*(byte *)((int)param_1 + 5) * 2 == 0) {
        return CONCAT31((int3)((uint)puVar1 >> 8),1);
      }
      uVar2 = *param_1 << 8 | *param_1 >> 8;
      uVar4 = 0;
      while( true ) {
        puVar7 = (ushort *)
                 ((int)param_1 + (uint)(byte)*puVar9 * 0x100 + (uint)*(byte *)((int)puVar9 + 1));
        uVar8 = uVar2;
        if (uVar2 == 7) {
          if (param_2 < puVar7 + 4) {
            return 0;
          }
          if ((ushort)(*puVar7 << 8 | *puVar7 >> 8) != 1) {
            return 0;
          }
          uVar3 = puVar7[1] << 8 | puVar7[1] >> 8;
          uVar8 = uVar3;
          if ((uVar4 != 0) && (uVar8 = uVar4, uVar4 != uVar3)) {
            return 0;
          }
          puVar7 = (ushort *)
                   ((int)puVar7 +
                   (uint)*(byte *)((int)puVar7 + 7) +
                   (uint)(byte)puVar7[3] * 0x100 + (uint)*(byte *)((int)puVar7 + 5) * 0x10000 +
                   (uint)(byte)puVar7[2] * 0x1000000);
        }
        if (param_2 < puVar7 + 3) {
          return 0;
        }
        uVar4 = *puVar7 << 8 | *puVar7 >> 8;
        if (uVar8 == 3) {
          if (uVar4 != 1) {
            return 0;
          }
          uVar6 = FUN_00438192((int)puVar7,param_2);
        }
        else {
          if (uVar8 != 1) {
            return 0;
          }
          if (uVar4 == 2) {
            uVar5 = FUN_00438120((int)puVar7,param_2);
            uVar6 = CONCAT22(extraout_var,uVar5);
          }
          else {
            if (uVar4 != 1) {
              return 0;
            }
            uVar6 = FUN_00438104((int)puVar7,param_2);
          }
        }
        if ((char)uVar6 == '\0') break;
        puVar9 = puVar9 + 1;
        uVar4 = uVar8;
        if (puVar1 <= puVar9) {
          return CONCAT31((int3)((uint)uVar6 >> 8),1);
        }
      }
      return 0;
    }
  }
  return 0;
}

