/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00410794 */

uint * __cdecl FUN_00410794(uint *param_1,uint *param_2,int *param_3)

{
  short sVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint *puVar4;
  byte bVar5;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if ((short)*param_1 == 0x7d) {
    return param_1;
  }
  puVar4 = FUN_00410941(param_1,param_2,param_3);
  if (puVar4 == param_2) {
    return puVar4;
  }
  sVar1 = (short)*puVar4;
  if (sVar1 == 0x20) {
    *(undefined1 *)((int)param_3 + 0xd) = 1;
    bVar5 = (char)param_3[3] - 1;
    uVar2 = 3;
LAB_00410801:
    if (8 < bVar5) goto LAB_004108de;
    *(undefined1 *)(*param_3 + 10) = uVar2;
    puVar4 = (uint *)((int)puVar4 + 2);
  }
  else {
    if (sVar1 == 0x2d) {
      *(undefined1 *)((int)param_3 + 0xd) = 1;
      bVar5 = (char)param_3[3] - 1;
      uVar2 = 2;
      goto LAB_00410801;
    }
    if (sVar1 == 0x2b) {
      *(undefined1 *)((int)param_3 + 0xd) = 1;
      bVar5 = (char)param_3[3] - 1;
      uVar2 = 1;
      goto LAB_00410801;
    }
  }
  if (puVar4 != param_2) {
    uVar3 = (ushort)*puVar4;
    if (uVar3 == 0x23) {
      *(undefined1 *)((int)param_3 + 0xd) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_004108de;
      *(undefined1 *)(*param_3 + 0xb) = 1;
      puVar4 = (uint *)((int)puVar4 + 2);
      if (puVar4 == param_2) {
        return puVar4;
      }
      uVar3 = *(ushort *)puVar4;
    }
    if (uVar3 == 0x30) {
      *(undefined1 *)((int)param_3 + 0xe) = 1;
      if (9 < (byte)((char)param_3[3] - 1U)) {
                    /* WARNING: Subroutine does not return */
        FUN_0040ba4e(0x504960);
      }
      *(undefined1 *)(*param_3 + 0xd) = 1;
      puVar4 = (uint *)((int)puVar4 + 2);
      if (puVar4 == param_2) {
        return puVar4;
      }
    }
    puVar4 = (uint *)FUN_00410a12((ushort *)puVar4,(ushort *)param_2,param_3);
    if (puVar4 != param_2) {
      uVar3 = (ushort)*puVar4;
      if (uVar3 == 0x2e) {
        puVar4 = (uint *)FUN_00410aae((int)puVar4,(ushort *)param_2,param_3);
        if (puVar4 == param_2) {
          return puVar4;
        }
        uVar3 = (ushort)*puVar4;
      }
      if (uVar3 == 0x4c) {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_004108de:
                    /* WARNING: Subroutine does not return */
          FUN_0040ba4e(0x504997);
        }
        *(undefined1 *)(*param_3 + 0xc) = 1;
        puVar4 = (uint *)((int)puVar4 + 2);
        if (puVar4 == param_2) {
          return puVar4;
        }
        uVar3 = *(ushort *)puVar4;
      }
      if (uVar3 == 0x7d) {
        FUN_00410b80(param_3,0);
      }
      else {
        FUN_00410b80(param_3,uVar3);
        puVar4 = (uint *)((int)puVar4 + 2);
      }
    }
  }
  return puVar4;
}

