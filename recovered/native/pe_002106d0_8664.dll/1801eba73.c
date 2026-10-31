/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eba73 */

undefined8 FUN_1801eba73(ushort *param_1,ushort *param_2,uint *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  
  puVar8 = param_1 + 2;
  if (puVar8 <= param_2) {
    uVar2 = *param_1 << 8 | *param_1 >> 8;
    if (uVar2 == 2) {
      puVar1 = puVar8 + (ulonglong)(ushort)(param_1[1] << 8 | param_1[1] >> 8) * 3;
      uVar6 = 0;
      puVar5 = (ushort *)0x0;
      if (param_2 < puVar1) {
        return 0;
      }
      do {
        if (puVar1 <= puVar8) goto LAB_1801ebaa5;
        uVar2 = *puVar8 << 8 | *puVar8 >> 8;
        puVar5 = (ushort *)(ulonglong)uVar2;
        uVar7 = puVar8[1] << 8 | puVar8[1] >> 8;
        uVar3 = (uint)uVar2;
        puVar8 = puVar8 + 3;
        uVar6 = (uVar6 - uVar3) + (uint)uVar7 + 1;
      } while (uVar3 < uVar7 || uVar3 == uVar7);
    }
    else if (uVar2 == 1) {
      uVar2 = param_1[1] << 8 | param_1[1] >> 8;
      uVar6 = (uint)uVar2;
      puVar5 = puVar8 + uVar2;
      if (puVar5 <= param_2) {
LAB_1801ebaa5:
        uVar4 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
        if (param_3 == (uint *)0x0) {
          return uVar4;
        }
        *param_3 = uVar6;
        return uVar4;
      }
    }
  }
  return 0;
}

