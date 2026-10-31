/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140150c8d */

undefined8 FUN_140150c8d(char *param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined7 uVar4;
  ushort *puVar3;
  ushort uVar5;
  uint uVar6;
  
  puVar1 = *(ushort **)(param_1 + 8);
  if (puVar1 != (ushort *)0x0) {
    uVar4 = (undefined7)((ulonglong)puVar1 >> 8);
    if (*param_1 == '\x03') {
      if (param_2 - *(int *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) {
        return CONCAT71(uVar4,param_1[0x1c]);
      }
      puVar3 = puVar1 + 1;
      uVar5 = *puVar1 << 8 | *puVar1 >> 8;
      do {
        uVar6 = (uint)uVar5;
        if (param_2 < uVar6) {
          return 0;
        }
        uVar5 = *(ushort *)((longlong)puVar3 + 1) << 8 | *(ushort *)((longlong)puVar3 + 1) >> 8;
        if (param_2 < uVar5) {
          uVar2 = *puVar3;
          *(uint *)(param_1 + 0x14) = uVar6;
          *(uint *)(param_1 + 0x18) = uVar5 - uVar6;
          param_1[0x1c] = (char)uVar2;
          return CONCAT71((int7)((ulonglong)puVar3 >> 8),(char)uVar2);
        }
        puVar3 = (ushort *)((longlong)puVar3 + 3);
      } while (puVar3 < (ushort *)((ulonglong)*(uint *)(param_1 + 0x10) + (longlong)puVar1));
    }
    else if (*param_1 == '\0') {
      return CONCAT71(uVar4,*(undefined1 *)((longlong)puVar1 + (ulonglong)param_2));
    }
  }
  return 0;
}

