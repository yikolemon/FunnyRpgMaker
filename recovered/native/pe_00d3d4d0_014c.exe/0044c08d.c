/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044c08d */

undefined4 __cdecl FUN_0044c08d(char *param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined3 uVar4;
  ushort *puVar3;
  uint uVar5;
  uint uVar6;
  
  puVar1 = *(ushort **)(param_1 + 8);
  if (puVar1 != (ushort *)0x0) {
    uVar4 = (undefined3)((uint)puVar1 >> 8);
    if (*param_1 == '\x03') {
      if (param_2 - *(int *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) {
        return CONCAT31(uVar4,param_1[0x18]);
      }
      puVar3 = puVar1 + 1;
      uVar6 = (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8);
      do {
        if (param_2 < uVar6) {
          return 0;
        }
        uVar5 = (uint)(ushort)(*(ushort *)((int)puVar3 + 1) << 8 | *(ushort *)((int)puVar3 + 1) >> 8
                              );
        if (param_2 < uVar5) {
          uVar2 = *puVar3;
          *(uint *)(param_1 + 0x10) = uVar6;
          *(uint *)(param_1 + 0x14) = uVar5 - uVar6;
          param_1[0x18] = (char)uVar2;
          return CONCAT31((int3)((uint)puVar3 >> 8),(char)uVar2);
        }
        puVar3 = (ushort *)((int)puVar3 + 3);
        uVar6 = uVar5;
      } while (puVar3 < (ushort *)(*(int *)(param_1 + 0xc) + (int)puVar1));
    }
    else if (*param_1 == '\0') {
      return CONCAT31(uVar4,*(undefined1 *)((int)puVar1 + param_2));
    }
  }
  return 0;
}

