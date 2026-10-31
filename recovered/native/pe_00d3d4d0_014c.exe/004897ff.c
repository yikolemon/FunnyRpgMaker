/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004897ff */

uint __fastcall FUN_004897ff(__uint64 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ushort *puVar5;
  
  uVar1 = *(ushort *)((int)param_1 + 0x2e);
  puVar5 = (ushort *)(uint)uVar1;
  if (puVar5 == (ushort *)0x46) {
    puVar5 = (ushort *)((uint)*param_1 & 8);
    if (puVar5 == (ushort *)0x0) {
      *(undefined1 *)(param_1 + 3) = 7;
      uVar4 = FUN_00489989(param_1);
      return uVar4;
    }
  }
  else if (puVar5 == (ushort *)0x4e) {
    puVar5 = (ushort *)((uint)*param_1 & 8);
    if (puVar5 == (ushort *)0x0) {
      *(undefined1 *)(param_1 + 3) = 8;
      goto LAB_0048983d;
    }
  }
  else {
    if ((int)param_1[5] != 0) {
LAB_0048983d:
      _Var3 = param_1[1];
      *(undefined1 *)((int)_Var3 + 0x1c) = 1;
      *(undefined4 *)((int)_Var3 + 0x18) = 0x16;
      uVar4 = FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,*(int **)(param_1 + 1));
      return uVar4 & 0xffffff00;
    }
    if (uVar1 < 0x6b) {
      if (uVar1 == 0x6a) {
        *(undefined4 *)(param_1 + 5) = 5;
        goto LAB_00489985;
      }
      if (puVar5 == (ushort *)0x49) {
        puVar2 = *(ushort **)((int)param_1 + 0xc);
        puVar5 = (ushort *)(uint)*puVar2;
        if ((puVar5 == (ushort *)0x33) && (puVar2[1] == 0x32)) {
          puVar5 = puVar2 + 2;
          *(undefined4 *)(param_1 + 5) = 10;
          *(ushort **)((int)param_1 + 0xc) = puVar5;
        }
        else if (puVar5 == (ushort *)0x36) {
          if (puVar2[1] == 0x34) {
            puVar5 = puVar2 + 2;
            *(undefined4 *)(param_1 + 5) = 0xb;
            *(ushort **)((int)param_1 + 0xc) = puVar5;
          }
        }
        else if ((((puVar5 == (ushort *)0x64) || (puVar5 == (ushort *)0x69)) ||
                 (puVar5 == (ushort *)0x6f)) ||
                (((puVar5 == (ushort *)0x75 || (puVar5 == (ushort *)0x78)) ||
                 (puVar5 == (ushort *)0x58)))) {
          *(undefined4 *)(param_1 + 5) = 9;
        }
        goto LAB_00489985;
      }
      if (puVar5 == (ushort *)0x4c) {
        *(undefined4 *)(param_1 + 5) = 8;
        goto LAB_00489985;
      }
      if (puVar5 == (ushort *)0x54) {
        *(undefined4 *)(param_1 + 5) = 0xd;
        goto LAB_00489985;
      }
      if (uVar1 != 0x68) goto LAB_00489985;
      if (**(short **)((int)param_1 + 0xc) == 0x68) {
        *(short **)((int)param_1 + 0xc) = *(short **)((int)param_1 + 0xc) + 1;
        puVar5 = (ushort *)0x1;
      }
      else {
        puVar5 = (ushort *)0x2;
      }
    }
    else {
      if (uVar1 != 0x6c) {
        if (puVar5 == (ushort *)0x74) {
          *(undefined4 *)(param_1 + 5) = 7;
        }
        else if (puVar5 == (ushort *)0x77) {
          *(undefined4 *)(param_1 + 5) = 0xc;
        }
        else if (puVar5 == (ushort *)0x7a) {
          *(undefined4 *)(param_1 + 5) = 6;
        }
        goto LAB_00489985;
      }
      if (**(short **)((int)param_1 + 0xc) == 0x6c) {
        *(short **)((int)param_1 + 0xc) = *(short **)((int)param_1 + 0xc) + 1;
        puVar5 = (ushort *)0x4;
      }
      else {
        puVar5 = (ushort *)0x3;
      }
    }
    *(ushort **)(param_1 + 5) = puVar5;
  }
LAB_00489985:
  return CONCAT31((int3)((uint)puVar5 >> 8),1);
}

