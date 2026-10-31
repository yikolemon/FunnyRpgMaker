/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10260d66 */

uint __fastcall FUN_10260d66(uint *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *(ushort *)((int)param_1 + 0x2e);
  puVar4 = (ushort *)(uint)uVar1;
  if (puVar4 == (ushort *)0x46) {
    puVar4 = (ushort *)(*param_1 & 8);
    if (puVar4 == (ushort *)0x0) {
      *(undefined1 *)(param_1 + 6) = 7;
      uVar3 = FUN_10260ef0();
      return uVar3;
    }
  }
  else if (puVar4 == (ushort *)0x4e) {
    puVar4 = (ushort *)(*param_1 & 8);
    if (puVar4 == (ushort *)0x0) {
      *(undefined1 *)(param_1 + 6) = 8;
      goto LAB_10260da4;
    }
  }
  else {
    if (param_1[10] != 0) {
LAB_10260da4:
      uVar3 = param_1[2];
      *(undefined1 *)(uVar3 + 0x1c) = 1;
      *(undefined4 *)(uVar3 + 0x18) = 0x16;
      uVar3 = FUN_10274034(0,0,0,0,0,param_1[2]);
      return uVar3 & 0xffffff00;
    }
    if (uVar1 < 0x6b) {
      if (uVar1 == 0x6a) {
        param_1[10] = 5;
        goto LAB_10260eec;
      }
      if (puVar4 == (ushort *)0x49) {
        puVar2 = (ushort *)param_1[3];
        puVar4 = (ushort *)(uint)*puVar2;
        if ((puVar4 == (ushort *)0x33) && (puVar2[1] == 0x32)) {
          puVar4 = puVar2 + 2;
          param_1[10] = 10;
          param_1[3] = (uint)puVar4;
        }
        else if (puVar4 == (ushort *)0x36) {
          if (puVar2[1] == 0x34) {
            puVar4 = puVar2 + 2;
            param_1[10] = 0xb;
            param_1[3] = (uint)puVar4;
          }
        }
        else if ((((puVar4 == (ushort *)0x64) || (puVar4 == (ushort *)0x69)) ||
                 (puVar4 == (ushort *)0x6f)) ||
                (((puVar4 == (ushort *)0x75 || (puVar4 == (ushort *)0x78)) ||
                 (puVar4 == (ushort *)0x58)))) {
          param_1[10] = 9;
        }
        goto LAB_10260eec;
      }
      if (puVar4 == (ushort *)0x4c) {
        param_1[10] = 8;
        goto LAB_10260eec;
      }
      if (puVar4 == (ushort *)0x54) {
        param_1[10] = 0xd;
        goto LAB_10260eec;
      }
      if (uVar1 != 0x68) goto LAB_10260eec;
      if (*(short *)param_1[3] == 0x68) {
        param_1[3] = (uint)((short *)param_1[3] + 1);
        puVar4 = (ushort *)0x1;
      }
      else {
        puVar4 = (ushort *)0x2;
      }
    }
    else {
      if (uVar1 != 0x6c) {
        if (puVar4 == (ushort *)0x74) {
          param_1[10] = 7;
        }
        else if (puVar4 == (ushort *)0x77) {
          param_1[10] = 0xc;
        }
        else if (puVar4 == (ushort *)0x7a) {
          param_1[10] = 6;
        }
        goto LAB_10260eec;
      }
      if (*(short *)param_1[3] == 0x6c) {
        param_1[3] = (uint)((short *)param_1[3] + 1);
        puVar4 = (ushort *)0x4;
      }
      else {
        puVar4 = (ushort *)0x3;
      }
    }
    param_1[10] = (uint)puVar4;
  }
LAB_10260eec:
  return CONCAT31((int3)((uint)puVar4 >> 8),1);
}

