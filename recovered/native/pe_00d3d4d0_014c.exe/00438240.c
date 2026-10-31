/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00438240 */

undefined4 __fastcall FUN_00438240(ushort *param_1,ushort *param_2,uint *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  puVar7 = param_1 + 2;
  if (puVar7 <= param_2) {
    uVar2 = *param_1 << 8 | *param_1 >> 8;
    if (uVar2 == 2) {
      puVar1 = puVar7 + (uint)(ushort)(param_1[1] << 8 | param_1[1] >> 8) * 3;
      uVar5 = 0;
      puVar4 = (ushort *)0x0;
      if (param_2 < puVar1) {
        return 0;
      }
      do {
        if (puVar1 <= puVar7) goto LAB_00438270;
        puVar4 = (ushort *)(uint)(ushort)(*puVar7 << 8 | *puVar7 >> 8);
        puVar6 = (ushort *)(uint)(ushort)(puVar7[1] << 8 | puVar7[1] >> 8);
        puVar7 = puVar7 + 3;
        uVar5 = (int)puVar6 + (uVar5 - (int)puVar4) + 1;
      } while (puVar4 <= puVar6);
    }
    else if (uVar2 == 1) {
      uVar5 = (uint)(ushort)(param_1[1] << 8 | param_1[1] >> 8);
      puVar4 = puVar7 + uVar5;
      if (puVar4 <= param_2) {
LAB_00438270:
        uVar3 = CONCAT31((int3)((uint)puVar4 >> 8),1);
        if (param_3 == (uint *)0x0) {
          return uVar3;
        }
        *param_3 = uVar5;
        return uVar3;
      }
    }
  }
  return 0;
}

